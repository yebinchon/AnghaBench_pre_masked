
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int mark; } ;
struct rtable {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int src; int dst; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;
struct ip_tunnel_key {TYPE_2__ u; int tos; int tun_id; } ;
struct ip_tunnel_info {struct ip_tunnel_key key; } ;
struct flowi4 {int saddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct rtable*) ;
 int FUNC_2 (struct net_device*) ;
 struct rtable* FUNC_3 (int ,struct flowi4*) ;
 int FUNC_4 (struct rtable*) ;
 scalar_t__ FUNC_5 (struct ip_tunnel_info*) ;
 int FUNC_6 (struct flowi4*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct ip_tunnel_info* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3, struct sk_buff *VAR_4)
{
 struct ip_tunnel_info *VAR_5 = FUNC_8(VAR_4);
 const struct ip_tunnel_key *VAR_6;
 struct rtable *VAR_7;
 struct flowi4 VAR_8;

 if (FUNC_5(VAR_5) != VAR_0)
  return -VAR_1;

 VAR_6 = &VAR_5->key;
 FUNC_6(&VAR_8, VAR_2, VAR_6->u.ipv4.dst, VAR_6->u.ipv4.src,
       FUNC_9(VAR_6->tun_id), VAR_6->tos, 0,
       VAR_4->mark, FUNC_7(VAR_4));
 VAR_7 = FUNC_3(FUNC_2(VAR_3), &VAR_8);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_4(VAR_7);
 VAR_5->key.u.ipv4.src = VAR_8;
 return 0;
}
