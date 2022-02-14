
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int ttl; int tos; int protocol; int frag_off; int daddr; int saddr; } ;
struct ip_tunnel_parm {TYPE_1__ iph; int link; } ;
struct TYPE_4__ {int flags; int dport; int sport; int type; } ;
struct ip_tunnel {scalar_t__ collect_md; TYPE_2__ encap; int fwmark; struct ip_tunnel_parm parms; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 struct ip_tunnel* FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_15, const struct net_device *VAR_16)
{
 struct ip_tunnel *VAR_17 = FUNC_1(VAR_16);
 struct ip_tunnel_parm *VAR_18 = &VAR_17->parms;

 if (FUNC_6(VAR_15, VAR_7, VAR_18->link) ||
     FUNC_4(VAR_15, VAR_8, VAR_18->iph.saddr) ||
     FUNC_4(VAR_15, VAR_11, VAR_18->iph.daddr) ||
     FUNC_7(VAR_15, VAR_13, VAR_18->iph.ttl) ||
     FUNC_7(VAR_15, VAR_12, VAR_18->iph.tos) ||
     FUNC_7(VAR_15, VAR_10, VAR_18->iph.protocol) ||
     FUNC_7(VAR_15, VAR_9,
         !!(VAR_18->iph.frag_off & FUNC_0(VAR_14))) ||
     FUNC_6(VAR_15, VAR_6, VAR_17->fwmark))
  goto nla_put_failure;

 if (FUNC_5(VAR_15, VAR_5,
   VAR_17->encap.type) ||
     FUNC_2(VAR_15, VAR_4,
    VAR_17->encap.sport) ||
     FUNC_2(VAR_15, VAR_2,
    VAR_17->encap.dport) ||
     FUNC_5(VAR_15, VAR_3,
   VAR_17->encap.flags))
  goto nla_put_failure;

 if (VAR_17->collect_md)
  if (FUNC_3(VAR_15, VAR_1))
   goto nla_put_failure;
 return 0;

nla_put_failure:
 return -VAR_0;
}
