
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int delimiters ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,...) ;
 scalar_t__ FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_0, int VAR_1, char *VAR_2,
     char *VAR_3)
{
 char *VAR_4 = "  ";
 static char VAR_5[256];
 int VAR_6, VAR_7 = 0;

 if (!VAR_1)
  return;

 if (VAR_1 == 1) {
  FUNC_2(VAR_5, " ");
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_1 - 1; ++VAR_6)
   VAR_7 += FUNC_1(&VAR_5[VAR_7], sizeof(VAR_5) - VAR_7,
          "%s", VAR_4);
 }

 if (VAR_2 && VAR_3) {
  FUNC_0(VAR_0, "%s", VAR_5);
  FUNC_0(VAR_0, "%s:%s\n", VAR_2, VAR_3);
 } else if (VAR_2) {
  FUNC_0(VAR_0, "%s", VAR_5);
  FUNC_0(VAR_0, "%s\n", VAR_2);
 }
}
