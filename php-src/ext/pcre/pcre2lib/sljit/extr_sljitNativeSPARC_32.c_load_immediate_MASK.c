
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_sw ;
typedef int sljit_s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct sljit_compiler*,int,int ) ;

__attribute__((used)) static sljit_s32 FUNC_6(struct sljit_compiler *VAR_6, sljit_s32 VAR_7, sljit_sw VAR_8)
{
 if (VAR_8 <= VAR_3 && VAR_8 >= VAR_4)
  return FUNC_5(VAR_6, VAR_1 | FUNC_0(VAR_7) | FUNC_4(0) | FUNC_3(VAR_8), FUNC_1(VAR_7));

 FUNC_2(FUNC_5(VAR_6, VAR_2 | FUNC_0(VAR_7) | ((VAR_8 >> 10) & 0x3fffff), FUNC_1(VAR_7)));
 return (VAR_8 & 0x3ff) ? FUNC_5(VAR_6, VAR_1 | FUNC_0(VAR_7) | FUNC_4(VAR_7) | VAR_0 | (VAR_8 & 0x3ff), FUNC_1(VAR_7)) : VAR_5;
}
