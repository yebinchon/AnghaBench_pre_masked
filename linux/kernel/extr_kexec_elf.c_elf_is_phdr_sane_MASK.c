
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_phdr {size_t p_offset; size_t p_filesz; scalar_t__ p_paddr; scalar_t__ p_memsz; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(const struct elf_phdr *VAR_0, size_t VAR_1)
{

 if (VAR_0->p_offset + VAR_0->p_filesz < VAR_0->p_offset) {
  FUNC_0("ELF segment location wraps around.\n");
  return 0;
 } else if (VAR_0->p_offset + VAR_0->p_filesz > VAR_1) {
  FUNC_0("ELF segment not in file.\n");
  return 0;
 } else if (VAR_0->p_paddr + VAR_0->p_memsz < VAR_0->p_paddr) {
  FUNC_0("ELF segment address wraps around.\n");
  return 0;
 }

 return 1;
}
