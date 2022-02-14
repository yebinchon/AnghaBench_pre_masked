
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {struct dst_entry* sk_rx_dst; } ;
struct sk_buff {int skb_iif; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int rx_dst_ifindex; } ;


 scalar_t__ FUNC_0 (struct dst_entry*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 struct dst_entry* FUNC_2 (struct sk_buff const*) ;

void FUNC_3(struct sock *VAR_0, const struct sk_buff *VAR_1)
{
 struct dst_entry *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 && FUNC_0(VAR_2)) {
  VAR_0->sk_rx_dst = VAR_2;
  FUNC_1(VAR_0)->rx_dst_ifindex = VAR_1->skb_iif;
 }
}
