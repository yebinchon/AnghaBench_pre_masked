
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GucSource ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (char*) ;

bool
FUNC_8(char **VAR_6, void **VAR_7, GucSource VAR_8)
{
 if (**VAR_6 == '\0')
 {
  FUNC_0("%s cannot be empty.",
       "default_table_access_method");
  return 0;
 }

 if (FUNC_7(*VAR_6) >= VAR_3)
 {
  FUNC_0("%s is too long (maximum %d characters).",
       "default_table_access_method", VAR_3 - 1);
  return 0;
 }






 if (FUNC_1() && VAR_2 != VAR_1)
 {
  if (!FUNC_2(FUNC_6(*VAR_6, 1)))
  {





   if (VAR_8 == VAR_5)
   {
    FUNC_3(VAR_4,
      (FUNC_4(VAR_0),
       FUNC_5("table access method \"%s\" does not exist",
        *VAR_6)));
   }
   else
   {
    FUNC_0("Table access method \"%s\" does not exist.",
         *VAR_6);
    return 0;
   }
  }
 }

 return 1;
}
