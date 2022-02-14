
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const*) ;

char *FUNC_1(char **VAR_0, const char *VAR_1, char *VAR_2) {
 char *VAR_3 = *VAR_0;
 char *VAR_4 = VAR_3;
 bool VAR_5 = 0;
 bool VAR_6 = 0;
 bool VAR_7 = 0;
 char *VAR_8 = ((void*)0);

 while ((VAR_8 = FUNC_0(VAR_4, VAR_1))) {
  if (VAR_7 && VAR_8 != VAR_4) {
   VAR_7 = 0;
  }
  if (*VAR_8 == '"' && !VAR_6 && !VAR_7) {
   VAR_5 = !VAR_5;
   VAR_4 = VAR_8 + 1;
  } else if (*VAR_8 == '\'' && !VAR_5 && !VAR_7) {
   VAR_6 = !VAR_6;
   VAR_4 = VAR_8 + 1;
  } else if (*VAR_8 == '\\') {
   VAR_7 = !VAR_7;
   VAR_4 = VAR_8 + 1;
  } else if (!VAR_5 && !VAR_6 && !VAR_7) {

   VAR_4 = VAR_8;
   if (VAR_2) {
    *VAR_2 = *VAR_4;
   }
   if (VAR_4 - VAR_3) {
    *(VAR_4++) = 0;
    *VAR_0 = VAR_4;
    break;
   } else {
    VAR_4 = ++VAR_3;
   }
  } else {
   VAR_4++;
  }
 }
 if (!VAR_8) {
  *VAR_0 = ((void*)0);
  if (VAR_2) {
   *VAR_2 = '\0';
  }
 }
 return VAR_3;
}
