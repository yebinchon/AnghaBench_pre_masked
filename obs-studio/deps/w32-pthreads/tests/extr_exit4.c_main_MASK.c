
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int started; int threadnum; int count; } ;
typedef int LPDWORD ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,void*) ;
 scalar_t__ FUNC_3 (int *,int ,int ,void*,int ,unsigned int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int,int,...) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

int
FUNC_6()
{
  int VAR_5 = 0;
  int VAR_6;
  HANDLE VAR_7[VAR_0 + 1];
  unsigned VAR_8;

  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
    {
      VAR_4[VAR_6].started = 0;
      VAR_4[VAR_6].threadnum = VAR_6;

      VAR_7[VAR_6] = (HANDLE) FUNC_3(((void*)0), 0, VAR_2, (void *) &VAR_4[VAR_6], 0, &VAR_8);



    }




  FUNC_1(500);




  FUNC_1(VAR_0 * 100);




  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
    {
      if (!VAR_4[VAR_6].started)
 {
   VAR_5 |= !VAR_4[VAR_6].started;
   FUNC_5(VAR_3, "Thread %d: started %d\n", VAR_6, VAR_4[VAR_6].started);
 }
    }

  FUNC_4(!VAR_5);




  VAR_5 = 0;
  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
    {
      int VAR_9 = 0;
      int VAR_10 = 0;


      FUNC_4(FUNC_0(VAR_7[VAR_6], (LPDWORD) &VAR_10) == VAR_1);







      VAR_9 = (VAR_10 != 1);

      if (VAR_9)
 {
   FUNC_5(VAR_3, "Thread %d: started %d: count %d\n",
    VAR_6,
    VAR_4[VAR_6].started,
    VAR_4[VAR_6].count);
 }
      VAR_5 = (VAR_5 || VAR_9);
    }

  FUNC_4(!VAR_5);




  return 0;
}
