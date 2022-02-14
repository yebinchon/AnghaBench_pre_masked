
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file; struct TYPE_3__* next; } ;
typedef TYPE_1__ obs_module_t ;
struct TYPE_4__ {TYPE_1__* first_module; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_2__* VAR_1 ;

void FUNC_1(void)
{
 FUNC_0(VAR_0, "  Loaded Modules:");

 for (obs_module_t *VAR_2 = VAR_1->first_module; !!VAR_2; VAR_2 = VAR_2->next)
  FUNC_0(VAR_0, "    %s", VAR_2->file);
}
