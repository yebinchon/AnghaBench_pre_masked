
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hist_trigger_data {TYPE_2__* attrs; } ;
struct TYPE_3__ {unsigned int n_vars; int * expr; int * name; } ;
struct TYPE_4__ {TYPE_1__ var_defs; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct hist_trigger_data *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->attrs->var_defs.n_vars; VAR_1++) {
  FUNC_0(VAR_0->attrs->var_defs.name[VAR_1]);
  FUNC_0(VAR_0->attrs->var_defs.expr[VAR_1]);
 }

 VAR_0->attrs->var_defs.n_vars = 0;
}
