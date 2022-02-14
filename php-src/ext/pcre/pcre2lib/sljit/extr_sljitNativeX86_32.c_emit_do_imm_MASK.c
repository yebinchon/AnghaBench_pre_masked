
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_u8 ;
typedef int sljit_sw ;
typedef int sljit_s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct sljit_compiler*,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static sljit_s32 FUNC_4(struct sljit_compiler *VAR_1, sljit_u8 VAR_2, sljit_sw VAR_3)
{
 sljit_u8 *VAR_4;

 VAR_4 = (sljit_u8*)FUNC_2(VAR_1, 1 + 1 + sizeof(sljit_sw));
 FUNC_0(!VAR_4);
 FUNC_1(1 + sizeof(sljit_sw));
 *VAR_4++ = VAR_2;
 FUNC_3(VAR_4, VAR_3);
 return VAR_0;
}
