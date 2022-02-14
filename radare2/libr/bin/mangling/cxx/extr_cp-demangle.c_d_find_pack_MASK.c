
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct demangle_component* name; } ;
struct TYPE_5__ {struct demangle_component* name; } ;
struct TYPE_8__ {struct demangle_component* name; } ;
struct TYPE_7__ {TYPE_2__ s_dtor; TYPE_1__ s_ctor; TYPE_4__ s_extended_operator; } ;
struct demangle_component {int type; TYPE_3__ u; } ;
struct d_print_info {int dummy; } ;
 int VAR_0 ;


 struct demangle_component* FUNC_0 (struct demangle_component const*) ;
 struct demangle_component* FUNC_1 (struct d_print_info*,struct demangle_component const*) ;
 struct demangle_component* FUNC_2 (struct demangle_component const*) ;

__attribute__((used)) static struct demangle_component *
FUNC_3 (struct d_print_info *VAR_1,
      const struct demangle_component *VAR_2)
{
  struct demangle_component *VAR_3;
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  switch (VAR_2->type)
    {
    case 129:
      VAR_3 = FUNC_1 (VAR_1, VAR_2);
      if (VAR_3 && VAR_3->type == VAR_0)
 return VAR_3;
      return ((void*)0);

    case 132:
      return ((void*)0);

    case 136:
    case 135:
    case 130:
    case 133:
    case 144:
    case 131:
    case 143:
    case 137:
    case 128:
    case 138:
    case 141:
    case 134:
      return ((void*)0);

    case 139:
      return FUNC_3 (VAR_1, VAR_2->u.s_extended_operator.name);
    case 142:
      return FUNC_3 (VAR_1, VAR_2->u.s_ctor.name);
    case 140:
      return FUNC_3 (VAR_1, VAR_2->u.s_dtor.name);

    default:
      VAR_3 = FUNC_3 (VAR_1, FUNC_0 (VAR_2));
      if (VAR_3)
 return VAR_3;
      return FUNC_3 (VAR_1, FUNC_2 (VAR_2));
    }
}
