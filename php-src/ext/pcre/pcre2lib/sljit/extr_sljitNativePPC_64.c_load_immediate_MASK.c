
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_uw ;
typedef int sljit_sw ;
typedef int sljit_s32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct sljit_compiler*,int) ;

__attribute__((used)) static sljit_s32 FUNC_9(struct sljit_compiler *VAR_8, sljit_s32 VAR_9, sljit_sw VAR_10)
{
 sljit_uw VAR_11;
 sljit_uw VAR_12;
 sljit_uw VAR_13;
 sljit_uw VAR_14;

 if (VAR_10 <= VAR_4 && VAR_10 >= VAR_5)
  return FUNC_8(VAR_8, VAR_0 | FUNC_2(VAR_9) | FUNC_0(0) | FUNC_4(VAR_10));

 if (!(VAR_10 & ~0xffff))
  return FUNC_8(VAR_8, VAR_2 | FUNC_6(VAR_7) | FUNC_0(VAR_9) | FUNC_4(VAR_10));

 if (VAR_10 <= 0x7fffffffl && VAR_10 >= -0x80000000l) {
  FUNC_3(FUNC_8(VAR_8, VAR_1 | FUNC_2(VAR_9) | FUNC_0(0) | FUNC_4(VAR_10 >> 16)));
  return (VAR_10 & 0xffff) ? FUNC_8(VAR_8, VAR_2 | FUNC_6(VAR_9) | FUNC_0(VAR_9) | FUNC_4(VAR_10)) : VAR_6;
 }


 VAR_11 = (VAR_10 >= 0) ? VAR_10 : ~VAR_10;
 FUNC_1(VAR_11, VAR_12);
 FUNC_7(VAR_12 > 0);
 VAR_12--;
 VAR_11 = (VAR_10 << VAR_12);

 if ((VAR_11 & ~0xffff000000000000ul) == 0) {
  FUNC_3(FUNC_8(VAR_8, VAR_0 | FUNC_2(VAR_9) | FUNC_0(0) | FUNC_4(VAR_11 >> 48)));
  VAR_12 += 15;
  return FUNC_5(VAR_9, VAR_12);
 }

 if ((VAR_11 & ~0xffffffff00000000ul) == 0) {
  FUNC_3(FUNC_8(VAR_8, VAR_1 | FUNC_2(VAR_9) | FUNC_0(0) | FUNC_4(VAR_11 >> 48)));
  FUNC_3(FUNC_8(VAR_8, VAR_2 | FUNC_6(VAR_9) | FUNC_0(VAR_9) | FUNC_4(VAR_11 >> 32)));
  VAR_12 += 31;
  return FUNC_5(VAR_9, VAR_12);
 }


 VAR_12 += 15;
 VAR_13 = VAR_10 & ((1ul << (63 - VAR_12)) - 1);

 if (VAR_13 <= 0xffff) {
  FUNC_3(FUNC_8(VAR_8, VAR_0 | FUNC_2(VAR_9) | FUNC_0(0) | FUNC_4(VAR_11 >> 48)));
  FUNC_3(FUNC_5(VAR_9, VAR_12));
  return FUNC_8(VAR_8, VAR_2 | FUNC_6(VAR_9) | FUNC_0(VAR_9) | VAR_13);
 }

 if (VAR_13 <= 0xffffffff) {
  FUNC_3(FUNC_8(VAR_8, VAR_0 | FUNC_2(VAR_9) | FUNC_0(0) | FUNC_4(VAR_11 >> 48)));
  FUNC_3(FUNC_5(VAR_9, VAR_12));
  FUNC_3(FUNC_8(VAR_8, VAR_3 | FUNC_6(VAR_9) | FUNC_0(VAR_9) | (VAR_13 >> 16)));
  return (VAR_10 & 0xffff) ? FUNC_8(VAR_8, VAR_2 | FUNC_6(VAR_9) | FUNC_0(VAR_9) | FUNC_4(VAR_13)) : VAR_6;
 }

 FUNC_1(VAR_13, VAR_14);
 VAR_13 <<= VAR_14;

 if ((VAR_13 & ~0xffff000000000000ul) == 0) {
  FUNC_3(FUNC_8(VAR_8, VAR_0 | FUNC_2(VAR_9) | FUNC_0(0) | FUNC_4(VAR_11 >> 48)));
  VAR_14 += 15;
  VAR_12 += (63 - VAR_14);
  FUNC_3(FUNC_5(VAR_9, VAR_12));
  FUNC_3(FUNC_8(VAR_8, VAR_2 | FUNC_6(VAR_9) | FUNC_0(VAR_9) | (VAR_13 >> 48)));
  return FUNC_5(VAR_9, VAR_14);
 }


 FUNC_3(FUNC_8(VAR_8, VAR_1 | FUNC_2(VAR_9) | FUNC_0(0) | FUNC_4(VAR_10 >> 48)));
 FUNC_3(FUNC_8(VAR_8, VAR_2 | FUNC_6(VAR_9) | FUNC_0(VAR_9) | FUNC_4(VAR_10 >> 32)));
 FUNC_3(FUNC_5(VAR_9, 31));
 FUNC_3(FUNC_8(VAR_8, VAR_3 | FUNC_6(VAR_9) | FUNC_0(VAR_9) | FUNC_4(VAR_10 >> 16)));
 return FUNC_8(VAR_8, VAR_2 | FUNC_6(VAR_9) | FUNC_0(VAR_9) | FUNC_4(VAR_10));
}
