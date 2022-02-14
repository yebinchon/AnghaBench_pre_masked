
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * p; } ;
struct TYPE_3__ {int started; int threadnum; int count; TYPE_2__ self; } ;
typedef int LPDWORD ;
typedef scalar_t__ HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,void*) ;
 scalar_t__ FUNC_3 (int *,int ,int ,void*,int ,unsigned int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int,int,...) ;
 scalar_t__ FUNC_6 (TYPE_2__,int ) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

int
FUNC_7()
{
  int VAR_6 = 0;
  int VAR_7;
  HANDLE VAR_8[VAR_1 + 1];
  unsigned VAR_9;

  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++)
    {
      VAR_5[VAR_7].started = 0;
      VAR_5[VAR_7].threadnum = VAR_7;

      VAR_8[VAR_7] = (HANDLE) FUNC_3(((void*)0), 0, VAR_3, (void *) &VAR_5[VAR_7], 0, &VAR_9);



    }




  FUNC_1(500);




  FUNC_1(VAR_1 * 100);




  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++)
    {
      if (!VAR_5[VAR_7].started)
 {
   VAR_6 |= !VAR_5[VAR_7].started;
   FUNC_5(VAR_4, "Thread %d: started %d\n", VAR_7, VAR_5[VAR_7].started);
 }
    }

  FUNC_4(!VAR_6);




  VAR_6 = 0;
  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++)
    {
      int VAR_10 = 0;
      int VAR_11 = 0;


      FUNC_4(FUNC_0(VAR_8[VAR_7], (LPDWORD) &VAR_11) == VAR_2);







      FUNC_4(VAR_5[VAR_7].self.p != ((void*)0) && FUNC_6(VAR_5[VAR_7].self, 0) == VAR_0);

      VAR_10 = (VAR_11 != 1);

      if (VAR_10)
 {
   FUNC_5(VAR_4, "Thread %d: started %d: count %d\n",
    VAR_7,
    VAR_5[VAR_7].started,
    VAR_5[VAR_7].count);
 }
      VAR_6 = (VAR_6 || VAR_10);
    }

  FUNC_4(!VAR_6);




  return 0;
}
