
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_action_param {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ip_set_adt_opt {scalar_t__ dim; scalar_t__ family; int cmdflags; } ;
struct ip_set {scalar_t__ family; TYPE_2__* type; int lock; TYPE_1__* variant; int name; } ;
typedef int ip_set_id_t ;
struct TYPE_4__ {scalar_t__ dimension; int features; } ;
struct TYPE_3__ {int (* kadt ) (struct ip_set*,struct sk_buff const*,struct xt_action_param const*,int ,struct ip_set_adt_opt*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ip_set* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ip_set*,struct sk_buff const*,struct xt_action_param const*,int ,struct ip_set_adt_opt*) ;
 int FUNC_8 (struct ip_set*,struct sk_buff const*,struct xt_action_param const*,int ,struct ip_set_adt_opt*) ;
 int FUNC_9 (struct xt_action_param const*) ;

int
FUNC_10(ip_set_id_t VAR_7, const struct sk_buff *VAR_8,
     const struct xt_action_param *VAR_9, struct ip_set_adt_opt *VAR_10)
{
 struct ip_set *VAR_11 = FUNC_1(FUNC_9(VAR_9), VAR_7);
 int VAR_12 = 0;

 FUNC_0(!VAR_11);
 FUNC_2("set %s, index %u\n", VAR_11->name, VAR_7);

 if (VAR_10->dim < VAR_11->type->dimension ||
     !(VAR_10->family == VAR_11->family || VAR_11->family == VAR_6))
  return 0;

 FUNC_3();
 VAR_12 = VAR_11->variant->kadt(VAR_11, VAR_8, VAR_9, VAR_4, VAR_10);
 FUNC_4();

 if (VAR_12 == -VAR_0) {

  FUNC_2("element must be completed, ADD is triggered\n");
  FUNC_5(&VAR_11->lock);
  VAR_11->variant->kadt(VAR_11, VAR_8, VAR_9, VAR_2, VAR_10);
  FUNC_6(&VAR_11->lock);
  VAR_12 = 1;
 } else {

  if ((VAR_10->cmdflags & VAR_3) &&
      (VAR_11->type->features & VAR_5) &&
      (VAR_12 > 0 || VAR_12 == -VAR_1))
   VAR_12 = -VAR_12;
 }


 return (VAR_12 < 0 ? 0 : VAR_12);
}
