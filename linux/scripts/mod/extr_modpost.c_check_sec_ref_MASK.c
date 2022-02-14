
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct module {int dummy; } ;
struct elf_info {int num_sections; TYPE_1__* sechdrs; } ;
struct TYPE_5__ {scalar_t__ sh_type; } ;
typedef TYPE_1__ Elf_Shdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,struct elf_info*,TYPE_1__*) ;
 int FUNC_1 (char const*,struct elf_info*,TYPE_1__*) ;
 int FUNC_2 (char const*,struct elf_info*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct module *VAR_2, const char *VAR_3,
     struct elf_info *VAR_4)
{
 int VAR_5;
 Elf_Shdr *VAR_6 = VAR_4->sechdrs;


 for (VAR_5 = 0; VAR_5 < VAR_4->num_sections; VAR_5++) {
  FUNC_0(VAR_3, VAR_4, &VAR_4->sechdrs[VAR_5]);

  if (VAR_6[VAR_5].sh_type == VAR_1)
   FUNC_2(VAR_3, VAR_4, &VAR_4->sechdrs[VAR_5]);
  else if (VAR_6[VAR_5].sh_type == VAR_0)
   FUNC_1(VAR_3, VAR_4, &VAR_4->sechdrs[VAR_5]);
 }
}
