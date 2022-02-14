
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {scalar_t__ type; } ;
struct d_print_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct d_print_info*,char) ;
 int FUNC_1 (struct d_print_info*,int,struct demangle_component*) ;

__attribute__((used)) static void
FUNC_2 (struct d_print_info *VAR_4, int VAR_5,
   struct demangle_component *VAR_6)
{
  int VAR_7 = 0;
  if (VAR_6 && (VAR_6->type == VAR_2
      || VAR_6->type == VAR_3
      || VAR_6->type == VAR_1
      || VAR_6->type == VAR_0))
    VAR_7 = 1;
  if (!VAR_7)
    FUNC_0 (VAR_4, '(');
  FUNC_1 (VAR_4, VAR_5, VAR_6);
  if (!VAR_7)
    FUNC_0 (VAR_4, ')');
}
