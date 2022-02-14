
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tcphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct TYPE_7__ {int daddr; } ;
struct TYPE_6__ {int daddr; } ;
struct TYPE_8__ {TYPE_2__ ip6; TYPE_1__ ip4; } ;
struct flowi {TYPE_3__ u; } ;
typedef struct dst_entry const dst_entry ;
typedef int fl ;
struct TYPE_10__ {int saddr; } ;
struct TYPE_9__ {int saddr; } ;




 int VAR_0 ;
 int FUNC_0 (struct dst_entry const*) ;
 int FUNC_1 (struct dst_entry const*) ;
 TYPE_5__* FUNC_2 (struct sk_buff const*) ;
 TYPE_4__* FUNC_3 (struct sk_buff const*) ;
 int FUNC_4 (struct flowi*,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,struct dst_entry const**,struct flowi*,int,int) ;
 int FUNC_7 (struct nft_pktinfo const*) ;
 int FUNC_8 (struct nft_pktinfo const*) ;

__attribute__((used)) static u16 FUNC_9(const struct nft_pktinfo *VAR_1, const struct dst_entry *VAR_2)
{
 u32 VAR_3 = sizeof(struct ipv6hdr), VAR_4 = FUNC_0(VAR_2);
 const struct sk_buff *VAR_5 = VAR_1->skb;
 struct dst_entry *VAR_6 = ((void*)0);
 struct flowi VAR_7;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));

 switch (FUNC_8(VAR_1)) {
 case 129:
  VAR_7.u.ip4.daddr = FUNC_2(VAR_5)->saddr;
  VAR_3 = sizeof(struct iphdr) + sizeof(struct tcphdr);
  break;
 case 128:
  VAR_7.u.ip6.daddr = FUNC_3(VAR_5)->saddr;
  VAR_3 = sizeof(struct ipv6hdr) + sizeof(struct tcphdr);
  break;
 }

 FUNC_6(FUNC_7(VAR_1), &VAR_6, &VAR_7, 0, FUNC_8(VAR_1));
 if (VAR_6) {
  VAR_4 = FUNC_5(VAR_4, FUNC_0(VAR_6));
  FUNC_1(VAR_6);
 }

 if (VAR_4 <= VAR_3 || VAR_4 > 0xffff)
  return VAR_0;

 return VAR_4 - VAR_3;
}
