
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timespec {long tv_sec; int tv_nsec; int member_1; int member_0; } ;
struct TYPE_8__ {int * p; } ;
typedef TYPE_1__ pthread_t ;
struct TYPE_10__ {scalar_t__ shared; int * notbusy; int * lock; } ;
struct TYPE_9__ {int const millitm; scalar_t__ time; } ;
typedef TYPE_2__ PTW32_STRUCT_TIMEB ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 TYPE_6__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int **,int **,struct timespec*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int ,void*) ;
 scalar_t__ FUNC_5 (TYPE_1__,int *) ;
 scalar_t__ FUNC_6 (int **) ;
 scalar_t__ FUNC_7 (int **) ;
 scalar_t__ FUNC_8 (int **) ;
 TYPE_1__ FUNC_9 () ;

int
FUNC_10()
{
  pthread_t VAR_6[VAR_1];
  struct timespec VAR_7 = { 0, 0 };
  PTW32_STRUCT_TIMEB VAR_8;
  const DWORD VAR_9 = 1000000;

  VAR_4.shared = 0;

  FUNC_1((VAR_6[0] = FUNC_9()).p != ((void*)0));

  FUNC_1(VAR_4.notbusy == VAR_2);

  FUNC_1(VAR_4.lock == VAR_3);

  FUNC_1(FUNC_7(&VAR_4.lock) == 0);

  FUNC_1(VAR_4.lock != VAR_3);


  FUNC_0(&VAR_8);

  VAR_7.tv_sec = (long)VAR_8.time;
  VAR_7.tv_nsec = VAR_9 * VAR_8.millitm;

  VAR_7.tv_sec += 5;

  FUNC_1(FUNC_3(&VAR_4.notbusy, &VAR_4.lock, &VAR_7) == VAR_0);

  FUNC_1(VAR_4.notbusy != VAR_2);

  FUNC_1(FUNC_4(&VAR_6[1], ((void*)0), VAR_5, (void *) 1) == 0);

  FUNC_0(&VAR_8);

  VAR_7.tv_sec = (long)VAR_8.time;
  VAR_7.tv_nsec = VAR_9 * VAR_8.millitm;

  VAR_7.tv_sec += 5;

  while (! (VAR_4.shared > 0))
    FUNC_1(FUNC_3(&VAR_4.notbusy, &VAR_4.lock, &VAR_7) == 0);

  FUNC_1(VAR_4.shared > 0);

  FUNC_1(FUNC_8(&VAR_4.lock) == 0);

  FUNC_1(FUNC_5(VAR_6[1], ((void*)0)) == 0);

  FUNC_1(FUNC_6(&VAR_4.lock) == 0);

  FUNC_1(VAR_4.lock == ((void*)0));

  FUNC_1(FUNC_2(&VAR_4.notbusy) == 0);

  FUNC_1(VAR_4.notbusy == ((void*)0));

  return 0;
}
