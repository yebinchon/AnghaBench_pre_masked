
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int int64_t ;
struct TYPE_3__ {scalar_t__ dwHighDateTime; scalar_t__ dwLowDateTime; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ FILETIME ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct timeval*,int *) ;

double FUNC_3(void) {
  double VAR_0;

  struct timeval VAR_1;
  if (FUNC_2(&VAR_1, ((void*)0) ) != 0) return 0;
  VAR_0 = (double) VAR_1.tv_sec + (((double) VAR_1.tv_usec) / 1000000.0);
  return VAR_0;
}
