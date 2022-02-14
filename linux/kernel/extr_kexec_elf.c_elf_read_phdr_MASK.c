
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kexec_elf_info {struct elfhdr const* ehdr; int * proghdrs; } ;
typedef struct elfhdr {int e_phoff; int* e_ident; } const elfhdr ;
struct elf_phdr {void* p_align; void* p_memsz; void* p_filesz; void* p_vaddr; void* p_paddr; void* p_offset; void* p_flags; void* p_type; } ;


 int VAR_0 ;
 size_t VAR_1 ;


 int VAR_2 ;
 void* FUNC_0 (struct elfhdr const*,void*) ;
 void* FUNC_1 (struct elfhdr const*,void*) ;
 scalar_t__ FUNC_2 (struct elf_phdr*,size_t) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, size_t VAR_4,
    struct kexec_elf_info *VAR_5,
    int VAR_6)
{

 struct elf_phdr *VAR_7 = (struct elf_phdr *) &VAR_5->proghdrs[VAR_6];
 const struct elfhdr *VAR_8 = VAR_5->ehdr;
 const char *VAR_9;
 struct elf_phdr *VAR_10;

 VAR_9 = VAR_3 + VAR_5->ehdr->e_phoff + (VAR_6 * sizeof(*VAR_10));
 VAR_10 = (struct elf_phdr *) VAR_9;

 VAR_7->p_type = FUNC_0(VAR_5->ehdr, VAR_10->p_type);
 VAR_7->p_flags = FUNC_0(VAR_5->ehdr, VAR_10->p_flags);

 switch (VAR_8->e_ident[VAR_1]) {
 case 128:
  VAR_7->p_offset = FUNC_1(VAR_8, VAR_10->p_offset);
  VAR_7->p_paddr = FUNC_1(VAR_8, VAR_10->p_paddr);
  VAR_7->p_vaddr = FUNC_1(VAR_8, VAR_10->p_vaddr);
  VAR_7->p_filesz = FUNC_1(VAR_8, VAR_10->p_filesz);
  VAR_7->p_memsz = FUNC_1(VAR_8, VAR_10->p_memsz);
  VAR_7->p_align = FUNC_1(VAR_8, VAR_10->p_align);
  break;

 case 129:
  VAR_7->p_offset = FUNC_0(VAR_8, VAR_10->p_offset);
  VAR_7->p_paddr = FUNC_0(VAR_8, VAR_10->p_paddr);
  VAR_7->p_vaddr = FUNC_0(VAR_8, VAR_10->p_vaddr);
  VAR_7->p_filesz = FUNC_0(VAR_8, VAR_10->p_filesz);
  VAR_7->p_memsz = FUNC_0(VAR_8, VAR_10->p_memsz);
  VAR_7->p_align = FUNC_0(VAR_8, VAR_10->p_align);
  break;

 default:
  FUNC_3("Unknown ELF class.\n");
  return -VAR_0;
 }

 return FUNC_2(VAR_7, VAR_4) ? 0 : -VAR_2;
}
