
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_saved_scope {struct demangle_component const* container; } ;
struct d_print_info {int next_saved_scope; struct d_saved_scope* saved_scopes; } ;



__attribute__((used)) static struct d_saved_scope *
FUNC_0 (struct d_print_info *VAR_0,
     const struct demangle_component *VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->next_saved_scope; VAR_2++)
    if (VAR_0->saved_scopes[VAR_2].container == VAR_1)
      return &VAR_0->saved_scopes[VAR_2];

  return ((void*)0);
}
