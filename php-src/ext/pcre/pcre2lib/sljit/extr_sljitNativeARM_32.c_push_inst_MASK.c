
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int size; } ;
typedef int sljit_uw ;
typedef int sljit_s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sljit_compiler*,int) ;

__attribute__((used)) static sljit_s32 FUNC_2(struct sljit_compiler *VAR_1, sljit_uw VAR_2)
{
 sljit_uw* VAR_3;

 VAR_3 = (sljit_uw*)FUNC_1(VAR_1, sizeof(sljit_uw));
 FUNC_0(!VAR_3);
 VAR_1->size++;
 *VAR_3 = VAR_2;
 return VAR_0;
}
