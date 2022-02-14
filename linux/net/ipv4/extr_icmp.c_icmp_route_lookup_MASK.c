
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {unsigned long _skb_refdst; } ;
struct TYPE_10__ {int dev; } ;
struct rtable {TYPE_4__ dst; } ;
struct net {int dummy; } ;
struct iphdr {int saddr; } ;
struct TYPE_7__ {int faddr; scalar_t__ srr; } ;
struct TYPE_8__ {TYPE_1__ opt; } ;
struct TYPE_9__ {TYPE_2__ opt; } ;
struct icmp_bxm {TYPE_3__ replyopts; } ;
struct flowi4 {int fl4_icmp_type; int fl4_icmp_code; int saddr; int daddr; int flowi4_oif; int flowi4_proto; int flowi4_tos; int flowi4_uid; int flowi4_mark; } ;
typedef int __be32 ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtable* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int FUNC_2 (struct rtable*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 struct rtable* FUNC_4 (struct net*,struct flowi4*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct flowi4*) ;
 scalar_t__ FUNC_7 (struct net*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ,int ,int ) ;
 struct rtable* FUNC_9 (struct net*,struct flowi4*) ;
 struct rtable* FUNC_10 (struct net*,struct flowi4*,struct sk_buff*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct flowi4*,struct flowi4*,int) ;
 int FUNC_13 (struct flowi4*,int ,int) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 TYPE_5__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int *) ;
 struct rtable* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct net*,int *) ;
 int FUNC_19 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_20 (struct net*,TYPE_4__*,int ,int *,int ) ;

__attribute__((used)) static struct rtable *FUNC_21(struct net *VAR_5,
     struct flowi4 *VAR_6,
     struct sk_buff *VAR_7,
     const struct iphdr *VAR_8,
     __be32 VAR_9, u8 VAR_10, u32 VAR_11,
     int VAR_12, int VAR_13,
     struct icmp_bxm *VAR_14)
{
 struct rtable *VAR_15, *VAR_16;
 struct flowi4 VAR_17;
 int VAR_18;

 FUNC_13(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->daddr = (VAR_14->replyopts.opt.opt.srr ?
        VAR_14->replyopts.opt.opt.faddr : VAR_8->saddr);
 VAR_6->saddr = VAR_9;
 VAR_6->flowi4_mark = VAR_11;
 VAR_6->flowi4_uid = FUNC_18(VAR_5, ((void*)0));
 VAR_6->flowi4_tos = FUNC_3(VAR_10);
 VAR_6->flowi4_proto = VAR_2;
 VAR_6->fl4_icmp_type = VAR_12;
 VAR_6->fl4_icmp_code = VAR_13;
 VAR_6->flowi4_oif = FUNC_11(FUNC_15(VAR_7)->dev);

 FUNC_14(VAR_7, FUNC_6(VAR_6));
 VAR_15 = FUNC_10(VAR_5, VAR_6, VAR_7);
 if (FUNC_1(VAR_15))
  return VAR_15;


 VAR_16 = VAR_15;

 VAR_15 = (struct rtable *) FUNC_20(VAR_5, &VAR_15->dst,
        FUNC_6(VAR_6), ((void*)0), 0);
 if (!FUNC_1(VAR_15)) {
  if (VAR_15 != VAR_16)
   return VAR_15;
 } else if (FUNC_2(VAR_15) == -VAR_1) {
  VAR_15 = ((void*)0);
 } else
  return VAR_15;

 VAR_18 = FUNC_19(VAR_7, FUNC_6(&VAR_17), VAR_0);
 if (VAR_18)
  goto relookup_failed;

 if (FUNC_7(VAR_5, FUNC_15(VAR_7)->dev,
         VAR_17.saddr) == VAR_3) {
  VAR_16 = FUNC_4(VAR_5, &VAR_17);
  if (FUNC_1(VAR_16))
   VAR_18 = FUNC_2(VAR_16);
 } else {
  struct flowi4 VAR_19 = {};
  unsigned long VAR_20;

  VAR_19 = VAR_17.saddr;
  VAR_16 = FUNC_9(VAR_5, &VAR_19);
  if (FUNC_1(VAR_16)) {
   VAR_18 = FUNC_2(VAR_16);
   goto relookup_failed;
  }

  VAR_20 = VAR_7->_skb_refdst;
  FUNC_16(VAR_7, ((void*)0));
  VAR_18 = FUNC_8(VAR_7, VAR_17.daddr, VAR_17.saddr,
         FUNC_3(VAR_10), VAR_16->dst.dev);

  FUNC_5(&VAR_16->dst);
  VAR_16 = FUNC_17(VAR_7);
  VAR_7->_skb_refdst = VAR_20;
 }

 if (VAR_18)
  goto relookup_failed;

 VAR_16 = (struct rtable *) FUNC_20(VAR_5, &VAR_16->dst,
         FUNC_6(&VAR_17), ((void*)0),
         VAR_4);
 if (!FUNC_1(VAR_16)) {
  FUNC_5(&VAR_15->dst);
  FUNC_12(VAR_6, &VAR_17, sizeof(*VAR_6));
  VAR_15 = VAR_16;
 } else if (FUNC_2(VAR_16) == -VAR_1) {
  if (VAR_15)
   FUNC_5(&VAR_15->dst);
  return VAR_16;
 } else {
  VAR_18 = FUNC_2(VAR_16);
  goto relookup_failed;
 }
 return VAR_15;

relookup_failed:
 if (VAR_15)
  return VAR_15;
 return FUNC_0(VAR_18);
}
