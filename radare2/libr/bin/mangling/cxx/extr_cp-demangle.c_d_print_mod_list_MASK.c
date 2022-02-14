
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct demangle_component* sub; scalar_t__ num; } ;
struct TYPE_4__ {TYPE_1__ s_unary_num; } ;
struct demangle_component {scalar_t__ type; TYPE_2__ u; } ;
struct d_print_template {int dummy; } ;
struct d_print_mod {int printed; struct d_print_mod* next; struct demangle_component* mod; struct d_print_template* templates; } ;
struct d_print_info {struct d_print_template* templates; struct d_print_mod* modifiers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct d_print_info*,char) ;
 int FUNC_1 (struct d_print_info*,scalar_t__) ;
 int FUNC_2 (struct d_print_info*,char*) ;
 struct demangle_component* FUNC_3 (struct demangle_component*) ;
 int FUNC_4 (struct d_print_info*,int,struct demangle_component*,struct d_print_mod*) ;
 int FUNC_5 (struct d_print_info*,int,struct demangle_component*) ;
 int FUNC_6 (struct d_print_info*,int,struct demangle_component*,struct d_print_mod*) ;
 int FUNC_7 (struct d_print_info*,int,struct demangle_component*) ;
 scalar_t__ FUNC_8 (struct d_print_info*) ;
 struct demangle_component* FUNC_9 (struct demangle_component*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11 (struct d_print_info *VAR_5, int VAR_6,
                  struct d_print_mod *VAR_7, int VAR_8)
{
  struct d_print_template *VAR_9;

  if (VAR_7 == ((void*)0) || FUNC_8 (VAR_5))
    return;

  if (VAR_7->printed
      || (! VAR_8
   && (FUNC_10 (VAR_7->mod->type))))
    {
      FUNC_11 (VAR_5, VAR_6, VAR_7->next, VAR_8);
      return;
    }

  VAR_7->printed = 1;

  VAR_9 = VAR_5->templates;
  VAR_5->templates = VAR_7->templates;

  if (VAR_7->mod->type == VAR_2)
    {
      FUNC_6 (VAR_5, VAR_6, VAR_7->mod, VAR_7->next);
      VAR_5->templates = VAR_9;
      return;
    }
  else if (VAR_7->mod->type == VAR_0)
    {
      FUNC_4 (VAR_5, VAR_6, VAR_7->mod, VAR_7->next);
      VAR_5->templates = VAR_9;
      return;
    }
  else if (VAR_7->mod->type == VAR_3)
    {
      struct d_print_mod *VAR_10;
      struct demangle_component *VAR_11;






      VAR_10 = VAR_5->modifiers;
      VAR_5->modifiers = ((void*)0);
      FUNC_5 (VAR_5, VAR_6, FUNC_3 (VAR_7->mod));
      VAR_5->modifiers = VAR_10;

      if ((VAR_6 & VAR_4) == 0)
 FUNC_2 (VAR_5, "::");
      else
 FUNC_0 (VAR_5, '.');

      VAR_11 = FUNC_9 (VAR_7->mod);

      if (VAR_11->type == VAR_1)
 {
   FUNC_2 (VAR_5, "{default arg#");
   FUNC_1 (VAR_5, VAR_11->u.s_unary_num.num + 1);
   FUNC_2 (VAR_5, "}::");
   VAR_11 = VAR_11->u.s_unary_num.sub;
 }

      while (FUNC_10 (VAR_11->type))
 VAR_11 = FUNC_3 (VAR_11);

      FUNC_5 (VAR_5, VAR_6, VAR_11);

      VAR_5->templates = VAR_9;
      return;
    }

  FUNC_7 (VAR_5, VAR_6, VAR_7->mod);

  VAR_5->templates = VAR_9;

  FUNC_11 (VAR_5, VAR_6, VAR_7->next, VAR_8);
}
