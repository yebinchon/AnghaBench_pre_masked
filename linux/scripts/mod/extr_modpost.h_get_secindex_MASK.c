
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elf_info {unsigned int* symtab_shndx_start; TYPE_1__ const* symtab_start; } ;
struct TYPE_3__ {scalar_t__ st_shndx; } ;
typedef TYPE_1__ Elf_Sym ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_2(const struct elf_info *VAR_1,
     const Elf_Sym *VAR_2)
{
 if (FUNC_1(VAR_2->st_shndx))
  return FUNC_0(VAR_2->st_shndx);
 if (VAR_2->st_shndx != VAR_0)
  return VAR_2->st_shndx;
 return VAR_1->symtab_shndx_start[VAR_2 - VAR_1->symtab_start];
}
