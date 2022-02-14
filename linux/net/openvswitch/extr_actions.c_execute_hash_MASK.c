
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sw_flow_key {int ovs_flow_hash; } ;
struct sk_buff {int dummy; } ;
struct ovs_action_hash {int hash_basis; } ;
struct nlattr {int dummy; } ;


 int FUNC_0 (int,int ) ;
 struct ovs_action_hash* FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, struct sw_flow_key *VAR_1,
    const struct nlattr *VAR_2)
{
 struct ovs_action_hash *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = 0;


 VAR_4 = FUNC_2(VAR_0);
 VAR_4 = FUNC_0(VAR_4, VAR_3->hash_basis);
 if (!VAR_4)
  VAR_4 = 0x1;

 VAR_1->ovs_flow_hash = VAR_4;
}
