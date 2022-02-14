
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ipv6hdr {int daddr; } ;
struct TYPE_4__ {int rxpmtu; } ;
struct TYPE_5__ {TYPE_1__ bits; } ;
struct ipv6_pinfo {int rxpmtu; TYPE_2__ rxopt; } ;
struct TYPE_6__ {int sin6_addr; int sin6_scope_id; scalar_t__ sin6_flowinfo; scalar_t__ sin6_port; int sin6_family; } ;
struct ip6_mtuinfo {TYPE_3__ ip6m_addr; int ip6m_mtu; } ;
struct flowi6 {int flowi6_oif; int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ip6_mtuinfo* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 struct ipv6_pinfo* FUNC_3 (struct sock*) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int *,struct sk_buff*) ;

void FUNC_11(struct sock *VAR_2, struct flowi6 *VAR_3, u32 VAR_4)
{
 struct ipv6_pinfo *VAR_5 = FUNC_3(VAR_2);
 struct ipv6hdr *VAR_6;
 struct sk_buff *VAR_7;
 struct ip6_mtuinfo *VAR_8;

 if (!VAR_5->rxopt.bits.rxpmtu)
  return;

 VAR_7 = FUNC_2(sizeof(struct ipv6hdr), VAR_1);
 if (!VAR_7)
  return;

 FUNC_6(VAR_7, sizeof(struct ipv6hdr));
 FUNC_7(VAR_7);
 VAR_6 = FUNC_4(VAR_7);
 VAR_6->daddr = VAR_3->daddr;

 VAR_8 = FUNC_0(VAR_7);

 VAR_8->ip6m_mtu = VAR_4;
 VAR_8->ip6m_addr.sin6_family = VAR_0;
 VAR_8->ip6m_addr.sin6_port = 0;
 VAR_8->ip6m_addr.sin6_flowinfo = 0;
 VAR_8->ip6m_addr.sin6_scope_id = VAR_3->flowi6_oif;
 VAR_8->ip6m_addr.sin6_addr = FUNC_4(VAR_7)->daddr;

 FUNC_1(VAR_7, FUNC_9(VAR_7) - VAR_7->data);
 FUNC_8(VAR_7);

 VAR_7 = FUNC_10(&VAR_5->rxpmtu, VAR_7);
 FUNC_5(VAR_7);
}
