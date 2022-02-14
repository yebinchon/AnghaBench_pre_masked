
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sljit_sw ;
typedef int sljit_s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;

__attribute__((used)) static sljit_s32 FUNC_1(sljit_s32 VAR_4, sljit_sw VAR_5, sljit_s32 VAR_6, sljit_sw VAR_7)
{
 FUNC_0((VAR_4 & VAR_3) && (VAR_6 & VAR_3));


 if (VAR_4 & VAR_0) {
  VAR_5 &= 0x3;
  VAR_7 &= 0x3;
  if (VAR_5 && VAR_5 == VAR_7 && (VAR_4 == VAR_6 || (VAR_4 & VAR_0) == (VAR_6 & VAR_0)))
   return 1;
  return 0;
 }

 if (VAR_4 == VAR_6) {
  if (((VAR_7 - VAR_5) <= VAR_1 && (VAR_7 - VAR_5) >= VAR_2))
   return 1;
  return 0;
 }

 return 0;
}
