
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut32 ;



__attribute__((used)) static char *FUNC_0(char *VAR_0, const char VAR_1) {
 if (!VAR_0) {
  return ((void*)0);
 }
 ut32 VAR_2 = 0;
 while (1 == 1) {
  if (!VAR_0[VAR_2]) {
   break;
  }
  if (VAR_0[VAR_2] == VAR_1) {
   VAR_0[VAR_2] = '\0';
   return &VAR_0[VAR_2 + 1];
  }
  VAR_2++;
 }
 return ((void*)0);
}
