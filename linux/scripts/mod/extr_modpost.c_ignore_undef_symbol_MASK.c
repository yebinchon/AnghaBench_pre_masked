
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_info {TYPE_1__* hdr; } ;
struct TYPE_2__ {scalar_t__ e_machine; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(struct elf_info *VAR_2, const char *VAR_3)
{

 if (FUNC_0(VAR_3, "__this_module") == 0)
  return 1;

 if (FUNC_0(VAR_3, "_GLOBAL_OFFSET_TABLE_") == 0)
  return 1;
 if (VAR_2->hdr->e_machine == VAR_0)

  if (FUNC_1(VAR_3, "_restgpr_") ||
      FUNC_1(VAR_3, "_savegpr_") ||
      FUNC_1(VAR_3, "_rest32gpr_") ||
      FUNC_1(VAR_3, "_save32gpr_") ||
      FUNC_1(VAR_3, "_restvr_") ||
      FUNC_1(VAR_3, "_savevr_"))
   return 1;
 if (VAR_2->hdr->e_machine == VAR_1)

  if (FUNC_1(VAR_3, "_restgpr0_") ||
      FUNC_1(VAR_3, "_savegpr0_") ||
      FUNC_1(VAR_3, "_restvr_") ||
      FUNC_1(VAR_3, "_savevr_") ||
      FUNC_0(VAR_3, ".TOC.") == 0)
   return 1;

 return 0;
}
