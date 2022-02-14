
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kexec_elf_info {TYPE_1__* proghdrs; } ;
struct elfhdr {scalar_t__ e_type; int e_phnum; } ;
struct TYPE_2__ {scalar_t__ p_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const*,size_t,struct elfhdr*,struct kexec_elf_info*) ;
 int FUNC_1 (struct kexec_elf_info*) ;
 int FUNC_2 (char*) ;

int FUNC_3(const char *VAR_4, size_t VAR_5, struct elfhdr *VAR_6,
          struct kexec_elf_info *VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;


 if (VAR_6->e_type != VAR_2 && VAR_6->e_type != VAR_1) {
  FUNC_2("Not an ELF executable.\n");
  goto error;
 } else if (!VAR_7->proghdrs) {
  FUNC_2("No ELF program header.\n");
  goto error;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->e_phnum; VAR_8++) {





  if (VAR_7->proghdrs[VAR_8].p_type == VAR_3) {
   FUNC_2("Requires an ELF interpreter.\n");
   goto error;
  }
 }

 return 0;
error:
 FUNC_1(VAR_7);
 return -VAR_0;
}
