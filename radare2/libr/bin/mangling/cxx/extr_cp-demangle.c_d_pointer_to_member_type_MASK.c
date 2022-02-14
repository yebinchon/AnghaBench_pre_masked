
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 struct demangle_component* FUNC_0 (struct d_info*) ;
 int FUNC_1 (struct d_info*,char) ;
 struct demangle_component* FUNC_2 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;

__attribute__((used)) static struct demangle_component *
FUNC_3 (struct d_info *VAR_1)
{
  struct demangle_component *VAR_2;
  struct demangle_component *VAR_3;

  if (! FUNC_1 (VAR_1, 'M'))
    return ((void*)0);

  VAR_2 = FUNC_0 (VAR_1);
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  VAR_3 = FUNC_0 (VAR_1);
  if (VAR_3 == ((void*)0))
    return ((void*)0);

  return FUNC_2 (VAR_1, VAR_0, VAR_2, VAR_3);
}
