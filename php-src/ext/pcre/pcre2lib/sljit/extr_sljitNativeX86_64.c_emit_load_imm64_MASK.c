
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_u8 ;
typedef int sljit_sw ;
typedef size_t sljit_s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_2 (struct sljit_compiler*,int) ;
 int* VAR_4 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static sljit_s32 FUNC_4(struct sljit_compiler *VAR_5, sljit_s32 VAR_6, sljit_sw VAR_7)
{
 sljit_u8 *VAR_8;

 VAR_8 = (sljit_u8*)FUNC_2(VAR_5, 1 + 2 + sizeof(sljit_sw));
 FUNC_0(!VAR_8);
 FUNC_1(2 + sizeof(sljit_sw));
 *VAR_8++ = VAR_2 | ((VAR_4[VAR_6] <= 7) ? 0 : VAR_1);
 *VAR_8++ = VAR_0 + (VAR_4[VAR_6] & 0x7);
 FUNC_3(VAR_8, VAR_7);
 return VAR_3;
}
