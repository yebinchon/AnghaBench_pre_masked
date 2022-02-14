
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(char **VAR_1, const char *VAR_2, bool VAR_3,
       const char *VAR_4, const char *VAR_5,
       bool VAR_6)
{
 if (*VAR_1 == ((void*)0) || FUNC_5(*VAR_1) == 0)
 {
  const char *VAR_7;

  if ((VAR_7 = FUNC_2(VAR_2)) && FUNC_5(VAR_7))
   *VAR_1 = FUNC_4(VAR_7);
  else if (VAR_3)
  {
   char VAR_8[VAR_0];

   if (!FUNC_1(VAR_8, VAR_0))
    FUNC_3("could not determine current directory\n");
   *VAR_1 = FUNC_4(VAR_8);
  }
  else if (VAR_6)
   return;
  else
   FUNC_3("You must identify the directory where the %s.\n"
      "Please use the %s command-line option or the %s environment variable.\n",
      VAR_5, VAR_4, VAR_2);
 }





 FUNC_0(*VAR_1);
}
