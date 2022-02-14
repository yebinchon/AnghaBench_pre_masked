
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* op; } ;
struct TYPE_6__ {TYPE_2__ s_operator; } ;
struct demangle_component {scalar_t__ type; TYPE_3__ u; } ;
struct d_print_info {int dummy; } ;
struct TYPE_4__ {int len; int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct d_print_info*,int ,int ) ;
 int FUNC_1 (struct d_print_info*,int,struct demangle_component*) ;

__attribute__((used)) static void
FUNC_2 (struct d_print_info *VAR_1, int VAR_2,
                 struct demangle_component *VAR_3)
{
  if (VAR_3->type == VAR_0)
    FUNC_0 (VAR_1, VAR_3->u.s_operator.op->name,
       VAR_3->u.s_operator.op->len);
  else
    FUNC_1 (VAR_1, VAR_2, VAR_3);
}
