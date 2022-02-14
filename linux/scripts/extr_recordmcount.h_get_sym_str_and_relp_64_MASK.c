
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int e_shoff; } ;
struct TYPE_5__ {int sh_offset; int sh_link; } ;
typedef int Elf_Sym ;
typedef TYPE_1__ Elf_Shdr ;
typedef int Elf_Rel ;
typedef TYPE_2__ Elf_Ehdr ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(Elf_Shdr const *const VAR_0,
     Elf_Ehdr const *const VAR_1,
     Elf_Sym const **VAR_2,
     char const **VAR_3,
     Elf_Rel const **VAR_4)
{
 Elf_Shdr *const VAR_5 = (Elf_Shdr *)(FUNC_0(VAR_1->e_shoff)
  + (void *)VAR_1);
 unsigned const VAR_6 = FUNC_1(VAR_0->sh_link);
 Elf_Shdr const *const VAR_7 = &VAR_5[VAR_6];
 Elf_Shdr const *const VAR_8 = &VAR_5[FUNC_1(VAR_7->sh_link)];
 Elf_Rel const *const VAR_9 = (Elf_Rel const *)(FUNC_0(VAR_0->sh_offset)
  + (void *)VAR_1);

 *VAR_2 = (Elf_Sym const *)(FUNC_0(VAR_7->sh_offset)
      + (void *)VAR_1);

 *VAR_3 = (char const *)(FUNC_0(VAR_8->sh_offset)
          + (void *)VAR_1);

 *VAR_4 = VAR_9;
}
