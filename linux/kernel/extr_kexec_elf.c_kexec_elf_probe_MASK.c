
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kexec_elf_info {int dummy; } ;
struct elfhdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct elfhdr*) ;
 int FUNC_1 (char const*,unsigned long,struct elfhdr*,struct kexec_elf_info*) ;
 int FUNC_2 (struct kexec_elf_info*) ;

int FUNC_3(const char *VAR_1, unsigned long VAR_2)
{
 struct elfhdr VAR_3;
 struct kexec_elf_info VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_2(&VAR_4);

 return FUNC_0(&VAR_3) ? 0 : -VAR_0;
}
