
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int features; int hw_features; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {int protocol; } ;
struct TYPE_5__ {int o_flags; TYPE_1__ iph; } ;
struct ip_tunnel {TYPE_3__ encap; TYPE_2__ parms; scalar_t__ encap_hlen; scalar_t__ tun_hlen; scalar_t__ hlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 struct ip_tunnel* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_7)
{
 struct ip_tunnel *VAR_8;

 VAR_8 = FUNC_1(VAR_7);
 VAR_8->tun_hlen = FUNC_0(VAR_8->parms.o_flags);
 VAR_8->parms.iph.protocol = VAR_1;

 VAR_8->hlen = VAR_8->tun_hlen + VAR_8->encap_hlen;

 VAR_7->features |= VAR_0;
 VAR_7->hw_features |= VAR_0;

 if (!(VAR_8->parms.o_flags & VAR_6)) {




  if (!(VAR_8->parms.o_flags & VAR_4) ||
      (VAR_8->encap.type == VAR_5)) {
   VAR_7->features |= VAR_2;
   VAR_7->hw_features |= VAR_2;
  }




  VAR_7->features |= VAR_3;
 }
}
