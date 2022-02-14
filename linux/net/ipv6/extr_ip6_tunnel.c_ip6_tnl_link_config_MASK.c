
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* dev; } ;
struct rt6_info {TYPE_4__ dst; } ;
struct net_device {scalar_t__ mtu; scalar_t__ hard_header_len; int flags; int broadcast; int dev_addr; } ;
struct ipv6hdr {int dummy; } ;
struct __ip6_tnl_parm {int flags; int flowinfo; int link; int laddr; int raddr; } ;
struct flowi6 {int flowlabel; int flowi6_oif; int daddr; int saddr; } ;
struct TYPE_5__ {struct flowi6 ip6; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct ip6_tnl {int tun_hlen; int hlen; int encap_hlen; struct __ip6_tnl_parm parms; int net; TYPE_2__ fl; struct net_device* dev; } ;
struct in6_addr {int dummy; } ;
struct TYPE_7__ {scalar_t__ mtu; scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rt6_info*) ;
 int FUNC_1 (struct ip6_tnl*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int) ;
 struct rt6_info* FUNC_4 (int ,int *,int *,int ,int *,int) ;

__attribute__((used)) static void FUNC_5(struct ip6_tnl *VAR_12)
{
 struct net_device *VAR_13 = VAR_12->dev;
 struct __ip6_tnl_parm *VAR_14 = &VAR_12->parms;
 struct flowi6 *VAR_15 = &VAR_12->fl.u.ip6;
 int VAR_16;

 FUNC_3(VAR_13->dev_addr, &VAR_14->laddr, sizeof(struct in6_addr));
 FUNC_3(VAR_13->broadcast, &VAR_14->raddr, sizeof(struct in6_addr));


 VAR_15->saddr = VAR_14->laddr;
 VAR_15->daddr = VAR_14->raddr;
 VAR_15->flowi6_oif = VAR_14->link;
 VAR_15->flowlabel = 0;

 if (!(VAR_14->flags&VAR_6))
  VAR_15->flowlabel |= VAR_11 & VAR_14->flowinfo;
 if (!(VAR_14->flags&VAR_5))
  VAR_15->flowlabel |= VAR_9 & VAR_14->flowinfo;

 VAR_14->flags &= ~(VAR_3|VAR_2|VAR_1);
 VAR_14->flags |= FUNC_1(VAR_12, &VAR_14->laddr, &VAR_14->raddr);

 if (VAR_14->flags&VAR_3 && VAR_14->flags&VAR_2)
  VAR_13->flags |= VAR_0;
 else
  VAR_13->flags &= ~VAR_0;

 VAR_12->tun_hlen = 0;
 VAR_12->hlen = VAR_12->encap_hlen + VAR_12->tun_hlen;
 VAR_16 = VAR_12->hlen + sizeof(struct ipv6hdr);

 if (VAR_14->flags & VAR_3) {
  int VAR_17 = (FUNC_2(&VAR_14->raddr) &
         (VAR_8|VAR_7));

  struct rt6_info *VAR_18 = FUNC_4(VAR_12->net,
       &VAR_14->raddr, &VAR_14->laddr,
       VAR_14->link, ((void*)0), VAR_17);

  if (!VAR_18)
   return;

  if (VAR_18->dst.dev) {
   VAR_13->hard_header_len = VAR_18->dst.dev->hard_header_len +
    VAR_16;

   VAR_13->mtu = VAR_18->dst.dev->mtu - VAR_16;
   if (!(VAR_12->parms.flags & VAR_4))
    VAR_13->mtu -= 8;

   if (VAR_13->mtu < VAR_10)
    VAR_13->mtu = VAR_10;
  }
  FUNC_0(VAR_18);
 }
}
