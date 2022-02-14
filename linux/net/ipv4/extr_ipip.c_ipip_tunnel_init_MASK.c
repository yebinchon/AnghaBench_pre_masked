
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int broadcast; int dev_addr; } ;
struct TYPE_3__ {int daddr; int saddr; } ;
struct TYPE_4__ {TYPE_1__ iph; } ;
struct ip_tunnel {scalar_t__ encap_hlen; scalar_t__ tun_hlen; scalar_t__ hlen; TYPE_2__ parms; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *,int) ;
 struct ip_tunnel* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct ip_tunnel *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0->dev_addr, &VAR_1->parms.iph.saddr, 4);
 FUNC_1(VAR_0->broadcast, &VAR_1->parms.iph.daddr, 4);

 VAR_1->tun_hlen = 0;
 VAR_1->hlen = VAR_1->tun_hlen + VAR_1->encap_hlen;
 return FUNC_0(VAR_0);
}
