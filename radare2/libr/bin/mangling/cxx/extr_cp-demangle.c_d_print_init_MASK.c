
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_print_info {char last_char; int * current_template; int num_saved_scopes; int num_copy_templates; scalar_t__ next_copy_template; int * copy_templates; scalar_t__ next_saved_scope; int * saved_scopes; int * component_stack; scalar_t__ is_lambda_arg; scalar_t__ recursion; scalar_t__ demangle_failure; void* opaque; int callback; scalar_t__ flush_count; scalar_t__ pack_index; int * modifiers; int * templates; scalar_t__ len; } ;
typedef int demangle_callbackref ;


 int FUNC_0 (int *,int *,struct demangle_component const*) ;

__attribute__((used)) static void
FUNC_1 (struct d_print_info *VAR_0, demangle_callbackref VAR_1,
       void *VAR_2, const struct demangle_component *VAR_3)
{
  VAR_0->len = 0;
  VAR_0->last_char = '\0';
  VAR_0->templates = ((void*)0);
  VAR_0->modifiers = ((void*)0);
  VAR_0->pack_index = 0;
  VAR_0->flush_count = 0;

  VAR_0->callback = VAR_1;
  VAR_0->opaque = VAR_2;

  VAR_0->demangle_failure = 0;
  VAR_0->recursion = 0;
  VAR_0->is_lambda_arg = 0;

  VAR_0->component_stack = ((void*)0);

  VAR_0->saved_scopes = ((void*)0);
  VAR_0->next_saved_scope = 0;
  VAR_0->num_saved_scopes = 0;

  VAR_0->copy_templates = ((void*)0);
  VAR_0->next_copy_template = 0;
  VAR_0->num_copy_templates = 0;

  FUNC_0 (&VAR_0->num_copy_templates,
       &VAR_0->num_saved_scopes, VAR_3);
  VAR_0->num_copy_templates *= VAR_0->num_saved_scopes;

  VAR_0->current_template = ((void*)0);
}
