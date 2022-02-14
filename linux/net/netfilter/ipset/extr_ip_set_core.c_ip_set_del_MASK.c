
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_action_param {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ip_set_adt_opt {scalar_t__ dim; scalar_t__ family; } ;
struct ip_set {scalar_t__ family; int lock; TYPE_2__* variant; TYPE_1__* type; int name; } ;
typedef int ip_set_id_t ;
struct TYPE_4__ {int (* kadt ) (struct ip_set*,struct sk_buff const*,struct xt_action_param const*,int ,struct ip_set_adt_opt*) ;} ;
struct TYPE_3__ {scalar_t__ dimension; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ip_set* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ip_set*,struct sk_buff const*,struct xt_action_param const*,int ,struct ip_set_adt_opt*) ;
 int FUNC_6 (struct xt_action_param const*) ;

int
FUNC_7(ip_set_id_t VAR_3, const struct sk_buff *VAR_4,
    const struct xt_action_param *VAR_5, struct ip_set_adt_opt *VAR_6)
{
 struct ip_set *VAR_7 = FUNC_1(FUNC_6(VAR_5), VAR_3);
 int VAR_8 = 0;

 FUNC_0(!VAR_7);
 FUNC_2("set %s, index %u\n", VAR_7->name, VAR_3);

 if (VAR_6->dim < VAR_7->type->dimension ||
     !(VAR_6->family == VAR_7->family || VAR_7->family == VAR_2))
  return -VAR_1;

 FUNC_3(&VAR_7->lock);
 VAR_8 = VAR_7->variant->kadt(VAR_7, VAR_4, VAR_5, VAR_0, VAR_6);
 FUNC_4(&VAR_7->lock);

 return VAR_8;
}
