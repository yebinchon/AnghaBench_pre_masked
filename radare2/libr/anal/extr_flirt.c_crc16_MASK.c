
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;


 int VAR_0 ;

ut16 FUNC_0(const unsigned char *VAR_1, size_t VAR_2) {
 ut8 VAR_3;
 ut32 VAR_4;
 ut32 VAR_5 = 0xFFFF;

 if (VAR_2 == 0) {
  return 0;
 }
 do {
  VAR_4 = *VAR_1++;
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   if ((VAR_5 ^ VAR_4) & 1) {
    VAR_5 = (VAR_5 >> 1) ^ VAR_0;
   } else {
    VAR_5 >>= 1;
   }
   VAR_4 >>= 1;
  }
 } while (--VAR_2 > 0);

 VAR_5 = ~VAR_5;
 VAR_4 = VAR_5;
 VAR_5 = (VAR_5 << 8) | ((VAR_4 >> 8) & 0xff);
 return (ut16) (VAR_5);
}
