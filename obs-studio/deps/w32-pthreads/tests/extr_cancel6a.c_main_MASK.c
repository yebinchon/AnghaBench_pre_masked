
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * p; } ;
typedef TYPE_1__ pthread_t ;
struct TYPE_8__ {int started; int threadnum; int count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int ,void*) ;
 scalar_t__ FUNC_5 (TYPE_1__,void**) ;
 TYPE_1__ FUNC_6 () ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;

int
FUNC_7()
{
  int VAR_6 = 0;
  int VAR_7;
  pthread_t VAR_8[VAR_1 + 1];

  FUNC_1((VAR_8[0] = FUNC_6()).p != ((void*)0));

  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++)
    {
      VAR_5[VAR_7].started = 0;
      VAR_5[VAR_7].threadnum = VAR_7;
      FUNC_1(FUNC_4(&VAR_8[VAR_7], ((void*)0), VAR_3, (void *) &VAR_5[VAR_7]) == 0);
    }




  FUNC_0(500);

  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++)
    {
      FUNC_1(FUNC_3(VAR_8[VAR_7]) == 0);
      FUNC_1(FUNC_3(VAR_8[VAR_7]) == VAR_0);
    }




  FUNC_0(VAR_1 * 100);




  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++)
    {
      if (!VAR_5[VAR_7].started)
 {
   VAR_6 |= !VAR_5[VAR_7].started;
   FUNC_2(VAR_4, "Thread %d: started %d\n", VAR_7, VAR_5[VAR_7].started);
 }
    }

  FUNC_1(!VAR_6);




  VAR_6 = 0;
  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++)
    {
      int VAR_9 = 0;
      void* VAR_10 = (void*)0;






      FUNC_1(FUNC_5(VAR_8[VAR_7], &VAR_10) == 0);

      VAR_9 = (VAR_10 != VAR_2);

      if (VAR_9)
 {
   FUNC_2(VAR_4, "Thread %d: started %d: count %d\n",
    VAR_7,
    VAR_5[VAR_7].started,
    VAR_5[VAR_7].count);
 }
      VAR_6 = (VAR_6 || VAR_9);
    }

  FUNC_1(!VAR_6);




  return 0;
}
