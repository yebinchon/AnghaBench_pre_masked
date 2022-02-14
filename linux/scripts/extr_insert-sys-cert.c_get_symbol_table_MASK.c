
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int e_shoff; unsigned int e_shnum; } ;
struct TYPE_5__ {unsigned int sh_size; scalar_t__ sh_type; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef TYPE_2__ Elf_Ehdr ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static Elf_Shdr *FUNC_0(Elf_Ehdr *VAR_2)
{
 Elf_Shdr *VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_3 = (void *)VAR_2 + VAR_2->e_shoff;
 if (VAR_2->e_shnum == VAR_0)
  VAR_5 = VAR_3[0].sh_size;
 else
  VAR_5 = VAR_2->e_shnum;

 for (VAR_4 = 1; VAR_4 < VAR_5; VAR_4++)
  if (VAR_3[VAR_4].sh_type == VAR_1)
   return &VAR_3[VAR_4];
 return ((void*)0);
}
