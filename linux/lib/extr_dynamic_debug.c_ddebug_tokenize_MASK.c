
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_6(char *VAR_2, char *VAR_3[], int VAR_4)
{
 int VAR_5 = 0;

 while (*VAR_2) {
  char *VAR_6;


  VAR_2 = FUNC_5(VAR_2);
  if (!*VAR_2)
   break;
  if (*VAR_2 == '#')
   break;


  if (*VAR_2 == '"' || *VAR_2 == '\'') {
   int VAR_7 = *VAR_2++;
   for (VAR_6 = VAR_2; *VAR_6 && *VAR_6 != VAR_7; VAR_6++)
    ;
   if (!*VAR_6) {
    FUNC_3("unclosed quote: %s\n", VAR_2);
    return -VAR_0;
   }
  } else {
   for (VAR_6 = VAR_2; *VAR_6 && !FUNC_1(*VAR_6); VAR_6++)
    ;
   FUNC_0(VAR_6 == VAR_2);
  }


  if (VAR_5 == VAR_4) {
   FUNC_3("too many words, legal max <=%d\n", VAR_4);
   return -VAR_0;
  }
  if (*VAR_6)
   *VAR_6++ = '\0';
  VAR_3[VAR_5++] = VAR_2;
  VAR_2 = VAR_6;
 }

 if (VAR_1) {
  int VAR_8;
  FUNC_4("split into words:");
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
   FUNC_2(" \"%s\"", VAR_3[VAR_8]);
  FUNC_2("\n");
 }

 return VAR_5;
}
