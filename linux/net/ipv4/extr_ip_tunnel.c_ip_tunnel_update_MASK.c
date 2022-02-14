
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {scalar_t__ type; int mtu; int broadcast; int dev_addr; } ;
struct TYPE_5__ {int frag_off; int tos; int ttl; int daddr; int saddr; } ;
struct ip_tunnel_parm {scalar_t__ link; TYPE_2__ iph; int o_key; int i_key; } ;
struct ip_tunnel_net {int dummy; } ;
struct TYPE_4__ {int frag_off; int tos; int ttl; int daddr; int saddr; } ;
struct TYPE_6__ {scalar_t__ link; TYPE_1__ iph; int o_key; int i_key; } ;
struct ip_tunnel {scalar_t__ fwmark; int dst_cache; TYPE_3__ parms; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip_tunnel_net*,struct ip_tunnel*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ip_tunnel_net*,struct ip_tunnel*) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct ip_tunnel_net *VAR_1,
        struct ip_tunnel *VAR_2,
        struct net_device *VAR_3,
        struct ip_tunnel_parm *VAR_4,
        bool VAR_5,
        __u32 VAR_6)
{
 FUNC_3(VAR_1, VAR_2);
 VAR_2->parms.iph.saddr = VAR_4->iph.saddr;
 VAR_2->parms.iph.daddr = VAR_4->iph.daddr;
 VAR_2->parms.i_key = VAR_4->i_key;
 VAR_2->parms.o_key = VAR_4->o_key;
 if (VAR_3->type != VAR_0) {
  FUNC_4(VAR_3->dev_addr, &VAR_4->iph.saddr, 4);
  FUNC_4(VAR_3->broadcast, &VAR_4->iph.daddr, 4);
 }
 FUNC_1(VAR_1, VAR_2);

 VAR_2->parms.iph.ttl = VAR_4->iph.ttl;
 VAR_2->parms.iph.tos = VAR_4->iph.tos;
 VAR_2->parms.iph.frag_off = VAR_4->iph.frag_off;

 if (VAR_2->parms.link != VAR_4->link || VAR_2->fwmark != VAR_6) {
  int VAR_7;

  VAR_2->parms.link = VAR_4->link;
  VAR_2->fwmark = VAR_6;
  VAR_7 = FUNC_2(VAR_3);
  if (VAR_5)
   VAR_3->mtu = VAR_7;
 }
 FUNC_0(&VAR_2->dst_cache);
 FUNC_5(VAR_3);
}
