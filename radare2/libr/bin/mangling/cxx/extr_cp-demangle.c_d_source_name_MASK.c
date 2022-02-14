
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {struct demangle_component* last_name; } ;


 struct demangle_component* FUNC_0 (struct d_info*,int) ;
 int FUNC_1 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_2 (struct d_info *VAR_0)
{
  int VAR_1;
  struct demangle_component *VAR_2;

  VAR_1 = FUNC_1 (VAR_0);
  if (VAR_1 <= 0)
    return ((void*)0);
  VAR_2 = FUNC_0 (VAR_0, VAR_1);
  VAR_0->last_name = VAR_2;
  return VAR_2;
}
