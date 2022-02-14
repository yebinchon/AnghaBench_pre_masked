
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int mark; scalar_t__ data; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct flowi6 {int flowi6_oif; int flowi6_uid; int flowlabel; int saddr; int daddr; int flowi6_mark; } ;
struct dst_entry {int error; } ;
typedef int kuid_t ;
typedef int __be32 ;


 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct dst_entry*,int *,struct ipv6hdr const*,int ) ;
 int FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (struct ipv6hdr const*) ;
 struct dst_entry* FUNC_4 (struct net*,int *,struct flowi6*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct sk_buff *VAR_0, struct net *VAR_1, __be32 VAR_2,
       int VAR_3, u32 VAR_4, kuid_t VAR_5)
{
 const struct ipv6hdr *VAR_6 = (struct ipv6hdr *) VAR_0->data;
 struct dst_entry *VAR_7;
 struct flowi6 VAR_8 = {
  .flowi6_oif = VAR_3,
  .flowi6_mark = VAR_4 ? VAR_4 : FUNC_0(VAR_1, VAR_0->mark),
  .daddr = VAR_6->daddr,
  .saddr = VAR_6->saddr,
  .flowlabel = FUNC_3(VAR_6),
  .flowi6_uid = VAR_5,
 };

 VAR_7 = FUNC_4(VAR_1, ((void*)0), &VAR_8);
 if (!VAR_7->error)
  FUNC_1(VAR_7, ((void*)0), VAR_6, FUNC_5(VAR_2));
 FUNC_2(VAR_7);
}
