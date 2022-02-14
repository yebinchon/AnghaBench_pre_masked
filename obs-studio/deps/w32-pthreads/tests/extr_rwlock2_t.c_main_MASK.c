
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {long tv_sec; int tv_nsec; int member_1; int member_0; } ;
struct TYPE_3__ {int const millitm; scalar_t__ time; } ;
typedef TYPE_1__ PTW32_STRUCT_TIMEB ;
typedef int DWORD ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int **,struct timespec*) ;
 scalar_t__ FUNC_4 (int **) ;
 int * VAR_1 ;

int
FUNC_5()
{
  struct timespec VAR_2 = { 0, 0 };
  PTW32_STRUCT_TIMEB VAR_3;
  const DWORD VAR_4 = 1000000;

  FUNC_0(&VAR_3);

  VAR_2.tv_sec = (long)VAR_3.time;
  VAR_2.tv_nsec = VAR_4 * VAR_3.millitm;

  VAR_2.tv_sec += 1;

  FUNC_1(VAR_1 == VAR_0);

  FUNC_1(FUNC_3(&VAR_1, &VAR_2) == 0);

  FUNC_1(VAR_1 != VAR_0);

  FUNC_1(VAR_1 != ((void*)0));

  FUNC_1(FUNC_4(&VAR_1) == 0);

  FUNC_1(FUNC_2(&VAR_1) == 0);

  FUNC_1(VAR_1 == ((void*)0));

  return 0;
}
