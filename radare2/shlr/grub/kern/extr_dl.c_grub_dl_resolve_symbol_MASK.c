
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* grub_symbol_t ;
struct TYPE_3__ {void* addr; int name; struct TYPE_3__* next; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 size_t FUNC_1 (char const*) ;
 TYPE_1__** VAR_0 ;

__attribute__((used)) static void *
FUNC_2 (const char *VAR_1)
{
  grub_symbol_t VAR_2;

  for (VAR_2 = VAR_0[FUNC_1 (VAR_1)]; VAR_2; VAR_2 = VAR_2->next)
    if (FUNC_0 (VAR_2->name, VAR_1) == 0)
      return VAR_2->addr;

  return 0;
}
