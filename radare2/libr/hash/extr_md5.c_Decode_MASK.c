
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int ut32 ;



__attribute__((used)) static void FUNC_0(ut32 *VAR_0, const ut8 *VAR_1, ut32 VAR_2) {
 ut32 VAR_3, VAR_4;
 for (VAR_3 = 0, VAR_4 = 0; VAR_4 < VAR_2; VAR_3++, VAR_4 += 4) {
  VAR_0[VAR_3] = ((ut32)VAR_1[VAR_4]) | (((ut32)VAR_1[VAR_4 + 1]) << 8) |
       (((ut32)VAR_1[VAR_4 + 2]) << 16) |
       (((ut32)VAR_1[VAR_4 + 3]) << 24);
 }
}
