
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int args; struct demangle_component* name; } ;
struct TYPE_3__ {TYPE_2__ s_extended_operator; } ;
struct demangle_component {TYPE_1__ u; int type; scalar_t__ d_printing; } ;


 int VAR_0 ;

int
FUNC_0 (struct demangle_component *VAR_1, int VAR_2,
                                       struct demangle_component *VAR_3)
{
  if (VAR_1 == ((void*)0) || VAR_2 < 0 || VAR_3 == ((void*)0))
    return 0;
  VAR_1->d_printing = 0;
  VAR_1->type = VAR_0;
  VAR_1->u.s_extended_operator.args = VAR_2;
  VAR_1->u.s_extended_operator.name = VAR_3;
  return 1;
}
