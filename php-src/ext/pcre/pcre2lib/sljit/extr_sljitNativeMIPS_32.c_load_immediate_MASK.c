
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_sw ;
typedef int sljit_s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sljit_compiler*,int,int ) ;

__attribute__((used)) static sljit_s32 FUNC_5(struct sljit_compiler *VAR_5, sljit_s32 VAR_6, sljit_sw VAR_7)
{
 if (!(VAR_7 & ~0xffff))
  return FUNC_4(VAR_5, VAR_2 | FUNC_2(0) | FUNC_3(VAR_6) | FUNC_1(VAR_7), VAR_6);

 if (VAR_7 < 0 && VAR_7 >= VAR_3)
  return FUNC_4(VAR_5, VAR_0 | FUNC_2(0) | FUNC_3(VAR_6) | FUNC_1(VAR_7), VAR_6);

 FUNC_0(FUNC_4(VAR_5, VAR_1 | FUNC_3(VAR_6) | FUNC_1(VAR_7 >> 16), VAR_6));
 return (VAR_7 & 0xffff) ? FUNC_4(VAR_5, VAR_2 | FUNC_2(VAR_6) | FUNC_3(VAR_6) | FUNC_1(VAR_7), VAR_6) : VAR_4;
}
