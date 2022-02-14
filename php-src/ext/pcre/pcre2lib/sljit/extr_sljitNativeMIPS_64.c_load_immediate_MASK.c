
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_uw ;
typedef int sljit_sw ;
typedef int sljit_s32 ;
typedef int sljit_ins ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sljit_compiler*,int,int) ;

__attribute__((used)) static sljit_s32 FUNC_8(struct sljit_compiler *VAR_7, sljit_s32 VAR_8, sljit_sw VAR_9)
{
 sljit_s32 VAR_10 = 32;
 sljit_s32 VAR_11;
 sljit_s32 VAR_12 = 0;
 sljit_ins VAR_13;
 sljit_uw VAR_14;

 if (!(VAR_9 & ~0xffff))
  return FUNC_7(VAR_7, VAR_4 | FUNC_3(0) | FUNC_6(VAR_8) | FUNC_2(VAR_9), VAR_8);

 if (VAR_9 < 0 && VAR_9 >= VAR_5)
  return FUNC_7(VAR_7, VAR_0 | FUNC_3(0) | FUNC_6(VAR_8) | FUNC_2(VAR_9), VAR_8);

 if (VAR_9 <= 0x7fffffffl && VAR_9 >= -0x80000000l) {
  FUNC_1(FUNC_7(VAR_7, VAR_3 | FUNC_6(VAR_8) | FUNC_2(VAR_9 >> 16), VAR_8));
  return (VAR_9 & 0xffff) ? FUNC_7(VAR_7, VAR_4 | FUNC_3(VAR_8) | FUNC_6(VAR_8) | FUNC_2(VAR_9), VAR_8) : VAR_6;
 }


 VAR_14 = VAR_9;
 if (VAR_9 < 0) {
  VAR_14 = ~VAR_9;
  VAR_12 = 1;
 }

 while (!(VAR_14 & 0xff00000000000000l)) {
  VAR_10 -= 8;
  VAR_14 <<= 8;
 }

 if (!(VAR_14 & 0xf000000000000000l)) {
  VAR_10 -= 4;
  VAR_14 <<= 4;
 }

 if (!(VAR_14 & 0xc000000000000000l)) {
  VAR_10 -= 2;
  VAR_14 <<= 2;
 }

 if ((sljit_sw)VAR_14 < 0) {
  VAR_14 >>= 1;
  VAR_10 += 1;
 }
 FUNC_5(((VAR_14 & 0xc000000000000000l) == 0x4000000000000000l) && (VAR_10 > 0) && (VAR_10 <= 32));

 if (VAR_12)
  VAR_14 = ~VAR_14;

 FUNC_1(FUNC_7(VAR_7, VAR_3 | FUNC_6(VAR_8) | FUNC_2(VAR_14 >> 48), VAR_8));
 if (VAR_14 & 0x0000ffff00000000l)
  FUNC_1(FUNC_7(VAR_7, VAR_4 | FUNC_3(VAR_8) | FUNC_6(VAR_8) | FUNC_2(VAR_14 >> 32), VAR_8));

 VAR_9 &= (1l << VAR_10) - 1;
 if (!(VAR_9 & ~0xffff)) {
  VAR_13 = (VAR_10 == 32) ? VAR_2 : VAR_1;
  if (VAR_10 < 32)
   VAR_13 |= FUNC_4(VAR_10);
  FUNC_1(FUNC_7(VAR_7, VAR_13 | FUNC_6(VAR_8) | FUNC_0(VAR_8), VAR_8));
  return !(VAR_9 & 0xffff) ? VAR_6 : FUNC_7(VAR_7, VAR_4 | FUNC_3(VAR_8) | FUNC_6(VAR_8) | FUNC_2(VAR_9), VAR_8);
 }


 VAR_14 <<= 32;
 VAR_11 = VAR_10 - 16;

 while (!(VAR_14 & 0xf000000000000000l)) {
  VAR_11 -= 4;
  VAR_14 <<= 4;
 }

 if (!(VAR_14 & 0xc000000000000000l)) {
  VAR_11 -= 2;
  VAR_14 <<= 2;
 }

 if (!(VAR_14 & 0x8000000000000000l)) {
  VAR_11--;
  VAR_14 <<= 1;
 }

 FUNC_5((VAR_14 & 0x8000000000000000l) && (VAR_11 > 0) && (VAR_11 <= 16));

 FUNC_1(FUNC_7(VAR_7, VAR_1 | FUNC_6(VAR_8) | FUNC_0(VAR_8) | FUNC_4(VAR_10 - VAR_11), VAR_8));
 FUNC_1(FUNC_7(VAR_7, VAR_4 | FUNC_3(VAR_8) | FUNC_6(VAR_8) | FUNC_2(VAR_14 >> 48), VAR_8));
 FUNC_1(FUNC_7(VAR_7, VAR_1 | FUNC_6(VAR_8) | FUNC_0(VAR_8) | FUNC_4(VAR_11), VAR_8));

 VAR_9 &= (1l << VAR_11) - 1;
 return !(VAR_9 & 0xffff) ? VAR_6 : FUNC_7(VAR_7, VAR_4 | FUNC_3(VAR_8) | FUNC_6(VAR_8) | FUNC_2(VAR_9), VAR_8);
}
