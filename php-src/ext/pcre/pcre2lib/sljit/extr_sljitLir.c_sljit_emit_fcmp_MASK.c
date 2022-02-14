
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_jump {int dummy; } ;
struct sljit_compiler {int skip_checks; } ;
typedef int sljit_sw ;
typedef int sljit_s32 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sljit_compiler*,int,int,int ,int,int ) ;
 int FUNC_3 (struct sljit_compiler*,int,int,int ,int,int ) ;
 struct sljit_jump* FUNC_4 (struct sljit_compiler*,int) ;

struct sljit_jump* FUNC_5(struct sljit_compiler *VAR_3, sljit_s32 VAR_4,
 sljit_s32 VAR_5, sljit_sw VAR_6,
 sljit_s32 VAR_7, sljit_sw VAR_8)
{
 FUNC_0();
 FUNC_1(FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));





 FUNC_3(VAR_3, VAR_0 | ((VAR_4 & 0xff) << VAR_2) | (VAR_4 & VAR_1), VAR_5, VAR_6, VAR_7, VAR_8);





 return FUNC_4(VAR_3, VAR_4);
}
