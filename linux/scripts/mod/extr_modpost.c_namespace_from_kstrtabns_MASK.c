
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elf_info {char* ksymtab_strings; } ;
struct TYPE_3__ {int st_value; } ;
typedef TYPE_1__ Elf_Sym ;



__attribute__((used)) static const char *FUNC_0(struct elf_info *VAR_0,
         Elf_Sym *VAR_1)
{
 char *VAR_2 = VAR_0->ksymtab_strings + VAR_1->st_value;
 return VAR_2[0] ? VAR_2 : ((void*)0);
}
