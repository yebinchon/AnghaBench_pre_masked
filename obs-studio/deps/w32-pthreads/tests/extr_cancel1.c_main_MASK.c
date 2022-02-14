
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p; } ;
typedef TYPE_1__ pthread_t ;
struct TYPE_6__ {int started; int threadnum; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ,void*) ;
 TYPE_1__ FUNC_4 () ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

int
FUNC_5()
{
  int VAR_4 = 0;
  int VAR_5;
  pthread_t VAR_6[VAR_0 + 1];

  FUNC_1((VAR_6[0] = FUNC_4()).p != ((void*)0));

  for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++)
    {
      VAR_3[VAR_5].started = 0;
      VAR_3[VAR_5].threadnum = VAR_5;
      FUNC_1(FUNC_3(&VAR_6[VAR_5], ((void*)0), VAR_1, (void *) &VAR_3[VAR_5]) == 0);
    }
  FUNC_0(VAR_0 * 100);




  for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++)
    {
      VAR_4 = !VAR_3[VAR_5].started;

      if (VAR_4)
 {
   FUNC_2(VAR_2, "Thread %d: started %d\n", VAR_5, VAR_3[VAR_5].started);
 }
    }

  FUNC_1(!VAR_4);




  for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++)
    {

    }

  FUNC_1(!VAR_4);




  return 0;
}
