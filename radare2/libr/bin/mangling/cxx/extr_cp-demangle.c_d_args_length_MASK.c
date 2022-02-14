
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct demangle_component {scalar_t__ type; } const demangle_component ;
struct d_print_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct demangle_component const* FUNC_0 (struct d_print_info*,struct demangle_component const*) ;
 struct demangle_component const* FUNC_1 (struct demangle_component const*) ;
 scalar_t__ FUNC_2 (struct demangle_component const*) ;
 struct demangle_component const* FUNC_3 (struct demangle_component const*) ;

__attribute__((used)) static int
FUNC_4 (struct d_print_info *VAR_2, const struct demangle_component *VAR_3)
{
  int VAR_4 = 0;
  for (; VAR_3 && VAR_3->type == VAR_1;
       VAR_3 = FUNC_3 (VAR_3))
    {
      struct demangle_component *VAR_5 = FUNC_1 (VAR_3);
      if (VAR_5 == ((void*)0))
 break;
      if (VAR_5->type == VAR_0)
 {
   struct demangle_component *VAR_6 = FUNC_0 (VAR_2, FUNC_1 (VAR_5));
   VAR_4 += FUNC_2 (VAR_6);
 }
      else
 ++VAR_4;
    }
  return VAR_4;
}
