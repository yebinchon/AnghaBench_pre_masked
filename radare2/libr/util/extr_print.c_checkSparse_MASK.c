
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



__attribute__((used)) static bool FUNC_0(const ut8 *VAR_0, int VAR_1, int VAR_2) {
 int VAR_3;
 ut8 VAR_4 = *VAR_0;
 if (VAR_2 && VAR_2 != VAR_4) {
  return 0;
 }
 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3] != VAR_4) {
   return 0;
  }
 }
 return 1;
}
