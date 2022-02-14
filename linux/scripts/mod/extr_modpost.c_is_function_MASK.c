
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_info; } ;
typedef TYPE_1__ Elf_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(Elf_Sym *VAR_1)
{
 if (VAR_1)
  return FUNC_0(VAR_1->st_info) == VAR_0;
 else
  return -1;
}
