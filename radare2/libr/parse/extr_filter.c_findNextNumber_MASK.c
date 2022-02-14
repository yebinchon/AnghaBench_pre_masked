
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0) {
 if (!VAR_0) {
  return ((void*)0);
 }
 bool VAR_1 = 0;
 char *VAR_2 = VAR_0;
 const char *VAR_3 = ((void*)0);
 while (*VAR_2) {
  if (VAR_2[0] == 0x1b && VAR_2[1] == '[') {
   VAR_1 = 1;
   VAR_2 += 2;
   for (; *VAR_2 && *VAR_2 != 'J' && *VAR_2 != 'm' && *VAR_2 != 'H'; VAR_2++) {
    ;
   }
   if (*VAR_2) {
    VAR_2++;
    if (!*VAR_2) {
     break;
    }
   }
   VAR_3 = VAR_2 - 1;
  } else {
   bool VAR_4 = VAR_1;
   VAR_1 = 0;
   if (!VAR_4) {
    VAR_4 = VAR_2 == VAR_0;
    if (!VAR_4 && VAR_3) {
     VAR_4 = (*VAR_3 == ' ' || *VAR_3 == ',' || *VAR_3 == '[');
    }
   }
   if (*VAR_2 == '[') {
    VAR_2++;
    if (!*VAR_2) {
     break;
    }
    if (!FUNC_0 (*VAR_2)) {
     char *VAR_5 = VAR_2;
     for (; *VAR_5 && *VAR_5 != ']'; VAR_5++) {
      ;
     }
     if (*VAR_5 == ']') {
      continue;
     }
     VAR_2 = VAR_5;
     if (!*VAR_2) {
      break;
     }
    }
   }
   if (VAR_4 && FUNC_0 (*VAR_2)) {
    return VAR_2;
   }
   VAR_3 = VAR_2++;
  }
 }
 return ((void*)0);
}
