
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct flowi6 {int flowi6_oif; int flowi6_uid; int flowlabel; int saddr; int daddr; int flowi6_mark; int flowi6_iif; } ;
struct dst_entry {int dummy; } ;
typedef int kuid_t ;
struct TYPE_2__ {int saddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct ipv6hdr const*) ;
 struct dst_entry* FUNC_2 (struct net*,struct flowi6*,struct sk_buff*,int *) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct dst_entry*,int *,struct sk_buff*) ;

void FUNC_5(struct sk_buff *VAR_1, struct net *VAR_2, int VAR_3, u32 VAR_4,
    kuid_t VAR_5)
{
 const struct ipv6hdr *VAR_6 = (struct ipv6hdr *) VAR_1->data;
 struct dst_entry *VAR_7;
 struct flowi6 VAR_8 = {
  .flowi6_iif = VAR_0,
  .flowi6_oif = VAR_3,
  .flowi6_mark = VAR_4,
  .daddr = VAR_6->daddr,
  .saddr = VAR_6->saddr,
  .flowlabel = FUNC_1(VAR_6),
  .flowi6_uid = VAR_5,
 };

 VAR_7 = FUNC_2(VAR_2, &VAR_8, VAR_1, &FUNC_3(VAR_1)->saddr);
 FUNC_4(VAR_7, ((void*)0), VAR_1);
 FUNC_0(VAR_7);
}
