
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ frag; } ;
struct sw_flow_key {TYPE_2__ ip; } ;
struct sk_buff {int data; } ;
struct TYPE_3__ {int id; } ;
struct ovs_conntrack_info {scalar_t__ commit; TYPE_1__ zone; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net*,struct sw_flow_key*,int ,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net*,struct sw_flow_key*,struct ovs_conntrack_info const*,struct sk_buff*) ;
 int FUNC_3 (struct net*,struct sw_flow_key*,struct ovs_conntrack_info const*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

int FUNC_9(struct net *VAR_1, struct sk_buff *VAR_2,
     struct sw_flow_key *VAR_3,
     const struct ovs_conntrack_info *VAR_4)
{
 int VAR_5;
 int VAR_6;


 VAR_5 = FUNC_5(VAR_2);
 FUNC_7(VAR_2, VAR_5);

 VAR_6 = FUNC_4(VAR_2);
 if (VAR_6)
  return VAR_6;

 if (VAR_3->ip.frag != VAR_0) {
  VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_4->zone.id, VAR_2);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_4->commit)
  VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_4, VAR_2);
 else
  VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_4, VAR_2);

 FUNC_8(VAR_2, VAR_5);
 FUNC_6(VAR_2, VAR_2->data, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_2);
 return VAR_6;
}
