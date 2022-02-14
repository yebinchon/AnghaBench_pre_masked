
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (double,int,int) ;
 double VAR_0 ;

double FUNC_2(double VAR_1)
{
 double VAR_2;
 int32_t VAR_3 = (int)0x80000000;
 int32_t VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,VAR_9;
 uint32_t VAR_10,VAR_11,VAR_12,VAR_13,VAR_14;

 FUNC_0(VAR_4, VAR_13, VAR_1);


 if ((VAR_4&0x7ff00000) == 0x7ff00000) {
  return VAR_1*VAR_1 + VAR_1;
 }

 if (VAR_4 <= 0) {
  if (((VAR_4&~VAR_3)|VAR_13) == 0)
   return VAR_1;
  if (VAR_4 < 0)
   return (VAR_1-VAR_1)/(VAR_1-VAR_1);
 }

 VAR_7 = VAR_4>>20;
 if (VAR_7 == 0) {
  while (VAR_4 == 0) {
   VAR_7 -= 21;
   VAR_4 |= (VAR_13>>11);
   VAR_13 <<= 21;
  }
  for (VAR_9=0; (VAR_4&0x00100000) == 0; VAR_9++)
   VAR_4<<=1;
  VAR_7 -= VAR_9 - 1;
  VAR_4 |= VAR_13>>(32-VAR_9);
  VAR_13 <<= VAR_9;
 }
 VAR_7 -= 1023;
 VAR_4 = (VAR_4&0x000fffff)|0x00100000;
 if (VAR_7 & 1) {
  VAR_4 += VAR_4 + ((VAR_13&VAR_3)>>31);
  VAR_13 += VAR_13;
 }
 VAR_7 >>= 1;


 VAR_4 += VAR_4 + ((VAR_13&VAR_3)>>31);
 VAR_13 += VAR_13;
 VAR_6 = VAR_14 = VAR_5 = VAR_12 = 0;
 VAR_10 = 0x00200000;

 while (VAR_10 != 0) {
  VAR_8 = VAR_5 + VAR_10;
  if (VAR_8 <= VAR_4) {
   VAR_5 = VAR_8 + VAR_10;
   VAR_4 -= VAR_8;
   VAR_6 += VAR_10;
  }
  VAR_4 += VAR_4 + ((VAR_13&VAR_3)>>31);
  VAR_13 += VAR_13;
  VAR_10 >>= 1;
 }

 VAR_10 = VAR_3;
 while (VAR_10 != 0) {
  VAR_11 = VAR_12 + VAR_10;
  VAR_8 = VAR_5;
  if (VAR_8 < VAR_4 || (VAR_8 == VAR_4 && VAR_11 <= VAR_13)) {
   VAR_12 = VAR_11 + VAR_10;
   if ((VAR_11&VAR_3) == VAR_3 && (VAR_12&VAR_3) == 0)
    VAR_5++;
   VAR_4 -= VAR_8;
   if (VAR_13 < VAR_11)
    VAR_4--;
   VAR_13 -= VAR_11;
   VAR_14 += VAR_10;
  }
  VAR_4 += VAR_4 + ((VAR_13&VAR_3)>>31);
  VAR_13 += VAR_13;
  VAR_10 >>= 1;
 }


 if ((VAR_4|VAR_13) != 0) {
  VAR_2 = 1.0 - VAR_0;
  if (VAR_2 >= 1.0) {
   VAR_2 = 1.0 + VAR_0;
   if (VAR_14 == (uint32_t)0xffffffff) {
    VAR_14 = 0;
    VAR_6++;
   } else if (VAR_2 > 1.0) {
    if (VAR_14 == (uint32_t)0xfffffffe)
     VAR_6++;
    VAR_14 += 2;
   } else
    VAR_14 += VAR_14 & 1;
  }
 }
 VAR_4 = (VAR_6>>1) + 0x3fe00000;
 VAR_13 = VAR_14>>1;
 if (VAR_6&1)
  VAR_13 |= VAR_3;
 VAR_4 += VAR_7 << 20;
 FUNC_1(VAR_2, VAR_4, VAR_13);
 return VAR_2;
}
