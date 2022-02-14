
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*,char*,char*,int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, const char *VAR_1)
{
 if (!FUNC_1()) {

  char *VAR_2;

  if (!VAR_0)
   VAR_0 = "emacsclient";
  if (FUNC_0(&VAR_2, "(woman \"%s\")", VAR_1) > 0) {
   FUNC_3(VAR_0, "emacsclient", "-e", VAR_2, ((void*)0));
   FUNC_4(VAR_2);
  }
  FUNC_2(VAR_0);
 }
}
