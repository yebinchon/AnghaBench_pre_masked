
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_protocol; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {int dummy; } ;
struct rtable {struct dst_entry dst; } ;
struct net {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;
struct flowi4 {int fl4_dport; int fl4_sport; int flowi4_proto; int flowi4_tos; int saddr; int daddr; int flowi4_oif; } ;
struct TYPE_2__ {int dccph_sport; int dccph_dport; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int FUNC_2 (struct sock*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct flowi4*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 struct rtable* FUNC_7 (struct net*,struct flowi4*,struct sock*) ;
 int FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static struct dst_entry* FUNC_9(struct net *VAR_1, struct sock *VAR_2,
        struct sk_buff *VAR_3)
{
 struct rtable *VAR_4;
 const struct iphdr *VAR_5 = FUNC_6(VAR_3);
 struct flowi4 VAR_6 = {
  .flowi4_oif = FUNC_5(VAR_3),
  .daddr = VAR_5->saddr,
  .saddr = VAR_5->daddr,
  .flowi4_tos = FUNC_2(VAR_2),
  .flowi4_proto = VAR_2->sk_protocol,
  .fl4_sport = FUNC_3(VAR_3)->dccph_dport,
  .fl4_dport = FUNC_3(VAR_3)->dccph_sport,
 };

 FUNC_8(VAR_3, FUNC_4(&VAR_6));
 VAR_4 = FUNC_7(VAR_1, &VAR_6, VAR_2);
 if (FUNC_1(VAR_4)) {
  FUNC_0(VAR_1, VAR_0);
  return ((void*)0);
 }

 return &VAR_4->dst;
}
