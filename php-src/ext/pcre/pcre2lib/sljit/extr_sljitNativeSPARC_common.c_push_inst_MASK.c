
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int delay_slot; int size; } ;
typedef int sljit_s32 ;
typedef int sljit_ins ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct sljit_compiler*,int) ;

__attribute__((used)) static sljit_s32 FUNC_3(struct sljit_compiler *VAR_4, sljit_ins VAR_5, sljit_s32 VAR_6)
{
 sljit_ins *VAR_7;
 FUNC_1((VAR_6 & VAR_0) == VAR_3
  || (VAR_6 & VAR_0) == VAR_1
  || (VAR_6 & VAR_0) == ((VAR_5 >> 25) & 0x1f));
 VAR_7 = (sljit_ins*)FUNC_2(VAR_4, sizeof(sljit_ins));
 FUNC_0(!VAR_7);
 *VAR_7 = VAR_5;
 VAR_4->size++;
 VAR_4->delay_slot = VAR_6;
 return VAR_2;
}
