
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int size; } ;
typedef int sljit_s32 ;
typedef int sljit_ins ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sljit_compiler*,int) ;

__attribute__((used)) static sljit_s32 FUNC_2(struct sljit_compiler *VAR_1, sljit_ins VAR_2)
{
 sljit_ins *VAR_3 = (sljit_ins*)FUNC_1(VAR_1, sizeof(sljit_ins));
 FUNC_0(!VAR_3);
 *VAR_3 = VAR_2;
 VAR_1->size++;
 return VAR_0;
}
