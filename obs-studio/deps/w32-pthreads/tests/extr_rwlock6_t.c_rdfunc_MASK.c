
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
 scalar_t__ FUNC_2 (int *,struct timespec*) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_2 ;

void * FUNC_4(void * VAR_3)
{
  int VAR_4 = -1;
  struct timespec VAR_5 = { 0, 0 };
  PTW32_STRUCT_TIMEB VAR_6;
  const DWORD VAR_7 = 1000000;

  FUNC_0(&VAR_6);

  VAR_5.tv_sec = (long)VAR_6.time;
  VAR_5.tv_nsec = VAR_7 * VAR_6.millitm;


  if ((int) (size_t)VAR_3 == 1)
    {
      VAR_5.tv_sec += 1;
      FUNC_1(FUNC_2(&VAR_2, &VAR_5) == VAR_0);
      VAR_4 = 0;
    }
  else if ((int) (size_t)VAR_3 == 2)
    {
      VAR_5.tv_sec += 3;
      FUNC_1(FUNC_2(&VAR_2, &VAR_5) == 0);
      VAR_4 = VAR_1;
      FUNC_1(FUNC_3(&VAR_2) == 0);
    }

  return ((void *)(size_t)VAR_4);
}
