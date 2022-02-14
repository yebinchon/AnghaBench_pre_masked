
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int delimiters ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_5(FILE *VAR_1, int VAR_2, char *VAR_3, char *VAR_4)
{
 char *VAR_5 = "  ";
 static char VAR_6[256];
 int VAR_7;

 if (!FUNC_3()) {
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  return;
 }

 if (VAR_2 == 0) {
  if (VAR_3)
   FUNC_2(VAR_1, "{");
  else
   FUNC_2(VAR_1, "\n}\n");

 } else {
  int VAR_8 = 0;

  for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7)
   VAR_8 += FUNC_4(&VAR_6[VAR_8], sizeof(VAR_6) - VAR_8,
          "%s", VAR_5);

  if (VAR_0 == VAR_2)
   FUNC_2(VAR_1, ",\n");

  if (VAR_4) {
   if (VAR_0 != VAR_2)
    FUNC_2(VAR_1, "\n");

   FUNC_2(VAR_1, "%s\"%s\": ", VAR_6, VAR_3);
   FUNC_2(VAR_1, "\"%s\"", VAR_4);
  } else {
   for (VAR_7 = VAR_0 - 1; VAR_7 >= VAR_2; --VAR_7) {
    int VAR_9 = 0;

    for (VAR_8 = VAR_7; VAR_8 > 0; --VAR_8)
     VAR_9 += FUNC_4(&VAR_6[VAR_9],
            sizeof(VAR_6) - VAR_9,
            "%s", VAR_5);
    if (VAR_7 == VAR_2 && VAR_3)
     FUNC_2(VAR_1, "\n%s},", VAR_6);
    else
     FUNC_2(VAR_1, "\n%s}", VAR_6);
   }
   if (FUNC_0(VAR_0 - VAR_2) < 3)
    FUNC_2(VAR_1, "\n");
   if (VAR_3)
    FUNC_2(VAR_1, "%s\"%s\": {", VAR_6,
     VAR_3);
  }
 }

 VAR_0 = VAR_2;
}
