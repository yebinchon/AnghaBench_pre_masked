
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sw_flow_key {int mac_proto; } ;
struct sk_buff {int protocol; } ;
struct TYPE_2__ {int eth_dst; int eth_src; } ;
struct ovs_action_push_eth {TYPE_1__ addresses; } ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ethhdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sw_flow_key*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,struct ethhdr*,int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3, struct sw_flow_key *VAR_4,
      const struct ovs_action_push_eth *VAR_5)
{
 struct ethhdr *VAR_6;


 if (FUNC_3(VAR_3, VAR_1) < 0)
  return -VAR_0;

 FUNC_5(VAR_3, VAR_1);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3);

 VAR_6 = FUNC_0(VAR_3);
 FUNC_1(VAR_6->h_source, VAR_5->addresses.eth_src);
 FUNC_1(VAR_6->h_dest, VAR_5->addresses.eth_dst);
 VAR_6->h_proto = VAR_3->protocol;

 FUNC_4(VAR_3, VAR_6, VAR_1);


 VAR_4->mac_proto = VAR_2;
 FUNC_2(VAR_4);
 return 0;
}
