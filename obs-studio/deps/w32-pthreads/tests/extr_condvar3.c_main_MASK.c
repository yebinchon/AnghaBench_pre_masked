
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timespec {long tv_sec; int tv_nsec; int member_1; int member_0; } ;
struct TYPE_7__ {int * p; } ;
typedef TYPE_1__ pthread_t ;
struct TYPE_8__ {int const millitm; scalar_t__ time; } ;
typedef TYPE_2__ PTW32_STRUCT_TIMEB ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,struct timespec*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int ,void*) ;
 scalar_t__ FUNC_6 (TYPE_1__,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 TYPE_1__ FUNC_10 () ;
 scalar_t__ VAR_4 ;

int
FUNC_11()
{
  pthread_t VAR_5[VAR_0];
  struct timespec VAR_6 = { 0, 0 };
  PTW32_STRUCT_TIMEB VAR_7;
  const DWORD VAR_8 = 1000000;

  FUNC_1((VAR_5[0] = FUNC_10()).p != ((void*)0));

  FUNC_1(FUNC_3(&VAR_1, ((void*)0)) == 0);

  FUNC_1(FUNC_7(&VAR_2, ((void*)0)) == 0);

  FUNC_1(FUNC_8(&VAR_2) == 0);


  FUNC_0(&VAR_7);

  VAR_6.tv_sec = (long)VAR_7.time;
  VAR_6.tv_nsec = VAR_8 * VAR_7.millitm;

  FUNC_1(FUNC_5(&VAR_5[1], ((void*)0), VAR_3, (void *) 1) == 0);

  VAR_6.tv_sec += 5;

  while (! (VAR_4 > 0))
    FUNC_1(FUNC_4(&VAR_1, &VAR_2, &VAR_6) == 0);

  FUNC_1(VAR_4 > 0);

  FUNC_1(FUNC_9(&VAR_2) == 0);

  FUNC_1(FUNC_6(VAR_5[1], ((void*)0)) == 0);

  FUNC_1(FUNC_2(&VAR_1) == 0);

  return 0;
}
