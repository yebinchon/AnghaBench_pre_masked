
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (unsigned char const) ;
 char VAR_1 ;
 int FUNC_3 (char const**) ;
 int FUNC_4 (char const**,char,int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(const char **VAR_3, const char **VAR_4, int VAR_5, const char **VAR_6) {
 int VAR_7;
 *VAR_3 = FUNC_0 (*VAR_3);
 if (!**VAR_3) {
  if (VAR_5) {
   FUNC_1 ("unexpected end of line\n");
   return 0;
  } else {
   return 0;
  }
 }
 if (VAR_0 > 1) {
  FUNC_3 (VAR_3);
 }
 for (VAR_7 = 0; VAR_4[VAR_7]; VAR_7++) {
  const char *VAR_8 = *VAR_3;
  const char *VAR_9 = VAR_4[VAR_7];
  int VAR_10 = 0;
  if (!VAR_4[VAR_7][0]) {
   continue;
  }
  while (*VAR_9) {
   if (*VAR_9 == ' ') {
    VAR_8 = FUNC_0 (VAR_8);
   } else if (*VAR_9 == '*') {
    *VAR_6 = VAR_8;
    VAR_1 = VAR_9[1];
    FUNC_4 (&VAR_8, VAR_1, ((void*)0), VAR_2, 0);
    VAR_10 = 1;
   } else if (*VAR_9 == '+') {
    if (*VAR_8 == '+' || *VAR_8 == '-') {
     *VAR_6 = VAR_8;
     VAR_1 = VAR_9[1];
     FUNC_4 (&VAR_8, VAR_1, ((void*)0), VAR_2, 0);
    }
   } else if (*VAR_9 == *VAR_8 || (*VAR_9 >= 'a' && *VAR_9 <= 'z'
       && *VAR_9 - 'a' + 'A' == *VAR_8)) {
    ++VAR_8;
   } else {
    break;
   }

   ++VAR_9;
  }
  if (*VAR_9 || (FUNC_2 ((const unsigned char) VAR_9[-1]) && FUNC_2 ((const unsigned char) VAR_8[0]))) {
   continue;
  }
  if (VAR_10) {
   VAR_8 = FUNC_0 (VAR_8);
   if (*VAR_8 && *VAR_8 != ',') {
    continue;
   }
  }
  *VAR_3 = VAR_8;
  VAR_0++;
  return VAR_7 + 1;
 }

 return 0;
}
