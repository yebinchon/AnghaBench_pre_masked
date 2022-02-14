
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct elf_info {TYPE_1__* symtab_stop; TYPE_1__* symtab_start; } ;
struct TYPE_5__ {scalar_t__ st_value; int st_shndx; } ;
typedef TYPE_1__ Elf_Sym ;
typedef scalar_t__ Elf_Addr ;


 int FUNC_0 (struct elf_info*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct elf_info*,TYPE_1__*) ;
 char* FUNC_3 (struct elf_info*,int ) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static Elf_Sym *FUNC_5(struct elf_info *VAR_0, Elf_Addr VAR_1,
     const char *VAR_2)
{
 Elf_Sym *VAR_3;
 Elf_Sym *VAR_4 = ((void*)0);
 Elf_Addr VAR_5 = ~0;

 for (VAR_3 = VAR_0->symtab_start; VAR_3 < VAR_0->symtab_stop; VAR_3++) {
  const char *VAR_6;

  if (FUNC_1(VAR_3->st_shndx))
   continue;
  VAR_6 = FUNC_3(VAR_0, FUNC_0(VAR_0, VAR_3));
  if (FUNC_4(VAR_6, VAR_2) != 0)
   continue;
  if (!FUNC_2(VAR_0, VAR_3))
   continue;
  if (VAR_3->st_value <= VAR_1) {
   if ((VAR_1 - VAR_3->st_value) < VAR_5) {
    VAR_5 = VAR_1 - VAR_3->st_value;
    VAR_4 = VAR_3;
   } else if ((VAR_1 - VAR_3->st_value) == VAR_5) {
    VAR_4 = VAR_3;
   }
  }
 }
 return VAR_4;
}
