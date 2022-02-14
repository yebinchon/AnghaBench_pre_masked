
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const*,int) ;

int FUNC_2(const char *VAR_0, int VAR_1) {
 int VAR_2, VAR_3;
 ut8 VAR_4 = FUNC_1 ((const ut8*)VAR_0, VAR_1);
 if (VAR_4 > VAR_1) {
  return 0;
 }
 VAR_0 += VAR_4 - 1;
 VAR_3 = *(VAR_0--);

 if (VAR_3 <= 0x7f) {
  FUNC_0 (VAR_3, 25);
 } else {
  VAR_2 = *(VAR_0--);
  VAR_3 = (VAR_3 & 0x7f) | ((VAR_2 & 0x7f) << 7);
  if (VAR_2 <= 0x7f) {
   FUNC_0 (VAR_3, 18);
  } else {
   VAR_2 = *(VAR_0--);
   VAR_3 |= (VAR_2 & 0x7f) << 14;
   if (VAR_2 <= 0x7f) {
    FUNC_0 (VAR_3, 11);
   } else {
    VAR_2 = *(VAR_0--);
    VAR_3 |= (VAR_2 & 0x7f) << 21;
    if (VAR_2 <= 0x7f) {
     FUNC_0 (VAR_3, 4);
    } else {
     VAR_2 = *(VAR_0--);
     VAR_3 |= VAR_2 << 28;
    }
   }
  }
 }
 return VAR_3;
}
