
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,...) ;
 int VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static void FUNC_4(void *VAR_3, size_t VAR_4)
{
 char *VAR_5 = VAR_3;
 char *VAR_6 = VAR_5 + VAR_4;
 char *VAR_7;
 char VAR_8[VAR_0];
 int VAR_9, VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 while (VAR_5 < VAR_6) {

  while (VAR_5 < VAR_6 && (*VAR_5 == ' ' || *VAR_5 == '\\' || *VAR_5 == '\n'))
   VAR_5++;

  VAR_7 = VAR_5;
  while (VAR_7 < VAR_6 && *VAR_7 != ' ' && *VAR_7 != '\\' && *VAR_7 != '\n')
   VAR_7++;

  VAR_9 = (*(VAR_7-1) == ':');

  if (VAR_9) {

   VAR_12 = 1;
   VAR_10 = 1;
  } else if (VAR_10) {

   FUNC_2(VAR_8, VAR_5, VAR_7-VAR_5);
   VAR_8[VAR_7 - VAR_5] = 0;
   if (VAR_12) {
    if (!VAR_11) {
     VAR_11 = 1;
     FUNC_3("source_%s := %s\n\n",
      VAR_2, VAR_8);
     FUNC_3("deps_%s := \\\n",
      VAR_2);
    }
    VAR_12 = 0;
   } else
    FUNC_3("  %s \\\n", VAR_8);
  }




  VAR_5 = VAR_7 + 1;
 }

 if (!VAR_11) {
  FUNC_1(VAR_1, "fixdep: parse error; no targets found\n");
  FUNC_0(1);
 }

 FUNC_3("\n%s: $(deps_%s)\n\n", VAR_2, VAR_2);
 FUNC_3("$(deps_%s):\n", VAR_2);
}
