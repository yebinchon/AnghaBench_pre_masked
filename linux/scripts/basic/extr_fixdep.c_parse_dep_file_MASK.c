
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_7(char *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 void *VAR_8;

 while (1) {

  while (*VAR_1 == ' ' || *VAR_1 == '\\' || *VAR_1 == '\n')
   VAR_1++;

  if (!*VAR_1)
   break;


  VAR_3 = VAR_1;
  while (*VAR_3 && *VAR_3 != ' ' && *VAR_3 != '\\' && *VAR_3 != '\n')
   VAR_3++;
  VAR_4 = (*VAR_3 == '\0');

  VAR_5 = (*(VAR_3-1) == ':');

  if (VAR_5) {

   VAR_7 = 1;
  } else if (!FUNC_3(VAR_1, VAR_3 - VAR_1)) {
   *VAR_3 = '\0';







   if (VAR_7) {
    if (!VAR_6) {
     VAR_6 = 1;
     FUNC_6("source_%s := %s\n\n",
      VAR_2, VAR_1);
     FUNC_6("deps_%s := \\\n", VAR_2);
    }
    VAR_7 = 0;
   } else {
    FUNC_6("  %s \\\n", VAR_1);
   }

   VAR_8 = FUNC_5(VAR_1);
   FUNC_4(VAR_8);
   FUNC_2(VAR_8);
  }

  if (VAR_4)
   break;





  VAR_1 = VAR_3 + 1;
 }

 if (!VAR_6) {
  FUNC_1(VAR_0, "fixdep: parse error; no targets found\n");
  FUNC_0(1);
 }

 FUNC_6("\n%s: $(deps_%s)\n\n", VAR_2, VAR_2);
 FUNC_6("$(deps_%s):\n", VAR_2);
}
