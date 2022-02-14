
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rd_msg {int dest; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct flowi6 {int flowi6_oif; int flowi6_uid; int saddr; int daddr; int flowi6_iif; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dst_entry*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 struct dst_entry* FUNC_2 (struct net*,struct flowi6*,struct sk_buff*,int *) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct dst_entry*,int *,struct sk_buff*) ;
 int FUNC_5 (struct net*,int *) ;

void FUNC_6(struct sk_buff *VAR_1, struct net *VAR_2, int VAR_3)
{
 const struct ipv6hdr *VAR_4 = FUNC_3(VAR_1);
 const struct rd_msg *VAR_5 = (struct rd_msg *)FUNC_1(VAR_1);
 struct dst_entry *VAR_6;
 struct flowi6 VAR_7 = {
  .flowi6_iif = VAR_0,
  .flowi6_oif = VAR_3,
  .daddr = VAR_5->dest,
  .saddr = VAR_4->daddr,
  .flowi6_uid = FUNC_5(VAR_2, ((void*)0)),
 };

 VAR_6 = FUNC_2(VAR_2, &VAR_7, VAR_1, &VAR_4->saddr);
 FUNC_4(VAR_6, ((void*)0), VAR_1);
 FUNC_0(VAR_6);
}
