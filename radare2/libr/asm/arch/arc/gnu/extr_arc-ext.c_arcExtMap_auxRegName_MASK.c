
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ExtAuxRegister {long address; scalar_t__ name; struct ExtAuxRegister* next; } ;
struct TYPE_2__ {struct ExtAuxRegister* auxRegisters; } ;


 TYPE_1__ VAR_0 ;

const char *
FUNC_0 (long VAR_1)
{

  struct ExtAuxRegister *VAR_2;

  for (VAR_2 = VAR_0.auxRegisters; VAR_2; VAR_2 = VAR_2->next)
    {
   if (VAR_2->address == VAR_1) {
    return (const char *)VAR_2->name;
   }
    }
  return ((void*)0);
}
