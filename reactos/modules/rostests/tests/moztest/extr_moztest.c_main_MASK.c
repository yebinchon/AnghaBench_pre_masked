
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(int VAR_0, char **VAR_1)
{
   if (VAR_0 != 2)
   {
      FUNC_3("Usage: %s test_name\n\n", VAR_1[0]);
      FUNC_3("Valid test names:\n");
      FUNC_3("\tsocket\n");
      FUNC_3("\tvirtual\n");
      return 0;
   }

   if (!FUNC_2(VAR_1[1], "socket"))
      return FUNC_0();
   if (!FUNC_2(VAR_1[1], "virtual"))
      return FUNC_1();

   FUNC_3("Test '%s' doesn't exist\n", VAR_1[1]);

   return 0;
}
