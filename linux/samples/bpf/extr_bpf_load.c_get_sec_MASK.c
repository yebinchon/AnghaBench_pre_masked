
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int e_shstrndx; } ;
struct TYPE_7__ {int sh_size; int sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef int Elf_Data ;
typedef int Elf ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int ,int ) ;
 TYPE_1__* FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(Elf *VAR_0, int VAR_1, GElf_Ehdr *VAR_2, char **VAR_3,
     GElf_Shdr *VAR_4, Elf_Data **VAR_5)
{
 Elf_Scn *VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_6)
  return 1;

 if (FUNC_3(VAR_6, VAR_4) != VAR_4)
  return 2;

 *VAR_3 = FUNC_2(VAR_0, VAR_2->e_shstrndx, VAR_4->sh_name);
 if (!*VAR_3 || !VAR_4->sh_size)
  return 3;

 *VAR_5 = FUNC_0(VAR_6, 0);
 if (!*VAR_5 || FUNC_0(VAR_6, *VAR_5) != ((void*)0))
  return 4;

 return 0;
}
