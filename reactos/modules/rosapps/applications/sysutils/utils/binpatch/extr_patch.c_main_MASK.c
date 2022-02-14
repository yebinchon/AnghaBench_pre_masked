
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int
FUNC_5(
   int VAR_2,
   char *VAR_3[])
{
   VAR_0 = VAR_2;
   VAR_1 = VAR_3;

   if (VAR_2 >= 2 && (FUNC_4(VAR_3[1], "-h") == 0 || FUNC_4(VAR_3[1], "--help") == 0))
   {
      FUNC_2();
      return 0;
   }
   else if (VAR_2 >= 2 && VAR_3[1][0] == '-')
   {
      if (FUNC_4(VAR_3[1], "-c") == 0)
      {
         return FUNC_1();
      }
      else if (FUNC_4(VAR_3[1], "-d") == 0)
      {
         return FUNC_0();
      }
      else
      {
         FUNC_3("Unknown option: %s\n"
                "Use -h for help.\n",
                VAR_3[1]);
         return -1;
      }
   }

   return FUNC_0();
}
