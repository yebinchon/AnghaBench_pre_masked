
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; struct demangle_component* sub; } ;
struct TYPE_4__ {TYPE_1__ s_unary_num; } ;
struct demangle_component {TYPE_2__ u; int type; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct d_info*,struct demangle_component*) ;
 int FUNC_1 (struct d_info*,char) ;
 int FUNC_2 (struct d_info*) ;
 struct demangle_component* FUNC_3 (struct d_info*) ;
 struct demangle_component* FUNC_4 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_5 (struct d_info *VAR_1)
{
  struct demangle_component *VAR_2;
  struct demangle_component *VAR_3;
  int VAR_4;

  if (! FUNC_1 (VAR_1, 'U'))
    return ((void*)0);
  if (! FUNC_1 (VAR_1, 'l'))
    return ((void*)0);

  VAR_2 = FUNC_4 (VAR_1);
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  if (! FUNC_1 (VAR_1, 'E'))
    return ((void*)0);

  VAR_4 = FUNC_2 (VAR_1);
  if (VAR_4 < 0)
    return ((void*)0);

  VAR_3 = FUNC_3 (VAR_1);
  if (VAR_3)
    {
      VAR_3->type = VAR_0;
      VAR_3->u.s_unary_num.sub = VAR_2;
      VAR_3->u.s_unary_num.num = VAR_4;
    }

  if (! FUNC_0 (VAR_1, VAR_3))
    return ((void*)0);

  return VAR_3;
}
