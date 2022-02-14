
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_info {int * sechdrs; } ;


 char const* FUNC_0 (struct elf_info*,int *) ;

__attribute__((used)) static const char *FUNC_1(struct elf_info *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0, &VAR_0->sechdrs[VAR_1]);
}
