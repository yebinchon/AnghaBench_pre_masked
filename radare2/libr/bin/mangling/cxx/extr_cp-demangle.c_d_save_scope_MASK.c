
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_saved_scope {struct d_print_template* templates; struct demangle_component const* container; } ;
struct d_print_template {struct d_print_template* next; int template_decl; } ;
struct d_print_info {size_t next_saved_scope; size_t num_saved_scopes; size_t next_copy_template; size_t num_copy_templates; struct d_print_template* copy_templates; struct d_print_template* templates; struct d_saved_scope* saved_scopes; } ;


 int FUNC_0 (struct d_print_info*) ;

__attribute__((used)) static void
FUNC_1 (struct d_print_info *VAR_0,
       const struct demangle_component *VAR_1)
{
  struct d_saved_scope *VAR_2;
  struct d_print_template *VAR_3, **VAR_4;

  if (VAR_0->next_saved_scope >= VAR_0->num_saved_scopes)
    {
      FUNC_0 (VAR_0);
      return;
    }
  VAR_2 = &VAR_0->saved_scopes[VAR_0->next_saved_scope];
  VAR_0->next_saved_scope++;

  VAR_2->container = VAR_1;
  VAR_4 = &VAR_2->templates;

  for (VAR_3 = VAR_0->templates; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    {
      struct d_print_template *VAR_5;

      if (VAR_0->next_copy_template >= VAR_0->num_copy_templates)
 {
   FUNC_0 (VAR_0);
   return;
 }
      VAR_5 = &VAR_0->copy_templates[VAR_0->next_copy_template];
      VAR_0->next_copy_template++;

      VAR_5->template_decl = VAR_3->template_decl;
      *VAR_4 = VAR_5;
      VAR_4 = &VAR_5->next;
    }

  *VAR_4 = ((void*)0);
}
