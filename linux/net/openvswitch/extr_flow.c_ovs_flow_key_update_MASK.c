
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int mac_proto; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct sw_flow_key*) ;

int FUNC_1(struct sk_buff *VAR_1, struct sw_flow_key *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  VAR_2->mac_proto &= ~VAR_0;

 return VAR_3;
}
