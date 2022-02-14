
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 struct demangle_component* FUNC_0 (struct d_info*) ;
 int FUNC_1 (struct d_info*,int) ;
 int FUNC_2 (struct d_info*,char) ;
 struct demangle_component* FUNC_3 (struct d_info*) ;
 struct demangle_component* FUNC_4 (struct d_info*) ;
 int FUNC_5 (struct d_info*) ;
 struct demangle_component* FUNC_6 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_7 (struct d_info *VAR_0)
{
  struct demangle_component *VAR_1;

  switch (FUNC_5 (VAR_0))
    {
    case 'X':
      FUNC_1 (VAR_0, 1);
      VAR_1 = FUNC_4 (VAR_0);
      if (! FUNC_2 (VAR_0, 'E'))
 return ((void*)0);
      return VAR_1;

    case 'L':
      return FUNC_3 (VAR_0);

    case 'I':
    case 'J':

      return FUNC_6 (VAR_0);

    default:
      return FUNC_0 (VAR_0);
    }
}
