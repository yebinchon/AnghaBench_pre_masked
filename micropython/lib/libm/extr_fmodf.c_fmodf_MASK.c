
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (float) ;

float FUNC_1(float VAR_0, float VAR_1)
{
 union {float f; uint32_t i;} VAR_2 = {VAR_0}, VAR_3 = {VAR_1};
 int VAR_4 = VAR_2.i>>23 & 0xff;
 int VAR_5 = VAR_3.i>>23 & 0xff;
 uint32_t VAR_6 = VAR_2.i & 0x80000000;
 uint32_t VAR_7;
 uint32_t VAR_8 = VAR_2.i;

 if (VAR_3.i<<1 == 0 || FUNC_0(VAR_1) || VAR_4 == 0xff)
  return (VAR_0*VAR_1)/(VAR_0*VAR_1);
 if (VAR_8<<1 <= VAR_3.i<<1) {
  if (VAR_8<<1 == VAR_3.i<<1)
   return 0*VAR_0;
  return VAR_0;
 }


 if (!VAR_4) {
  for (VAR_7 = VAR_8<<9; VAR_7>>31 == 0; VAR_4--, VAR_7 <<= 1);
  VAR_8 <<= -VAR_4 + 1;
 } else {
  VAR_8 &= -1U >> 9;
  VAR_8 |= 1U << 23;
 }
 if (!VAR_5) {
  for (VAR_7 = VAR_3.i<<9; VAR_7>>31 == 0; VAR_5--, VAR_7 <<= 1);
  VAR_3.i <<= -VAR_5 + 1;
 } else {
  VAR_3.i &= -1U >> 9;
  VAR_3.i |= 1U << 23;
 }


 for (; VAR_4 > VAR_5; VAR_4--) {
  VAR_7 = VAR_8 - VAR_3.i;
  if (VAR_7 >> 31 == 0) {
   if (VAR_7 == 0)
    return 0*VAR_0;
   VAR_8 = VAR_7;
  }
  VAR_8 <<= 1;
 }
 VAR_7 = VAR_8 - VAR_3.i;
 if (VAR_7 >> 31 == 0) {
  if (VAR_7 == 0)
   return 0*VAR_0;
  VAR_8 = VAR_7;
 }
 for (; VAR_8>>23 == 0; VAR_8 <<= 1, VAR_4--);


 if (VAR_4 > 0) {
  VAR_8 -= 1U << 23;
  VAR_8 |= (uint32_t)VAR_4 << 23;
 } else {
  VAR_8 >>= -VAR_4 + 1;
 }
 VAR_8 |= VAR_6;
 VAR_2.i = VAR_8;
 return VAR_2.f;
}
