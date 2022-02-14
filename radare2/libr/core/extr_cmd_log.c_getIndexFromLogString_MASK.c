
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0) {
 int VAR_1 = FUNC_1 (VAR_0);
 const char *VAR_2 = VAR_0 + VAR_1;
 int VAR_3 = 2;
 const char *VAR_4 = ((void*)0);
 while (VAR_2 > VAR_0) {
  if (*VAR_2 == '\n') {
   VAR_4 = VAR_2;
   if (--VAR_3 < 1) {
    return FUNC_0 (VAR_2 + 1);
   }
  }
  VAR_2--;
 }
  return FUNC_0 (VAR_4?VAR_4 + 1: VAR_0);
 return -1;
}
