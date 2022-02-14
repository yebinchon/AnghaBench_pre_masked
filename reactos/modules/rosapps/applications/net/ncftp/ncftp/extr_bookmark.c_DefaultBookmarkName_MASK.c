
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (char*,char*) ;

void
FUNC_5(char *VAR_0, size_t VAR_1, char *VAR_2)
{
 char VAR_3[128];
 const char *VAR_4;
 const char *VAR_5;

 (void) FUNC_1(VAR_3, VAR_2);





 VAR_4 = VAR_3;
 if ((VAR_4 = FUNC_4(VAR_3, ".")) == ((void*)0))
  VAR_4 = VAR_3;
 else if ((FUNC_0(VAR_4, "ftp", 3)) || (FUNC_0(VAR_4, "www", 3))) {
  if ((VAR_4 = FUNC_4(((void*)0), ".")) == ((void*)0))
   VAR_4 = "";
 }
 for (VAR_5 = VAR_4; ; VAR_5++) {
  if (*VAR_5 == '\0') {

   VAR_4 = "";
  }
  if (!FUNC_3((int) *VAR_5))
   break;
 }
 (void) FUNC_2(VAR_0, VAR_4, VAR_1);
}
