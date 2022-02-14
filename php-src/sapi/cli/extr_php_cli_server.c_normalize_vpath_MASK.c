
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char const*,size_t,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(char **VAR_0, size_t *VAR_1, const char *VAR_2, size_t VAR_3, int VAR_4)
{
 char *VAR_5 = ((void*)0);
 char *VAR_6;
 char *VAR_7;

 *VAR_0 = ((void*)0);
 *VAR_1 = 0;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (!VAR_5) {
  return;
 }

 VAR_6 = VAR_5 + FUNC_2(VAR_5, (int)VAR_3);
 VAR_7 = VAR_5;

 if (VAR_7 < VAR_6 && *VAR_7 == '/') {
  char *VAR_8 = VAR_7;
  while (VAR_8 < VAR_6 && *VAR_8 == '/') VAR_8++;
  FUNC_0(++VAR_7, VAR_8, VAR_6 - VAR_8);
  VAR_6 -= VAR_8 - VAR_7;
 }

 while (VAR_7 < VAR_6) {
  char *VAR_9 = VAR_7;
  while (VAR_9 < VAR_6 && *VAR_9 != '/') VAR_9++;
  if (VAR_9 - VAR_7 == 2 && VAR_7[0] == '.' && VAR_7[1] == '.') {
   if (VAR_7 > VAR_5) {
    --VAR_7;
    for (;;) {
     if (VAR_7 == VAR_5) {
      if (*VAR_7 == '/') {
       VAR_7++;
      }
      break;
     }
     if (*(--VAR_7) == '/') {
      VAR_7++;
      break;
     }
    }
   }
   while (VAR_9 < VAR_6 && *VAR_9 == '/') VAR_9++;
   FUNC_0(VAR_7, VAR_9, VAR_6 - VAR_9);
   VAR_6 -= VAR_9 - VAR_7;
  } else if (VAR_9 - VAR_7 == 1 && VAR_7[0] == '.') {
   while (VAR_9 < VAR_6 && *VAR_9 == '/') VAR_9++;
   FUNC_0(VAR_7, VAR_9, VAR_6 - VAR_9);
   VAR_6 -= VAR_9 - VAR_7;
  } else {
   if (VAR_9 < VAR_6) {
    char *VAR_10 = VAR_9;
    while (VAR_10 < VAR_6 && *VAR_10 == '/') VAR_10++;
    VAR_7 = VAR_9 + 1;
    FUNC_0(VAR_7, VAR_10, VAR_6 - VAR_10);
    VAR_6 -= VAR_10 - VAR_7;
   } else {
    VAR_7 = VAR_9;
   }
  }
 }

 *VAR_6 = '\0';
 *VAR_0 = VAR_5;
 *VAR_1 = VAR_6 - VAR_5;
}
