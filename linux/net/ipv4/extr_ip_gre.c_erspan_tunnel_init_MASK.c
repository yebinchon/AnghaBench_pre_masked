
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int priv_flags; int hw_features; int features; } ;
struct TYPE_3__ {int protocol; } ;
struct TYPE_4__ {TYPE_1__ iph; } ;
struct ip_tunnel {int tun_hlen; int erspan_ver; scalar_t__ encap_hlen; scalar_t__ hlen; TYPE_2__ parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 struct ip_tunnel* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct ip_tunnel *VAR_4 = FUNC_2(VAR_3);

 VAR_4->tun_hlen = 8;
 VAR_4->parms.iph.protocol = VAR_2;
 VAR_4->hlen = VAR_4->tun_hlen + VAR_4->encap_hlen +
         FUNC_0(VAR_4->erspan_ver);

 VAR_3->features |= VAR_0;
 VAR_3->hw_features |= VAR_0;
 VAR_3->priv_flags |= VAR_1;
 FUNC_3(VAR_3);

 return FUNC_1(VAR_3);
}
