
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* e_ident; int e_flags; } ;
typedef TYPE_1__ Elf_Internal_Ehdr ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_0 (Elf_Internal_Ehdr *VAR_3)
{

  if (VAR_3->e_ident[VAR_1] == VAR_2) {
   return 1;
  }


  if ((VAR_3->e_flags & VAR_0) != 0) {
   return 1;
  }

  return 0;
}
