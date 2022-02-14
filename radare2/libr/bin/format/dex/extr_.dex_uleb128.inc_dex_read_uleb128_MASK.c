
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 int FUNC_0 (int const*,int) ;

int FUNC_1(const ut8 *VAR_0, int VAR_1) {
 ut8 VAR_2 = FUNC_0 (VAR_0, VAR_1);
 if (VAR_2 > VAR_1) {
  return 0;
 }
 const ut8 *VAR_3 = VAR_0 + VAR_2 - 1;
 ut32 VAR_4 = 0;
 ut8 VAR_5 = 0;
 ut8 VAR_6;

 while(VAR_5 < 29 && VAR_2 > 0) {
  VAR_6 = *(VAR_3--);
  VAR_4 |= (VAR_6 & 0x7f << VAR_5);
  if (VAR_6 > 0x7f) {
   break;
  }
  VAR_5 += 7;
  VAR_2--;
 }
 return VAR_4;
}
