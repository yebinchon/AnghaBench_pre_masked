
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ pkt_type; int dev; int priority; int sk; } ;
struct TYPE_5__ {int dev; scalar_t__ header_len; } ;
struct rtable {TYPE_2__ dst; scalar_t__ rt_uses_gateway; } ;
struct TYPE_4__ {scalar_t__ sysctl_ip_fwd_update_priority; } ;
struct net {TYPE_1__ ipv4; } ;
struct iphdr {int ttl; int tos; } ;
struct ip_options {int srr; scalar_t__ is_strictroute; scalar_t__ router_alert; } ;
struct TYPE_6__ {int flags; struct ip_options opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct net*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,struct net*,int *,struct sk_buff*,int ,int ,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct net*,int ) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct iphdr*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ) ;
 int VAR_15 ;
 struct iphdr* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*,scalar_t__) ;
 int FUNC_17 (struct sk_buff*) ;
 struct rtable* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int *,int ,struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*) ;

int FUNC_24(struct sk_buff *VAR_16)
{
 u32 VAR_17;
 struct iphdr *VAR_18;
 struct rtable *VAR_19;
 struct ip_options *VAR_20 = &(FUNC_0(VAR_16)->opt);
 struct net *VAR_21;


 if (VAR_16->pkt_type != VAR_13)
  goto drop;

 if (FUNC_21(VAR_16->sk))
  goto drop;

 if (FUNC_20(VAR_16))
  goto drop;

 if (!FUNC_22(((void*)0), VAR_14, VAR_16))
  goto drop;

 if (FUNC_0(VAR_16)->opt.router_alert && FUNC_8(VAR_16))
  return VAR_10;

 FUNC_17(VAR_16);
 VAR_21 = FUNC_5(VAR_16->dev);






 if (FUNC_12(VAR_16)->ttl <= 1)
  goto too_many_hops;

 if (!FUNC_23(VAR_16))
  goto drop;

 VAR_19 = FUNC_18(VAR_16);

 if (VAR_20->is_strictroute && VAR_19->rt_uses_gateway)
  goto sr_failed;

 FUNC_0(VAR_16)->flags |= VAR_6;
 VAR_17 = FUNC_10(&VAR_19->dst, 1);
 if (FUNC_11(VAR_16, VAR_17)) {
  FUNC_1(VAR_21, VAR_7);
  FUNC_7(VAR_16, VAR_0, VAR_2,
     FUNC_6(VAR_17));
  goto drop;
 }


 if (FUNC_16(VAR_16, FUNC_2(VAR_19->dst.dev)+VAR_19->dst.header_len))
  goto drop;
 VAR_18 = FUNC_12(VAR_16);


 FUNC_9(VAR_18);





 if (FUNC_0(VAR_16)->flags & VAR_5 && !VAR_20->srr &&
     !FUNC_19(VAR_16))
  FUNC_13(VAR_16);

 if (VAR_21->ipv4.sysctl_ip_fwd_update_priority)
  VAR_16->priority = FUNC_15(VAR_18->tos);

 return FUNC_3(VAR_11, VAR_12,
         VAR_21, ((void*)0), VAR_16, VAR_16->dev, VAR_19->dst.dev,
         VAR_15);

sr_failed:



  FUNC_7(VAR_16, VAR_0, VAR_3, 0);
  goto drop;

too_many_hops:

 FUNC_4(VAR_21, VAR_8);
 FUNC_7(VAR_16, VAR_4, VAR_1, 0);
drop:
 FUNC_14(VAR_16);
 return VAR_9;
}
