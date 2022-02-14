
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_size; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (long) ;
 long VAR_8 ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static bool
FUNC_9(void)
{
 if (FUNC_8(VAR_0, &VAR_9) == 0)
 {





  if (VAR_1 == -1 && FUNC_0(VAR_6))
  {
   if (FUNC_2())
   {




    VAR_5 = FUNC_1();
    if (VAR_3)
    {
     FUNC_6(VAR_10,
       FUNC_3("WAL segment size:     %d \n"), VAR_1);
     FUNC_6(VAR_10, "Keep archive history: ");

     if (VAR_5)
      FUNC_6(VAR_10, "%s and later\n",
        VAR_4);
     else
      FUNC_6(VAR_10, "no cleanup required\n");
    }
   }
  }




  if (VAR_1 > 0 && VAR_9.st_size == VAR_1)
  {
   VAR_7 = VAR_2;
   return 1;
  }




  if (VAR_1 > 0 && VAR_9.st_size > VAR_1)
  {
   if (VAR_3)
   {
    FUNC_6(VAR_10, "file size greater than expected\n");
    FUNC_5(VAR_10);
   }
   FUNC_4(3);
  }
 }

 return 0;
}
