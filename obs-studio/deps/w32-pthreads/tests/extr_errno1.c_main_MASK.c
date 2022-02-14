
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
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__ FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;

int
FUNC_7()
{
  int VAR_6 = 0;
  int VAR_7;
  pthread_t VAR_8[VAR_0 + 1];

  FUNC_4(&VAR_4);
  VAR_1 = 0;

  FUNC_1((VAR_8[0] = FUNC_6()).p != ((void*)0));

  for (VAR_7 = 1; VAR_7 <= VAR_0; VAR_7++)
    {
      VAR_5[VAR_7].started = 0;
      VAR_5[VAR_7].threadnum = VAR_7;
      FUNC_1(FUNC_3(&VAR_8[VAR_7], ((void*)0), VAR_2, (void *) &VAR_5[VAR_7]) == 0);
    }




  FUNC_0(2000);
  FUNC_5(&VAR_4);




  FUNC_0(VAR_0 * 1000);




  for (VAR_7 = 1; VAR_7 <= VAR_0; VAR_7++)
    {
      VAR_6 = !VAR_5[VAR_7].started;

      if (VAR_6)
 {
   FUNC_2(VAR_3, "Thread %d: started %d\n", VAR_7, VAR_5[VAR_7].started);
 }
    }

  FUNC_1(!VAR_6);




  for (VAR_7 = 1; VAR_7 <= VAR_0; VAR_7++)
    {

    }

  FUNC_1(!VAR_6);




  return 0;
}
