
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {struct dst_entry* sk_rx_dst; } ;
struct sk_buff {int skb_iif; } ;
struct rt6_info {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_4__ {int rx_dst_ifindex; } ;
struct TYPE_3__ {int rx_dst_cookie; } ;


 scalar_t__ FUNC_0 (struct dst_entry*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct rt6_info const*) ;
 struct dst_entry* FUNC_3 (struct sk_buff const*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, const struct sk_buff *VAR_1)
{
 struct dst_entry *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2 && FUNC_0(VAR_2)) {
  const struct rt6_info *VAR_3 = (const struct rt6_info *)VAR_2;

  VAR_0->sk_rx_dst = VAR_2;
  FUNC_1(VAR_0)->rx_dst_ifindex = VAR_1->skb_iif;
  FUNC_4(VAR_0)->rx_dst_cookie = FUNC_2(VAR_3);
 }
}
