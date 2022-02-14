
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_s32 ;


 int FUNC_0 () ;
 void* FUNC_1 (struct sljit_compiler*,int) ;

void* FUNC_2(struct sljit_compiler *VAR_0, sljit_s32 VAR_1)
{
 FUNC_0();






 if (VAR_1 <= 0 || VAR_1 > 64)
  return ((void*)0);
 VAR_1 = (VAR_1 + 3) & ~3;

 return FUNC_1(VAR_0, VAR_1);
}
