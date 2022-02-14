
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kind; struct demangle_component* name; } ;
struct TYPE_3__ {TYPE_2__ s_ctor; } ;
struct demangle_component {TYPE_1__ u; int type; scalar_t__ d_printing; } ;
typedef enum gnu_v3_ctor_kinds { ____Placeholder_gnu_v3_ctor_kinds } gnu_v3_ctor_kinds ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0 (struct demangle_component *VAR_3,
                          enum gnu_v3_ctor_kinds VAR_4,
                          struct demangle_component *VAR_5)
{
  if (VAR_3 == ((void*)0)
      || VAR_5 == ((void*)0)
      || (int) VAR_4 < VAR_1
      || (int) VAR_4 > VAR_2)
    return 0;
  VAR_3->d_printing = 0;
  VAR_3->type = VAR_0;
  VAR_3->u.s_ctor.kind = VAR_4;
  VAR_3->u.s_ctor.name = VAR_5;
  return 1;
}
