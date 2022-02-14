
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int skip_checks; } ;
typedef scalar_t__ sljit_sw ;
typedef int sljit_s32 ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct sljit_compiler*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct sljit_compiler*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_6 (struct sljit_compiler*,int ,int ,scalar_t__,int ,int ,int ,scalar_t__) ;

sljit_s32 FUNC_7(struct sljit_compiler *VAR_4, sljit_s32 VAR_5, sljit_sw VAR_6, sljit_sw VAR_7)
{
 FUNC_2();
 FUNC_1(FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7));

 FUNC_0(FUNC_3(VAR_3), VAR_7);




 if (VAR_7 != 0)
  return FUNC_6(VAR_4, VAR_0, VAR_5, VAR_6, VAR_3, 0, VAR_1, VAR_7);
 return FUNC_5(VAR_4, VAR_2, VAR_5, VAR_6, VAR_3, 0);
}
