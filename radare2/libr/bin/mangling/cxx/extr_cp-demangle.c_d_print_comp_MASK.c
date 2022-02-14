
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int d_printing; } ;
struct d_print_info {scalar_t__ recursion; struct d_component_stack* component_stack; } ;
struct d_component_stack {struct d_component_stack* parent; struct demangle_component* dc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct d_print_info*,int,struct demangle_component*) ;
 int FUNC_1 (struct d_print_info*) ;

__attribute__((used)) static void
FUNC_2 (struct d_print_info *VAR_1, int VAR_2,
       struct demangle_component *VAR_3)
{
  struct d_component_stack VAR_4;
  if (VAR_3 == ((void*)0) || VAR_3->d_printing > 1 || VAR_1->recursion > VAR_0)
    {
      FUNC_1 (VAR_1);
      return;
    }

  VAR_3->d_printing++;
  VAR_1->recursion++;

  VAR_4.dc = VAR_3;
  VAR_4.parent = VAR_1->component_stack;
  VAR_1->component_stack = &VAR_4;

  FUNC_0 (VAR_1, VAR_2, VAR_3);

  VAR_1->component_stack = VAR_4.parent;
  VAR_3->d_printing--;
  VAR_1->recursion--;
}
