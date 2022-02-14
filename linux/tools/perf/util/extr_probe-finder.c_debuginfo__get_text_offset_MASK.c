
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct debuginfo {int mod; int bias; } ;
struct TYPE_4__ {scalar_t__ sh_offset; int sh_addr; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int Elf_Scn ;
typedef int Elf32_Word ;
typedef int Elf ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int *) ;
 char* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 TYPE_1__* FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

int FUNC_6(struct debuginfo *VAR_2, Dwarf_Addr *VAR_3,
    bool VAR_4)
{
 int VAR_5, VAR_6;
 Elf32_Word VAR_7;
 Elf_Scn *VAR_8;
 Elf *VAR_9;
 GElf_Shdr VAR_10, *VAR_11;
 const char *VAR_12;

 VAR_9 = FUNC_0(VAR_2->mod, &VAR_2->bias);
 if (!VAR_9)
  return -VAR_0;


 VAR_5 = FUNC_2(VAR_2->mod);
 if (VAR_5 < 0)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_12 = FUNC_1(VAR_2->mod, VAR_6, &VAR_7);
  if (FUNC_5(VAR_12, ".text") == 0) {

   VAR_8 = FUNC_3(VAR_9, VAR_7);
   if (!VAR_8)
    return -VAR_1;
   VAR_11 = FUNC_4(VAR_8, &VAR_10);
   if (!VAR_11)
    return -VAR_1;
   *VAR_3 = VAR_11->sh_addr;
   if (VAR_4)
    *VAR_3 -= VAR_11->sh_offset;
  }
 }
 return 0;
}
