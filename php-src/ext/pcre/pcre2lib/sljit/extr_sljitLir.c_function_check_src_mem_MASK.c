
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int scratches; int saveds; } ;
typedef int sljit_sw ;
typedef int sljit_s32 ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static sljit_s32 FUNC_3(struct sljit_compiler *VAR_4, sljit_s32 VAR_5, sljit_sw VAR_6)
{
 if (VAR_4->scratches == -1 || VAR_4->saveds == -1)
  return 0;

 if (!(VAR_5 & VAR_2))
  return 0;

 if (!((VAR_5 & VAR_1) == VAR_3 || FUNC_1(VAR_5 & VAR_1)))
  return 0;

 if (FUNC_0(VAR_5 & VAR_1))
  return 0;

 if (VAR_5 & VAR_0) {
  if ((VAR_5 & VAR_1) == VAR_3)
   return 0;

  if (!(FUNC_1(FUNC_2(VAR_5))))
   return 0;

  if (FUNC_0(FUNC_2(VAR_5)))
   return 0;

  if ((VAR_6 & ~0x3) != 0)
   return 0;
 }

 return (VAR_5 & ~(VAR_2 | VAR_1 | VAR_0)) == 0;
}
