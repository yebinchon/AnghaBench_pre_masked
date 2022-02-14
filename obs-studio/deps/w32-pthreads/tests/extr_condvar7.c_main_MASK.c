
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_11__ {int * p; } ;
typedef TYPE_1__ pthread_t ;
struct TYPE_15__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_14__ {int * notbusy; int * lock; scalar_t__ shared; } ;
struct TYPE_13__ {int started; int threadnum; } ;
struct TYPE_12__ {int const millitm; scalar_t__ time; } ;
typedef TYPE_2__ PTW32_STRUCT_TIMEB ;
typedef int DWORD ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 TYPE_9__ VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 TYPE_8__ VAR_5 ;
 int FUNC_3 (int ,char*,int,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 scalar_t__ FUNC_5 (int **) ;
 scalar_t__ FUNC_6 (int **) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *,int ,void*) ;
 scalar_t__ FUNC_8 (TYPE_1__,int *) ;
 scalar_t__ FUNC_9 (int **) ;
 scalar_t__ FUNC_10 (int **) ;
 scalar_t__ FUNC_11 (int **) ;
 TYPE_1__ FUNC_12 () ;
 int * VAR_7 ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;

int
FUNC_13()
{
  int VAR_10 = 0;
  int VAR_11;
  pthread_t VAR_12[VAR_0 + 1];

  PTW32_STRUCT_TIMEB VAR_13;
  const DWORD VAR_14 = 1000000;

  VAR_5.shared = 0;

  FUNC_2((VAR_12[0] = FUNC_12()).p != ((void*)0));

  FUNC_2(VAR_5.notbusy == VAR_1);

  FUNC_2(VAR_5.lock == VAR_2);

  FUNC_2(FUNC_10(&VAR_7) == 0);

  FUNC_0(&VAR_13);

  VAR_3.tv_sec = (time_t)VAR_13.time;
  VAR_3.tv_nsec = VAR_14 * VAR_13.millitm;

  VAR_3.tv_sec += 10;

  FUNC_2((VAR_12[0] = FUNC_12()).p != ((void*)0));

  VAR_4 = 0;

  for (VAR_11 = 1; VAR_11 <= VAR_0; VAR_11++)
    {
      VAR_9[VAR_11].started = 0;
      VAR_9[VAR_11].threadnum = VAR_11;
      FUNC_2(FUNC_7(&VAR_12[VAR_11], ((void*)0), VAR_6, (void *) &VAR_9[VAR_11]) == 0);
    }





  FUNC_2(FUNC_11(&VAR_7) == 0);




  FUNC_1(1000);




  FUNC_2(FUNC_4(VAR_12[1]) == 0);
  FUNC_2(FUNC_8(VAR_12[1], ((void*)0)) == 0);

  FUNC_2(FUNC_10(&VAR_5.lock) == 0);
  VAR_5.shared++;
  FUNC_2(FUNC_11(&VAR_5.lock) == 0);




  FUNC_2(FUNC_5(&VAR_5.notbusy) == 0);




  for (VAR_11 = 2; VAR_11 <= VAR_0; VAR_11++)
    FUNC_2(FUNC_8(VAR_12[VAR_11], ((void*)0)) == 0);





  FUNC_2(FUNC_9(&VAR_5.lock) == 0);

  FUNC_2(VAR_5.lock == ((void*)0));

  FUNC_2(FUNC_6(&VAR_5.notbusy) == 0);

  FUNC_2(VAR_5.notbusy == ((void*)0));




  for (VAR_11 = 1; VAR_11 <= VAR_0; VAR_11++)
    {
      VAR_10 = !VAR_9[VAR_11].started;

      if (VAR_10)
 {
   FUNC_3(VAR_8, "Thread %d: started %d\n", VAR_11, VAR_9[VAR_11].started);
 }
    }

  FUNC_2(!VAR_10);





  FUNC_2(VAR_4 == (VAR_0 - 1));




  return 0;
}
