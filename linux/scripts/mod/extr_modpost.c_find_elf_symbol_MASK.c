
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct elf_info {TYPE_1__* symtab_stop; TYPE_1__* symtab_start; } ;
struct TYPE_6__ {scalar_t__ st_name; scalar_t__ st_value; int st_info; } ;
typedef TYPE_1__ Elf_Sym ;
typedef scalar_t__ Elf64_Sword ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (struct elf_info*,TYPE_1__*) ;
 int FUNC_2 (struct elf_info*,TYPE_1__*) ;

__attribute__((used)) static Elf_Sym *FUNC_3(struct elf_info *VAR_1, Elf64_Sword VAR_2,
    Elf_Sym *VAR_3)
{
 Elf_Sym *VAR_4;
 Elf_Sym *VAR_5 = ((void*)0);
 Elf64_Sword VAR_6 = 20;
 Elf64_Sword VAR_7;
 unsigned int VAR_8;

 if (VAR_3->st_name != 0)
  return VAR_3;

 VAR_8 = FUNC_1(VAR_1, VAR_3);
 for (VAR_4 = VAR_1->symtab_start; VAR_4 < VAR_1->symtab_stop; VAR_4++) {
  if (FUNC_1(VAR_1, VAR_4) != VAR_8)
   continue;
  if (FUNC_0(VAR_4->st_info) == VAR_0)
   continue;
  if (!FUNC_2(VAR_1, VAR_4))
   continue;
  if (VAR_4->st_value == VAR_2)
   return VAR_4;

  VAR_7 = VAR_4->st_value - VAR_2;
  if (VAR_7 < 0)
   VAR_7 = VAR_2 - VAR_4->st_value;
  if (VAR_7 < VAR_6) {
   VAR_6 = VAR_7;
   VAR_5 = VAR_4;
  }
 }

 if (VAR_6 < 20)
  return VAR_5;
 else
  return ((void*)0);
}
