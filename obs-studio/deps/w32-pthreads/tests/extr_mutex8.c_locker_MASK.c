
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {long tv_sec; int tv_nsec; int member_1; int member_0; } ;
struct TYPE_3__ {int const millitm; scalar_t__ time; } ;
typedef TYPE_1__ PTW32_STRUCT_TIMEB ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,struct timespec*) ;

void * FUNC_3(void * VAR_3)
{
  struct timespec VAR_4 = { 0, 0 };
  PTW32_STRUCT_TIMEB VAR_5;
  const DWORD VAR_6 = 1000000;

  FUNC_0(&VAR_5);

  VAR_4.tv_sec = (long)VAR_5.time;
  VAR_4.tv_nsec = VAR_6 * VAR_5.millitm;

  VAR_4.tv_sec += 1;

  FUNC_1(FUNC_2(&VAR_2, &VAR_4) == VAR_0);

  VAR_1++;

  return 0;
}
