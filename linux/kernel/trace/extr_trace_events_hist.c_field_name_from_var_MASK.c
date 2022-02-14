
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hist_trigger_data {TYPE_1__* attrs; } ;
struct TYPE_4__ {unsigned int n_vars; char** name; char** expr; } ;
struct TYPE_3__ {TYPE_2__ var_defs; } ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static char *FUNC_3(struct hist_trigger_data *VAR_0,
     char *VAR_1)
{
 char *VAR_2, *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->attrs->var_defs.n_vars; VAR_4++) {
  VAR_2 = VAR_0->attrs->var_defs.name[VAR_4];

  if (FUNC_2(VAR_1, VAR_2) == 0) {
   VAR_3 = VAR_0->attrs->var_defs.expr[VAR_4];
   if (FUNC_0(VAR_3) || FUNC_1(VAR_3))
    continue;
   return VAR_3;
  }
 }

 return ((void*)0);
}
