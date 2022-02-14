
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int) ;
 char** FUNC_1 (char**,int) ;
 scalar_t__ FUNC_2 (int ,char const) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*,int ) ;
 int VAR_0 ;

char **FUNC_5(const char *VAR_1, int *VAR_2) {
 *VAR_2 = 0;
 int VAR_3 = 2;
 char **VAR_4 = FUNC_0(sizeof(char *) * VAR_3);
 bool VAR_5 = 0;
 bool VAR_6 = 0;
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 const char *VAR_10 = VAR_1;
 if (VAR_1) {
  while (*VAR_1) {
   if (!VAR_5) {
    VAR_1 = (VAR_10 += FUNC_4(VAR_10, VAR_0));
    VAR_5 = 1;
   }
   if (*VAR_10 == '"' && !VAR_7 && !VAR_9) {
    VAR_6 = !VAR_6;
   } else if (*VAR_10 == '\'' && !VAR_6 && !VAR_9) {
    VAR_7 = !VAR_7;
   } else if (*VAR_10 == '[' && !VAR_6 && !VAR_7 && !VAR_8 && !VAR_9) {
    VAR_8 = 1;
   } else if (*VAR_10 == ']' && !VAR_6 && !VAR_7 && VAR_8 && !VAR_9) {
    VAR_8 = 0;
   } else if (*VAR_10 == '\\') {
    VAR_9 = !VAR_9;
   } else if (*VAR_10 == '\0' || (!VAR_6 && !VAR_7 && !VAR_8
      && !VAR_9 && FUNC_2(VAR_0, *VAR_10))) {
    goto add_token;
   }
   if (*VAR_10 != '\\') {
    VAR_9 = 0;
   }
   ++VAR_10;
   continue;
   add_token:
   if (VAR_10 - VAR_1 > 0) {
    char *VAR_11 = FUNC_0(VAR_10 - VAR_1 + 1);
    FUNC_3(VAR_11, VAR_1, VAR_10 - VAR_1 + 1);
    VAR_11[VAR_10 - VAR_1] = '\0';
    VAR_4[*VAR_2] = VAR_11;
    if (++*VAR_2 + 1 == VAR_3) {
     VAR_4 = FUNC_1(VAR_4, (VAR_3 *= 2) * sizeof(char *));
    }
   }
   VAR_5 = 0;
   VAR_9 = 0;
  }
 }
 VAR_4[*VAR_2] = ((void*)0);
 return VAR_4;
}
