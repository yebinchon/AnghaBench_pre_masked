
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int delay_slot; int size; } ;
typedef int sljit_s32 ;
typedef int sljit_ins ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct sljit_compiler*,int) ;

__attribute__((used)) static sljit_s32 FUNC_3(struct sljit_compiler *VAR_3, sljit_ins VAR_4, sljit_s32 VAR_5)
{
 FUNC_1(VAR_5 == VAR_0 || VAR_5 >= VAR_2
  || VAR_5 == ((VAR_4 >> 11) & 0x1f) || VAR_5 == ((VAR_4 >> 16) & 0x1f));
 sljit_ins *VAR_6 = (sljit_ins*)FUNC_2(VAR_3, sizeof(sljit_ins));
 FUNC_0(!VAR_6);
 *VAR_6 = VAR_4;
 VAR_3->size++;
 VAR_3->delay_slot = VAR_5;
 return VAR_1;
}
