
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t e_phnum; int e_phoff; int e_ehsize; int e_phentsize; scalar_t__ e_shstrndx; scalar_t__ e_shnum; scalar_t__ e_shentsize; int e_flags; scalar_t__ e_shoff; scalar_t__ e_entry; int e_version; int e_machine; int e_type; int e_ident; } ;
struct kcore {scalar_t__ elfclass; int elf; TYPE_1__ ehdr; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int Elf64_Phdr ;
typedef int Elf64_Ehdr ;
typedef int Elf32_Phdr ;
typedef int Elf32_Ehdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kcore *VAR_2, struct kcore *VAR_3, size_t VAR_4)
{
 GElf_Ehdr *VAR_5 = &VAR_3->ehdr;
 GElf_Ehdr *VAR_6 = &VAR_2->ehdr;

 FUNC_2(VAR_5->e_ident, VAR_6->e_ident, VAR_0);
 VAR_5->e_type = VAR_6->e_type;
 VAR_5->e_machine = VAR_6->e_machine;
 VAR_5->e_version = VAR_6->e_version;
 VAR_5->e_entry = 0;
 VAR_5->e_shoff = 0;
 VAR_5->e_flags = VAR_6->e_flags;
 VAR_5->e_phnum = VAR_4;
 VAR_5->e_shentsize = 0;
 VAR_5->e_shnum = 0;
 VAR_5->e_shstrndx = 0;

 if (VAR_2->elfclass == VAR_1) {
  VAR_5->e_phoff = sizeof(Elf32_Ehdr);
  VAR_5->e_ehsize = sizeof(Elf32_Ehdr);
  VAR_5->e_phentsize = sizeof(Elf32_Phdr);
 } else {
  VAR_5->e_phoff = sizeof(Elf64_Ehdr);
  VAR_5->e_ehsize = sizeof(Elf64_Ehdr);
  VAR_5->e_phentsize = sizeof(Elf64_Phdr);
 }

 if (!FUNC_1(VAR_3->elf, VAR_5))
  return -1;

 if (!FUNC_0(VAR_3->elf, VAR_4))
  return -1;

 return 0;
}
