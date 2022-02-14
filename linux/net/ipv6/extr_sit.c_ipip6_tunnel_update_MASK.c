
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sit_net {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_7__ {int frag_off; int tos; int ttl; int daddr; int saddr; } ;
struct ip_tunnel_parm {scalar_t__ link; TYPE_2__ iph; } ;
struct TYPE_6__ {int frag_off; int tos; int ttl; int daddr; int saddr; } ;
struct TYPE_8__ {scalar_t__ link; TYPE_1__ iph; } ;
struct ip_tunnel {scalar_t__ fwmark; TYPE_4__* dev; int dst_cache; TYPE_3__ parms; struct net* net; } ;
typedef scalar_t__ __u32 ;
struct TYPE_9__ {int broadcast; int dev_addr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct sit_net*,struct ip_tunnel*) ;
 int FUNC_3 (struct sit_net*,struct ip_tunnel*) ;
 int FUNC_4 (int ,int *,int) ;
 struct sit_net* FUNC_5 (struct net*,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct ip_tunnel *VAR_1, struct ip_tunnel_parm *VAR_2,
    __u32 VAR_3)
{
 struct net *VAR_4 = VAR_1->net;
 struct sit_net *VAR_5 = FUNC_5(VAR_4, VAR_0);

 FUNC_3(VAR_5, VAR_1);
 FUNC_7();
 VAR_1->parms.iph.saddr = VAR_2->iph.saddr;
 VAR_1->parms.iph.daddr = VAR_2->iph.daddr;
 FUNC_4(VAR_1->dev->dev_addr, &VAR_2->iph.saddr, 4);
 FUNC_4(VAR_1->dev->broadcast, &VAR_2->iph.daddr, 4);
 FUNC_2(VAR_5, VAR_1);
 VAR_1->parms.iph.ttl = VAR_2->iph.ttl;
 VAR_1->parms.iph.tos = VAR_2->iph.tos;
 VAR_1->parms.iph.frag_off = VAR_2->iph.frag_off;
 if (VAR_1->parms.link != VAR_2->link || VAR_1->fwmark != VAR_3) {
  VAR_1->parms.link = VAR_2->link;
  VAR_1->fwmark = VAR_3;
  FUNC_1(VAR_1->dev);
 }
 FUNC_0(&VAR_1->dst_cache);
 FUNC_6(VAR_1->dev);
}
