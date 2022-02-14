
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_usec; double tv_sec; } ;
struct TYPE_5__ {scalar_t__ nextProgressUpdate; double kBytesPerSec; double bytesTransferred; double expectedSize; double percentCompleted; double secLeft; double startPoint; double sec; scalar_t__ useProgressMeter; int (* progress ) (TYPE_1__* const,int ) ;struct timeval t0; } ;
typedef int (* FTPProgressMeterProc ) (TYPE_1__* const,int ) ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (struct timeval*,int *) ;
 int VAR_0 ;
 double VAR_1 ;
 int FUNC_1 (TYPE_1__* const,int ) ;
 int FUNC_2 (scalar_t__*) ;

void
FUNC_3(const FTPCIPtr VAR_2)
{
 double VAR_3;
 struct timeval *VAR_4, VAR_5;
 time_t VAR_6;

 (void) FUNC_2(&VAR_6);
 if (VAR_6 < VAR_2->nextProgressUpdate)
  return;
 VAR_6 += 1;
 VAR_2->nextProgressUpdate = VAR_6;

 (void) FUNC_0(&VAR_5, ((void*)0));
 VAR_4 = &VAR_2->t0;

 if (VAR_4->tv_usec > VAR_5) {
  VAR_5 += 1000000;
  VAR_5--;
 }
 VAR_3 = ((double) (VAR_5 - VAR_4->tv_usec) * 0.000001)
  + (VAR_5 - VAR_4->tv_sec);
 if (VAR_3 > 0.0) {
  VAR_2->kBytesPerSec = ((double) VAR_2->bytesTransferred) / (1024.0 * VAR_3);
 } else {
  VAR_2->kBytesPerSec = -1.0;
 }
 if (VAR_2->expectedSize == VAR_1) {
  VAR_2->percentCompleted = -1.0;
  VAR_2->secLeft = -1.0;
 } else if (VAR_2->expectedSize <= 0) {
  VAR_2->percentCompleted = 100.0;
  VAR_2->secLeft = 0.0;
 } else {
  VAR_2->percentCompleted = ((double) (100.0 * (VAR_2->bytesTransferred + VAR_2->startPoint))) / ((double) VAR_2->expectedSize);
  if (VAR_2->percentCompleted >= 100.0) {
   VAR_2->percentCompleted = 100.0;
   VAR_2->secLeft = 0.0;
  } else if (VAR_2->percentCompleted <= 0.0) {
   VAR_2->secLeft = 999.0;
  }
  if (VAR_2->kBytesPerSec > 0.0) {
   VAR_2->secLeft = ((VAR_2->expectedSize - VAR_2->bytesTransferred - VAR_2->startPoint) / 1024.0) / VAR_2->kBytesPerSec;
   if (VAR_2->secLeft < 0.0)
    VAR_2->secLeft = 0.0;
  }
 }
 VAR_2->sec = VAR_3;
 if ((VAR_2->progress != (FTPProgressMeterProc) 0) && (VAR_2->useProgressMeter != 0))
  (*VAR_2->progress)(VAR_2, VAR_0);
}
