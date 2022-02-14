
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int FUNC_0 (struct d_info*,int) ;
 char FUNC_1 (struct d_info*) ;
 struct demangle_component* FUNC_2 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_3 (struct d_info *VAR_0)
{
  if (FUNC_1 (VAR_0) != 'I'
      && FUNC_1 (VAR_0) != 'J')
    return ((void*)0);
  FUNC_0 (VAR_0, 1);

  return FUNC_2 (VAR_0);
}
