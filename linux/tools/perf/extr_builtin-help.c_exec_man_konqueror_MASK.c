
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,char*,char*,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char const*) ;
 void* FUNC_8 (char const*,char) ;

__attribute__((used)) static void FUNC_9(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = FUNC_4("DISPLAY");

 if (VAR_2 && *VAR_2) {
  char *VAR_3;
  const char *VAR_4 = "kfmclient";


  if (VAR_0) {
   const char *VAR_5 = FUNC_8(VAR_0, '/');
   if (VAR_5 && !FUNC_5(VAR_5 + 1, "konqueror")) {
    char *VAR_6 = FUNC_7(VAR_0);
    char *VAR_7 = FUNC_8(VAR_6, '/');


    FUNC_6(VAR_7 + 1, "kfmclient");
    VAR_0 = VAR_6;
   }
   if (VAR_5)
    VAR_4 = VAR_5;
  } else
   VAR_0 = "kfmclient";
  if (FUNC_0(&VAR_3, "man:%s(1)", VAR_1) > 0) {
   FUNC_2(VAR_0, VAR_4, "newTab", VAR_3, ((void*)0));
   FUNC_3(VAR_3);
  }
  FUNC_1(VAR_0);
 }
}
