
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kexec_elf_info {char const* buffer; struct elfhdr* ehdr; } ;
struct elfhdr {scalar_t__ e_phoff; scalar_t__ e_phnum; } ;


 int FUNC_0 (char const*,size_t,struct elfhdr*) ;
 int FUNC_1 (char const*,size_t,struct kexec_elf_info*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, size_t VAR_1,
    struct elfhdr *VAR_2,
    struct kexec_elf_info *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3->buffer = VAR_0;
 VAR_3->ehdr = VAR_2;
 if (VAR_2->e_phoff > 0 && VAR_2->e_phnum > 0) {
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
