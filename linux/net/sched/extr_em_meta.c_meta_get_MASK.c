
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_pkt_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct meta_value {int len; int val; } ;
struct meta_obj {int len; int value; } ;
struct TYPE_4__ {int (* get ) (struct sk_buff*,struct tcf_pkt_info*,struct meta_value*,struct meta_obj*,int*) ;} ;
struct TYPE_3__ {int (* apply_extras ) (struct meta_value*,struct meta_obj*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct meta_value*) ;
 TYPE_2__* FUNC_1 (struct meta_value*) ;
 TYPE_1__* FUNC_2 (struct meta_value*) ;
 int FUNC_3 (struct sk_buff*,struct tcf_pkt_info*,struct meta_value*,struct meta_obj*,int*) ;
 int FUNC_4 (struct meta_value*,struct meta_obj*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, struct tcf_pkt_info *VAR_2,
      struct meta_value *VAR_3, struct meta_obj *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_0(VAR_3) == VAR_0) {
  VAR_4->value = VAR_3->val;
  VAR_4->len = VAR_3->len;
  return 0;
 }

 FUNC_1(VAR_3)->get(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5);
 if (VAR_5 < 0)
  return VAR_5;

 if (FUNC_2(VAR_3)->apply_extras)
  FUNC_2(VAR_3)->apply_extras(VAR_3, VAR_4);

 return 0;
}
