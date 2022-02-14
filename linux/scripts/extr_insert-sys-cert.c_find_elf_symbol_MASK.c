
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int e_shoff; } ;
struct TYPE_8__ {unsigned int sh_link; int sh_offset; int sh_size; int sh_entsize; } ;
struct TYPE_7__ {int st_name; } ;
typedef TYPE_1__ Elf_Sym ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf_Ehdr ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static Elf_Sym *FUNC_2(Elf_Ehdr *VAR_0, Elf_Shdr *VAR_1, char *VAR_2)
{
 Elf_Sym *VAR_3, *VAR_4;
 char *VAR_5, *VAR_6;
 unsigned int VAR_7;
 Elf_Shdr *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = (void *)VAR_0 + VAR_0->e_shoff;
 VAR_7 = VAR_1->sh_link;
 VAR_4 = (void *)VAR_0 + VAR_1->sh_offset;
 VAR_10 = VAR_1->sh_size / VAR_1->sh_entsize;
 VAR_5 = (void *)VAR_0 + VAR_8[VAR_7].sh_offset;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_3 = &VAR_4[VAR_9];
  VAR_6 = VAR_5 + VAR_3->st_name;
  if (FUNC_1(VAR_6, VAR_2) == 0)
   return VAR_3;
 }
 FUNC_0("Unable to find symbol: %s\n", VAR_2);
 return ((void*)0);
}
