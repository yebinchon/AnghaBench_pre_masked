
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_info {unsigned int num_sections; TYPE_1__* sechdrs; } ;
struct TYPE_2__ {int sh_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct elf_info* VAR_1, unsigned int VAR_2)
{
 if (VAR_2 > VAR_1->num_sections)
  FUNC_0("section_index is outside elf->num_sections!\n");

 return ((VAR_1->sechdrs[VAR_2].sh_flags & VAR_0) == VAR_0);
}
