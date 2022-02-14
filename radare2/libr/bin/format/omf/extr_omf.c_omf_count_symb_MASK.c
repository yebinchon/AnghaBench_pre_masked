
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;



__attribute__((used)) static ut32 FUNC_0(ut16 VAR_0, ut32 VAR_1, const ut8 *VAR_2, int VAR_3) {
 ut32 VAR_4 = 0;
 while (VAR_1 < VAR_0 - 1) {
  VAR_1 += VAR_2[VAR_1] + 1 + (VAR_3 == 32 ? 4 : 2);
  if (VAR_1 > VAR_0 - 1) {
   return VAR_4;
  }
  if (VAR_2[VAR_1] & 0x80) {
   VAR_1 += 2;
  } else {
   VAR_1++;
  }
  VAR_4++;
 }
 return VAR_4;
}
