
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {scalar_t__ type; } ;
struct d_print_template {struct d_print_template* next; int * template_decl; int member_0; } ;
struct d_print_info {struct d_print_template* templates; int * current_template; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct d_print_info*,char) ;
 char FUNC_1 (struct d_print_info*) ;
 struct demangle_component* FUNC_2 (struct demangle_component*) ;
 int FUNC_3 (struct d_print_info*,int,struct demangle_component*) ;
 struct demangle_component* FUNC_4 (struct demangle_component*) ;

__attribute__((used)) static void
FUNC_5 (struct d_print_info *VAR_1, int VAR_2,
      struct demangle_component *VAR_3)
{
  struct d_print_template VAR_4 = {0};



  if (VAR_1->current_template != ((void*)0))
    {
      VAR_4.next = VAR_1->templates;
      VAR_1->templates = &VAR_4;
      VAR_4.template_decl = VAR_1->current_template;
    }

  if (FUNC_2 (VAR_3)->type != VAR_0)
    {
      FUNC_3 (VAR_1, VAR_2, FUNC_2 (VAR_3));
      if (VAR_1->current_template != ((void*)0))
 VAR_1->templates = VAR_4.next;
    }
  else
    {
      FUNC_3 (VAR_1, VAR_2, FUNC_2 (FUNC_2 (VAR_3)));




      if (VAR_1->current_template != ((void*)0))
 VAR_1->templates = VAR_4.next;

      if (FUNC_1 (VAR_1) == '<')
 FUNC_0 (VAR_1, ' ');
      FUNC_0 (VAR_1, '<');
      FUNC_3 (VAR_1, VAR_2, FUNC_4 (FUNC_2 (VAR_3)));


      if (FUNC_1 (VAR_1) == '>')
 FUNC_0 (VAR_1, ' ');
      FUNC_0 (VAR_1, '>');
    }
}
