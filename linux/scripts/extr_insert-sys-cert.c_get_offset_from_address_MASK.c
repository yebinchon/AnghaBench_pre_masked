
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int e_shoff; unsigned int e_shnum; } ;
struct TYPE_4__ {unsigned int sh_size; unsigned long sh_addr; unsigned long sh_offset; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef TYPE_2__ Elf_Ehdr ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(Elf_Ehdr *VAR_1, unsigned long VAR_2)
{
 Elf_Shdr *VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_3 = (void *)VAR_1 + VAR_1->e_shoff;
 if (VAR_1->e_shnum == VAR_0)
  VAR_5 = VAR_3[0].sh_size;
 else
  VAR_5 = VAR_1->e_shnum;

 for (VAR_4 = 1; VAR_4 < VAR_5; VAR_4++) {
  unsigned long VAR_6 = VAR_3[VAR_4].sh_addr;
  unsigned long VAR_7 = VAR_6 + VAR_3[VAR_4].sh_size;
  unsigned long VAR_8 = VAR_3[VAR_4].sh_offset;

  if (VAR_2 >= VAR_6 && VAR_2 <= VAR_7)
   return VAR_2 - VAR_6 + VAR_8;
 }
 return 0;
}
