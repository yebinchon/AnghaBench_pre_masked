
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GucSource ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int) ;

bool
FUNC_7(char **VAR_5, void **VAR_6, GucSource VAR_7)
{





 if (FUNC_1() && VAR_2 != VAR_1)
 {
  if (**VAR_5 != '\0' &&
   !FUNC_2(FUNC_6(*VAR_5, 1)))
  {




   if (VAR_7 == VAR_4)
   {
    FUNC_3(VAR_3,
      (FUNC_4(VAR_0),
       FUNC_5("tablespace \"%s\" does not exist",
        *VAR_5)));
   }
   else
   {
    FUNC_0("Tablespace \"%s\" does not exist.",
         *VAR_5);
    return 0;
   }
  }
 }

 return 1;
}
