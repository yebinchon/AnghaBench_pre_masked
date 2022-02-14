
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (int,char const*) ;

__attribute__((used)) static void
FUNC_5(int VAR_0, const char *VAR_1, char **VAR_2)
{
 char *VAR_3;
 char *VAR_4;

 if (VAR_2)
  *VAR_2 = ((void*)0);

 VAR_3 = FUNC_4(VAR_0, ((void*)0));
 if (!VAR_3)
 {
  FUNC_2("setlocale() failed");
  FUNC_0(1);
 }


 VAR_3 = FUNC_3(VAR_3);


 if (!VAR_1)
  VAR_1 = "";


 VAR_4 = FUNC_4(VAR_0, VAR_1);


 if (VAR_4 && VAR_2)
  *VAR_2 = FUNC_3(VAR_4);


 if (!FUNC_4(VAR_0, VAR_3))
 {
  FUNC_2("failed to restore old locale \"%s\"", VAR_3);
  FUNC_0(1);
 }
 FUNC_1(VAR_3);


 if (VAR_4 == ((void*)0))
 {
  if (*VAR_1)
   FUNC_2("invalid locale name \"%s\"", VAR_1);
  else
  {
   FUNC_2("invalid locale settings; check LANG and LC_* environment variables");
  }
  FUNC_0(1);
 }
}
