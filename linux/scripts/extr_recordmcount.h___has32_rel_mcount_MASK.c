
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sh_flags; int sh_type; int sh_name; int sh_info; } ;
typedef TYPE_1__ Elf_Shdr ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 char const* VAR_2 ;
 int FUNC_1 (int ,char*,char const* const) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,char const* const) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static char const * FUNC_4(Elf_Shdr const *const VAR_4,
         Elf_Shdr const *const VAR_5,
         char const *const VAR_6,
         char const *const VAR_7)
{

 Elf_Shdr const *const VAR_8 = &VAR_5[FUNC_3(VAR_4->sh_info)];
 char const *const VAR_9 = &VAR_6[FUNC_3(VAR_8->sh_name)];

 if (FUNC_2("__mcount_loc", VAR_9) == 0) {
  FUNC_1(VAR_3, "warning: __mcount_loc already exists: %s\n",
   VAR_7);
  return VAR_2;
 }
 if (FUNC_3(VAR_8->sh_type) != VAR_1 ||
     !(FUNC_0(VAR_8->sh_flags) & VAR_0))
  return ((void*)0);
 return VAR_9;
}
