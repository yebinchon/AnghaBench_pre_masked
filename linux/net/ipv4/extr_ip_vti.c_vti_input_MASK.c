
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; } ;
struct net {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;
struct ip_tunnel_net {int dummy; } ;
struct ip_tunnel {TYPE_2__* dev; } ;
typedef int __be32 ;
struct TYPE_4__ {struct ip_tunnel* ip4; } ;
struct TYPE_6__ {TYPE_1__ tunnel; } ;
struct TYPE_5__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 struct net* FUNC_1 (TYPE_2__*) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_3 (struct ip_tunnel_net*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct ip_tunnel_net* FUNC_5 (struct net*,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *,int ,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int,int ,int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4, int VAR_5, __be32 VAR_6,
       int VAR_7, bool VAR_8)
{
 struct ip_tunnel *VAR_9;
 const struct iphdr *VAR_10 = FUNC_2(VAR_4);
 struct net *VAR_11 = FUNC_1(VAR_4->dev);
 struct ip_tunnel_net *VAR_12 = FUNC_5(VAR_11, VAR_3);

 VAR_9 = FUNC_3(VAR_12, VAR_4->dev->ifindex, VAR_1,
      VAR_10->saddr, VAR_10->daddr, 0);
 if (VAR_9) {
  if (!FUNC_6(((void*)0), VAR_2, VAR_4))
   goto drop;

  FUNC_0(VAR_4)->tunnel.ip4 = VAR_9;

  if (VAR_8)
   VAR_4->dev = VAR_9->dev;

  return FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);
 }

 return -VAR_0;
drop:
 FUNC_4(VAR_4);
 return 0;
}
