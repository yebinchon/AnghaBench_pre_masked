
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__** VAR_0 ;

__attribute__((used)) static bool FUNC_0() {
 int VAR_1, VAR_2;
 for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
   if (!VAR_0[VAR_1][VAR_2]) {
    return 1;
   }
  }
 }
 for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
   if (VAR_0[VAR_1][VAR_2] == VAR_0[VAR_1][VAR_2 + 1]) {
    return 1;
   }
  }
 }
 for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
   if (VAR_0[VAR_1][VAR_2] == VAR_0[VAR_1 + 1][VAR_2]) {
    return 1;
   }
  }
 }
 return 0;
}
