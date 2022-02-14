
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_2__ {int started; int threadnum; int count; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_5 (int ,void**) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

int
FUNC_6 ()
{
  int VAR_5 = 0;
  int VAR_6;
  pthread_t VAR_7[VAR_0 + 1];

  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
    {
      VAR_4[VAR_6].started = 0;
      VAR_4[VAR_6].threadnum = VAR_6;
      FUNC_1 (FUNC_4 (&VAR_7[VAR_6], ((void*)0), VAR_2, (void *) &VAR_4[VAR_6])
       == 0);
    }




  FUNC_0 (500);

  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
    {
      FUNC_1 (FUNC_3 (VAR_7[VAR_6]) == 0);
    }




  FUNC_0 (VAR_0 * 100);




  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
    {
      if (!VAR_4[VAR_6].started)
 {
   VAR_5 |= !VAR_4[VAR_6].started;
   FUNC_2 (VAR_3, "Thread %d: started %d\n", VAR_6,
     VAR_4[VAR_6].started);
 }
    }

  FUNC_1 (!VAR_5);




  VAR_5 = 0;
  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
    {
      int VAR_8 = 0;
      void* VAR_9 = (void*)((int)(size_t)VAR_1 + 1);






      FUNC_1 (FUNC_5 (VAR_7[VAR_6], &VAR_9) == 0);

      VAR_8 = (VAR_9 != VAR_1);

      if (VAR_8)
 {
   FUNC_2 (VAR_3, "Thread %d: started %d: count %d\n",
     VAR_6, VAR_4[VAR_6].started, VAR_4[VAR_6].count);
 }
      VAR_5 = (VAR_5 || VAR_8);
    }

  FUNC_1 (!VAR_5);




  return 0;
}
