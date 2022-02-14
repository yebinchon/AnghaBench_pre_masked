
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kexec_elf_info {int * proghdrs; struct elfhdr* ehdr; } ;
struct elfhdr {int e_phnum; } ;
struct elf_phdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,size_t,struct kexec_elf_info*,size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, size_t VAR_3,
     struct kexec_elf_info *VAR_4)
{
 size_t VAR_5, VAR_6;
 const struct elfhdr *VAR_7 = VAR_4->ehdr;





 VAR_5 = sizeof(struct elf_phdr) * VAR_7->e_phnum;

 VAR_4->proghdrs = FUNC_2(VAR_5, VAR_1);
 if (!VAR_4->proghdrs)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_7->e_phnum; VAR_6++) {
  int VAR_8;

  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6);
  if (VAR_8) {
   FUNC_1(VAR_4->proghdrs);
   VAR_4->proghdrs = ((void*)0);
   return VAR_8;
  }
 }

 return 0;
}
