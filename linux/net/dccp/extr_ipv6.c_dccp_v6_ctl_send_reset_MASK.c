
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {struct sock* v6_ctl_sk; } ;
struct net {TYPE_1__ dccp; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct flowi6 {int fl6_sport; int fl6_dport; int flowi6_oif; int flowi6_proto; int saddr; int daddr; } ;
struct dst_entry {int dummy; } ;
typedef int fl6 ;
struct TYPE_6__ {scalar_t__ dccph_type; int dccph_sport; int dccph_dport; int dccph_checksum; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dst_entry*) ;
 struct sk_buff* FUNC_2 (struct sock*,struct sk_buff*) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int *,int *) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (struct flowi6*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct dst_entry* FUNC_8 (struct sock*,struct flowi6*,int *) ;
 int FUNC_9 (struct sock*,struct sk_buff*,struct flowi6*,int ,int *,int ,int ) ;
 struct ipv6hdr* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct flowi6*,int ,int) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 TYPE_2__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,struct dst_entry*) ;

__attribute__((used)) static void FUNC_17(const struct sock *VAR_4, struct sk_buff *VAR_5)
{
 const struct ipv6hdr *VAR_6;
 struct sk_buff *VAR_7;
 struct flowi6 VAR_8;
 struct net *VAR_9 = FUNC_5(FUNC_15(VAR_5)->dev);
 struct sock *VAR_10 = VAR_9->dccp.v6_ctl_sk;
 struct dst_entry *VAR_11;

 if (FUNC_3(VAR_5)->dccph_type == VAR_2)
  return;

 if (!FUNC_11(VAR_5))
  return;

 VAR_7 = FUNC_2(VAR_10, VAR_5);
 if (VAR_7 == ((void*)0))
  return;

 VAR_6 = FUNC_10(VAR_5);
 FUNC_3(VAR_7)->dccph_checksum = FUNC_4(VAR_7, &VAR_6->saddr,
           &VAR_6->daddr);

 FUNC_13(&VAR_8, 0, sizeof(VAR_8));
 VAR_8 = VAR_6->saddr;
 VAR_8 = VAR_6->daddr;

 VAR_8 = VAR_3;
 VAR_8 = FUNC_7(VAR_5);
 VAR_8 = FUNC_3(VAR_7)->dccph_dport;
 VAR_8 = FUNC_3(VAR_7)->dccph_sport;
 FUNC_14(VAR_5, FUNC_6(&VAR_8));


 VAR_11 = FUNC_8(VAR_10, &VAR_8, ((void*)0));
 if (!FUNC_1(VAR_11)) {
  FUNC_16(VAR_7, VAR_11);
  FUNC_9(VAR_10, VAR_7, &VAR_8, 0, ((void*)0), 0, 0);
  FUNC_0(VAR_1);
  FUNC_0(VAR_0);
  return;
 }

 FUNC_12(VAR_7);
}
