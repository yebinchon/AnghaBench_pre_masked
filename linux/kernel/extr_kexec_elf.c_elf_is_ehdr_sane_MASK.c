
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfhdr {int e_phnum; int e_phentsize; int e_shnum; int e_shentsize; scalar_t__* e_ident; scalar_t__ e_version; size_t e_phoff; size_t e_shoff; } ;
struct elf_shdr {int dummy; } ;
struct elf_phdr {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(const struct elfhdr *VAR_2, size_t VAR_3)
{
 if (VAR_2->e_phnum > 0 && VAR_2->e_phentsize != sizeof(struct elf_phdr)) {
  FUNC_0("Bad program header size.\n");
  return 0;
 } else if (VAR_2->e_shnum > 0 &&
     VAR_2->e_shentsize != sizeof(struct elf_shdr)) {
  FUNC_0("Bad section header size.\n");
  return 0;
 } else if (VAR_2->e_ident[VAR_0] != VAR_1 ||
     VAR_2->e_version != VAR_1) {
  FUNC_0("Unknown ELF version.\n");
  return 0;
 }

 if (VAR_2->e_phoff > 0 && VAR_2->e_phnum > 0) {
  size_t VAR_4;





  VAR_4 = sizeof(struct elf_phdr) * VAR_2->e_phnum;


  if (VAR_2->e_phoff + VAR_4 < VAR_2->e_phoff) {
   FUNC_0("Program headers at invalid location.\n");
   return 0;
  } else if (VAR_2->e_phoff + VAR_4 > VAR_3) {
   FUNC_0("Program headers truncated.\n");
   return 0;
  }
 }

 if (VAR_2->e_shoff > 0 && VAR_2->e_shnum > 0) {
  size_t VAR_5;





  VAR_5 = sizeof(struct elf_shdr) * VAR_2->e_shnum;


  if (VAR_2->e_shoff + VAR_5 < VAR_2->e_shoff) {
   FUNC_0("Section headers at invalid location.\n");
   return 0;
  } else if (VAR_2->e_shoff + VAR_5 > VAR_3) {
   FUNC_0("Section headers truncated.\n");
   return 0;
  }
 }

 return 1;
}
