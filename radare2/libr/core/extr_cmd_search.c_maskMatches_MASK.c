
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(int VAR_0, int VAR_1, bool VAR_2) {
 if (VAR_1) {
  if (VAR_2) {
   return ((VAR_0 & 7) != VAR_1);
  }
  return (VAR_0 & VAR_1) != VAR_1;
 }
 return 0;
}
