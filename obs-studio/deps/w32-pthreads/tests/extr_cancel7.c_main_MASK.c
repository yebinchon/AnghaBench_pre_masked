
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * p; } ;
struct TYPE_4__ {int started; int threadnum; int count; TYPE_2__ self; } ;
typedef int LPDWORD ;
typedef scalar_t__ HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,void*) ;
 scalar_t__ FUNC_3 (int *,int ,int ,void*,int ,unsigned int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int,int,...) ;
 scalar_t__ FUNC_6 (TYPE_2__) ;
 scalar_t__ FUNC_7 (TYPE_2__,int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

int
FUNC_8()
{
  int VAR_7 = 0;
  int VAR_8;
  HANDLE VAR_9[VAR_1 + 1];
  unsigned VAR_10;

  for (VAR_8 = 1; VAR_8 <= VAR_1; VAR_8++)
    {
      VAR_6[VAR_8].started = 0;
      VAR_6[VAR_8].threadnum = VAR_8;

      VAR_9[VAR_8] = (HANDLE) FUNC_3(((void*)0), 0, VAR_4, (void *) &VAR_6[VAR_8], 0, &VAR_10);



    }




  FUNC_1(500);




  for (VAR_8 = 1; VAR_8 <= VAR_1; VAR_8++)
    {
      FUNC_4(FUNC_7(VAR_6[VAR_8].self, 0) == 0);
      FUNC_4(FUNC_6(VAR_6[VAR_8].self) == 0);
    }




  FUNC_1(VAR_1 * 100);




  for (VAR_8 = 1; VAR_8 <= VAR_1; VAR_8++)
    {
      if (!VAR_6[VAR_8].started)
 {
   VAR_7 |= !VAR_6[VAR_8].started;
   FUNC_5(VAR_5, "Thread %d: started %d\n", VAR_8, VAR_6[VAR_8].started);
 }
    }

  FUNC_4(!VAR_7);




  VAR_7 = 0;
  for (VAR_8 = 1; VAR_8 <= VAR_1; VAR_8++)
    {
      int VAR_11 = 0;
      int VAR_12 = 0;


      FUNC_4(FUNC_0(VAR_9[VAR_8], (LPDWORD) &VAR_12) == VAR_3);







      FUNC_4(VAR_6[VAR_8].self.p != ((void*)0));
      FUNC_4(FUNC_7(VAR_6[VAR_8].self, 0) == VAR_0);

      VAR_11 = (VAR_12 != (int)(size_t)VAR_2);

      if (VAR_11)
 {
   FUNC_5(VAR_5, "Thread %d: started %d: count %d\n",
    VAR_8,
    VAR_6[VAR_8].started,
    VAR_6[VAR_8].count);
 }
      VAR_7 = (VAR_7 || VAR_11);
    }

  FUNC_4(!VAR_7);




  return 0;
}
