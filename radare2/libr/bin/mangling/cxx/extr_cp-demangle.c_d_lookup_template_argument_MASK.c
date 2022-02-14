
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int number; } ;
struct TYPE_6__ {TYPE_2__ s_number; } ;
struct demangle_component {TYPE_3__ u; } ;
struct d_print_info {TYPE_1__* templates; } ;
struct TYPE_4__ {int template_decl; } ;


 struct demangle_component* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct d_print_info*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct demangle_component *
FUNC_3 (struct d_print_info *VAR_0,
       const struct demangle_component *VAR_1)
{
  if (VAR_0->templates == ((void*)0))
    {
      FUNC_1 (VAR_0);
      return ((void*)0);
    }

  return FUNC_0
    (FUNC_2 (VAR_0->templates->template_decl),
     VAR_1->u.s_number.number);
}
