
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {double tv_sec; double tv_usec; } ;
struct timespec {double tv_sec; double tv_nsec; } ;
struct TYPE_4__ {double QuadPart; int HighPart; int LowPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_5__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef TYPE_2__ FILETIME ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (char*) ;

int
FUNC_4(double *VAR_1)
{
 struct timeval VAR_2;
 int VAR_3 = FUNC_2(&VAR_2, ((void*)0));
 if (VAR_3 < 0) {
  FUNC_3("gettimeofday");
  return -1;
 }

 *VAR_1 = VAR_2.tv_sec + (VAR_2.tv_usec / 1000000.0);


 return 0;
}
