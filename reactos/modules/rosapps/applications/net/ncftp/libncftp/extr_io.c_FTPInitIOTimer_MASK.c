
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ longest_int ;
struct TYPE_3__ {double kBytesPerSec; double percentCompleted; double sec; double secLeft; int useProgressMeter; int t0; scalar_t__ dataTimedOut; scalar_t__ stalled; scalar_t__ nextProgressUpdate; int * lname; int * rname; int mdtm; int expectedSize; scalar_t__ bytesTransferred; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(const FTPCIPtr VAR_2)
{
 VAR_2->bytesTransferred = (longest_int) 0;
 VAR_2->expectedSize = VAR_1;
 VAR_2->mdtm = VAR_0;
 VAR_2->rname = ((void*)0);
 VAR_2->lname = ((void*)0);
 VAR_2->kBytesPerSec = -1.0;
 VAR_2->percentCompleted = -1.0;
 VAR_2->sec = -1.0;
 VAR_2->secLeft = -1.0;
 VAR_2->nextProgressUpdate = 0;
 VAR_2->stalled = 0;
 VAR_2->dataTimedOut = 0;
 VAR_2->useProgressMeter = 1;
 (void) FUNC_0(&VAR_2->t0, ((void*)0));
}
