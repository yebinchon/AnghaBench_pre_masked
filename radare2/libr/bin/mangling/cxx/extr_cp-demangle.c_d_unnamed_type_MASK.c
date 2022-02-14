
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; } ;
struct TYPE_4__ {TYPE_1__ s_number; } ;
struct demangle_component {TYPE_2__ u; int type; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct d_info*,struct demangle_component*) ;
 int FUNC_1 (struct d_info*,char) ;
 int FUNC_2 (struct d_info*) ;
 struct demangle_component* FUNC_3 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_4 (struct d_info *VAR_1)
{
  struct demangle_component *VAR_2;
  int VAR_3;

  if (! FUNC_1 (VAR_1, 'U'))
    return ((void*)0);
  if (! FUNC_1 (VAR_1, 't'))
    return ((void*)0);

  VAR_3 = FUNC_2 (VAR_1);
  if (VAR_3 < 0)
    return ((void*)0);

  VAR_2 = FUNC_3 (VAR_1);
  if (VAR_2)
    {
      VAR_2->type = VAR_0;
      VAR_2->u.s_number.number = VAR_3;
    }

  if (! FUNC_0 (VAR_1, VAR_2))
    return ((void*)0);

  return VAR_2;
}
