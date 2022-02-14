
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int FUNC_0 (struct d_info*,char) ;
 int FUNC_1 (struct d_info*) ;
 struct demangle_component* FUNC_2 (struct d_info*,int) ;

__attribute__((used)) static struct demangle_component *
FUNC_3 (struct d_info *VAR_0)
{
  int VAR_1;

  if (! FUNC_0 (VAR_0, 'T'))
    return ((void*)0);

  VAR_1 = FUNC_1 (VAR_0);
  if (VAR_1 < 0)
    return ((void*)0);

  return FUNC_2 (VAR_0, VAR_1);
}
