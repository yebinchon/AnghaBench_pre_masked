
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sh_type; } ;
typedef TYPE_1__ Elf_Shdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* FUNC_0 (TYPE_1__ const* const,TYPE_1__ const* const,char const* const,char const* const) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static char const *FUNC_2(Elf_Shdr const *const VAR_2,
      Elf_Shdr const *const VAR_3,
      char const *const VAR_4,
      char const *const VAR_5)
{
 if (FUNC_1(VAR_2->sh_type) != VAR_0 && FUNC_1(VAR_2->sh_type) != VAR_1)
  return ((void*)0);
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
