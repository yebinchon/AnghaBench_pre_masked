
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ovs_tunnel_info {scalar_t__ tun_dst; } ;
struct nlattr {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dst_entry*) ;
 struct ovs_tunnel_info* FUNC_1 (struct nlattr const*) ;
 scalar_t__ FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct dst_entry*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2,
         struct sw_flow_key *VAR_3,
         const struct nlattr *VAR_4)
{

 if (FUNC_2(VAR_4) == VAR_1) {
  struct ovs_tunnel_info *VAR_5 = FUNC_1(VAR_4);

  FUNC_3(VAR_2);
  FUNC_0((struct dst_entry *)VAR_5->tun_dst);
  FUNC_4(VAR_2, (struct dst_entry *)VAR_5->tun_dst);
  return 0;
 }

 return -VAR_0;
}
