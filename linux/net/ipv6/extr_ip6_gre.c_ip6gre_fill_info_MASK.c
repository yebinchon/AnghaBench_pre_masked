
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; int dport; int sport; int type; } ;
struct __ip6_tnl_parm {int erspan_ver; int dir; int hop_limit; int encap_limit; scalar_t__ collect_md; int fwmark; int flags; int flowinfo; int raddr; int laddr; int o_key; int i_key; int i_flags; int link; int hwid; int index; int o_flags; } ;
struct ip6_tnl {TYPE_1__ encap; struct __ip6_tnl_parm parms; } ;
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
 int FUNC_0 (int ) ;
 struct ip6_tnl* FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_23, const struct net_device *VAR_24)
{
 struct ip6_tnl *VAR_25 = FUNC_1(VAR_24);
 struct __ip6_tnl_parm *VAR_26 = &VAR_25->parms;
 __be16 VAR_27 = VAR_26->o_flags;

 if (VAR_26->erspan_ver == 1 || VAR_26->erspan_ver == 2) {
  if (!VAR_26->collect_md)
   VAR_27 |= VAR_22;

  if (FUNC_8(VAR_23, VAR_10, VAR_26->erspan_ver))
   goto nla_put_failure;

  if (VAR_26->erspan_ver == 1) {
   if (FUNC_7(VAR_23, VAR_9, VAR_26->index))
    goto nla_put_failure;
  } else {
   if (FUNC_8(VAR_23, VAR_7, VAR_26->dir))
    goto nla_put_failure;
   if (FUNC_6(VAR_23, VAR_8, VAR_26->hwid))
    goto nla_put_failure;
  }
 }

 if (FUNC_7(VAR_23, VAR_16, VAR_26->link) ||
     FUNC_2(VAR_23, VAR_14,
    FUNC_0(VAR_26->i_flags)) ||
     FUNC_2(VAR_23, VAR_18,
    FUNC_0(VAR_27)) ||
     FUNC_3(VAR_23, VAR_15, VAR_26->i_key) ||
     FUNC_3(VAR_23, VAR_19, VAR_26->o_key) ||
     FUNC_5(VAR_23, VAR_17, &VAR_26->laddr) ||
     FUNC_5(VAR_23, VAR_20, &VAR_26->raddr) ||
     FUNC_8(VAR_23, VAR_21, VAR_26->hop_limit) ||
     FUNC_8(VAR_23, VAR_4, VAR_26->encap_limit) ||
     FUNC_3(VAR_23, VAR_12, VAR_26->flowinfo) ||
     FUNC_7(VAR_23, VAR_11, VAR_26->flags) ||
     FUNC_7(VAR_23, VAR_13, VAR_26->fwmark))
  goto nla_put_failure;

 if (FUNC_6(VAR_23, VAR_6,
   VAR_25->encap.type) ||
     FUNC_2(VAR_23, VAR_5,
    VAR_25->encap.sport) ||
     FUNC_2(VAR_23, VAR_2,
    VAR_25->encap.dport) ||
     FUNC_6(VAR_23, VAR_3,
   VAR_25->encap.flags))
  goto nla_put_failure;

 if (VAR_26->collect_md) {
  if (FUNC_4(VAR_23, VAR_1))
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -VAR_0;
}
