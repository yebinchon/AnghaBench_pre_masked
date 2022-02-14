
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct flow_dissector_key_ct {int ct_labels; int ct_mark; int ct_zone; int ct_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int *,int ,int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_13,
     struct flow_dissector_key_ct *VAR_14,
     struct flow_dissector_key_ct *VAR_15)
{
 if (FUNC_0(VAR_0) &&
     FUNC_1(VAR_13, &VAR_14->ct_state, VAR_9,
       &VAR_15->ct_state, VAR_10,
       sizeof(VAR_14->ct_state)))
  goto nla_put_failure;

 if (FUNC_0(VAR_3) &&
     FUNC_1(VAR_13, &VAR_14->ct_zone, VAR_11,
       &VAR_15->ct_zone, VAR_12,
       sizeof(VAR_14->ct_zone)))
  goto nla_put_failure;

 if (FUNC_0(VAR_2) &&
     FUNC_1(VAR_13, &VAR_14->ct_mark, VAR_7,
       &VAR_15->ct_mark, VAR_8,
       sizeof(VAR_14->ct_mark)))
  goto nla_put_failure;

 if (FUNC_0(VAR_1) &&
     FUNC_1(VAR_13, &VAR_14->ct_labels, VAR_5,
       &VAR_15->ct_labels, VAR_6,
       sizeof(VAR_14->ct_labels)))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -VAR_4;
}
