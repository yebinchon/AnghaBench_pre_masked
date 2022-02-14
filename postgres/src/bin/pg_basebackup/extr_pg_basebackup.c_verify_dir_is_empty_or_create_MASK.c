
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1, bool *VAR_2, bool *VAR_3)
{
 switch (FUNC_1(VAR_1))
 {
  case 0:




   if (FUNC_3(VAR_1, VAR_0) == -1)
   {
    FUNC_2("could not create directory \"%s\": %m", VAR_1);
    FUNC_0(1);
   }
   if (VAR_2)
    *VAR_2 = 1;
   return;
  case 1:




   if (VAR_3)
    *VAR_3 = 1;
   return;
  case 2:
  case 3:
  case 4:




   FUNC_2("directory \"%s\" exists but is not empty", VAR_1);
   FUNC_0(1);
  case -1:




   FUNC_2("could not access directory \"%s\": %m", VAR_1);
   FUNC_0(1);
 }
}
