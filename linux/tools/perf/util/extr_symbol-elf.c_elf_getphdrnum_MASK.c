
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t e_phnum; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int Elf ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(Elf *VAR_0, size_t *VAR_1)
{
 GElf_Ehdr VAR_2;
 GElf_Ehdr *VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (!VAR_3)
  return -1;

 *VAR_1 = VAR_3->e_phnum;

 return 0;
}
