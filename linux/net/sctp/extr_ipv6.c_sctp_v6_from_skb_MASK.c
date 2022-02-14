
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; int sin6_port; int sin6_scope_id; scalar_t__ sin6_flowinfo; int sin6_family; } ;
union sctp_addr {struct sockaddr_in6 v6; } ;
struct sk_buff {scalar_t__ cb; } ;
struct sctphdr {int dest; int source; } ;
struct inet6_skb_parm {int iif; } ;
struct TYPE_2__ {int daddr; int saddr; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sctphdr* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(union sctp_addr *VAR_1, struct sk_buff *VAR_2,
        int VAR_3)
{

 struct sctphdr *VAR_4 = FUNC_1(VAR_2);
 struct sockaddr_in6 *VAR_5 = &VAR_1->v6;

 VAR_1->v6.sin6_family = VAR_0;
 VAR_1->v6.sin6_flowinfo = 0;
 VAR_1->v6.sin6_scope_id = ((struct inet6_skb_parm *)VAR_2->cb)->iif;

 if (VAR_3) {
  VAR_5->sin6_port = VAR_4->source;
  VAR_5->sin6_addr = FUNC_0(VAR_2)->saddr;
 } else {
  VAR_5->sin6_port = VAR_4->dest;
  VAR_5->sin6_addr = FUNC_0(VAR_2)->daddr;
 }
}
