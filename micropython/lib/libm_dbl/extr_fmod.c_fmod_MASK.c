
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ FUNC_0 (double) ;

double FUNC_1(double VAR_0, double VAR_1)
{
 union {double f; uint64_t i;} VAR_2 = {VAR_0}, VAR_3 = {VAR_1};
 int VAR_4 = VAR_2.i>>52 & 0x7ff;
 int VAR_5 = VAR_3.i>>52 & 0x7ff;
 int VAR_6 = VAR_2.i>>63;
 uint64_t VAR_7;



 uint64_t VAR_8 = VAR_2.i;

 if (VAR_3.i<<1 == 0 || FUNC_0(VAR_1) || VAR_4 == 0x7ff)
  return (VAR_0*VAR_1)/(VAR_0*VAR_1);
 if (VAR_8<<1 <= VAR_3.i<<1) {
  if (VAR_8<<1 == VAR_3.i<<1)
   return 0*VAR_0;
  return VAR_0;
 }


 if (!VAR_4) {
  for (VAR_7 = VAR_8<<12; VAR_7>>63 == 0; VAR_4--, VAR_7 <<= 1);
  VAR_8 <<= -VAR_4 + 1;
 } else {
  VAR_8 &= -1ULL >> 12;
  VAR_8 |= 1ULL << 52;
 }
 if (!VAR_5) {
  for (VAR_7 = VAR_3.i<<12; VAR_7>>63 == 0; VAR_5--, VAR_7 <<= 1);
  VAR_3.i <<= -VAR_5 + 1;
 } else {
  VAR_3.i &= -1ULL >> 12;
  VAR_3.i |= 1ULL << 52;
 }


 for (; VAR_4 > VAR_5; VAR_4--) {
  VAR_7 = VAR_8 - VAR_3.i;
  if (VAR_7 >> 63 == 0) {
   if (VAR_7 == 0)
    return 0*VAR_0;
   VAR_8 = VAR_7;
  }
  VAR_8 <<= 1;
 }
 VAR_7 = VAR_8 - VAR_3.i;
 if (VAR_7 >> 63 == 0) {
  if (VAR_7 == 0)
   return 0*VAR_0;
  VAR_8 = VAR_7;
 }
 for (; VAR_8>>52 == 0; VAR_8 <<= 1, VAR_4--);


 if (VAR_4 > 0) {
  VAR_8 -= 1ULL << 52;
  VAR_8 |= (uint64_t)VAR_4 << 52;
 } else {
  VAR_8 >>= -VAR_4 + 1;
 }
 VAR_8 |= (uint64_t)VAR_6 << 63;
 VAR_2.i = VAR_8;
 return VAR_2.f;
}
