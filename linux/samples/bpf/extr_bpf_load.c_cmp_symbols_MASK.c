
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ st_value; } ;
typedef TYPE_1__ GElf_Sym ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const GElf_Sym *VAR_2 = (const GElf_Sym *)VAR_0;
 const GElf_Sym *VAR_3 = (const GElf_Sym *)VAR_1;

 if (VAR_2->st_value < VAR_3->st_value)
  return -1;
 else if (VAR_2->st_value > VAR_3->st_value)
  return 1;
 else
  return 0;
}
