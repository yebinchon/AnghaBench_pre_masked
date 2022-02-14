
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int ttl; int tos; int frag_off; int daddr; int saddr; } ;
struct ip_tunnel_parm {TYPE_1__ iph; int o_key; int i_key; int i_flags; int link; int o_flags; } ;
struct TYPE_4__ {int flags; int dport; int sport; int type; } ;
struct ip_tunnel {int erspan_ver; int dir; int ignore_df; scalar_t__ collect_md; TYPE_2__ encap; int fwmark; int hwid; int index; struct ip_tunnel_parm parms; } ;
typedef int __be16 ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ip_tunnel* FUNC_2 (struct net_device const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_24, const struct net_device *VAR_25)
{
 struct ip_tunnel *VAR_26 = FUNC_2(VAR_25);
 struct ip_tunnel_parm *VAR_27 = &VAR_26->parms;
 __be16 VAR_28 = VAR_27->o_flags;

 if (VAR_26->erspan_ver == 1 || VAR_26->erspan_ver == 2) {
  if (!VAR_26->collect_md)
   VAR_28 |= VAR_23;

  if (FUNC_9(VAR_24, VAR_9, VAR_26->erspan_ver))
   goto nla_put_failure;

  if (VAR_26->erspan_ver == 1) {
   if (FUNC_8(VAR_24, VAR_8, VAR_26->index))
    goto nla_put_failure;
  } else {
   if (FUNC_9(VAR_24, VAR_6, VAR_26->dir))
    goto nla_put_failure;
   if (FUNC_7(VAR_24, VAR_7, VAR_26->hwid))
    goto nla_put_failure;
  }
 }

 if (FUNC_8(VAR_24, VAR_14, VAR_27->link) ||
     FUNC_3(VAR_24, VAR_11,
    FUNC_0(VAR_27->i_flags)) ||
     FUNC_3(VAR_24, VAR_16,
    FUNC_0(VAR_28)) ||
     FUNC_4(VAR_24, VAR_13, VAR_27->i_key) ||
     FUNC_4(VAR_24, VAR_17, VAR_27->o_key) ||
     FUNC_6(VAR_24, VAR_15, VAR_27->iph.saddr) ||
     FUNC_6(VAR_24, VAR_19, VAR_27->iph.daddr) ||
     FUNC_9(VAR_24, VAR_21, VAR_27->iph.ttl) ||
     FUNC_9(VAR_24, VAR_20, VAR_27->iph.tos) ||
     FUNC_9(VAR_24, VAR_18,
         !!(VAR_27->iph.frag_off & FUNC_1(VAR_22))) ||
     FUNC_8(VAR_24, VAR_10, VAR_26->fwmark))
  goto nla_put_failure;

 if (FUNC_7(VAR_24, VAR_5,
   VAR_26->encap.type) ||
     FUNC_3(VAR_24, VAR_4,
    VAR_26->encap.sport) ||
     FUNC_3(VAR_24, VAR_2,
    VAR_26->encap.dport) ||
     FUNC_7(VAR_24, VAR_3,
   VAR_26->encap.flags))
  goto nla_put_failure;

 if (FUNC_9(VAR_24, VAR_12, VAR_26->ignore_df))
  goto nla_put_failure;

 if (VAR_26->collect_md) {
  if (FUNC_5(VAR_24, VAR_1))
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -VAR_0;
}
