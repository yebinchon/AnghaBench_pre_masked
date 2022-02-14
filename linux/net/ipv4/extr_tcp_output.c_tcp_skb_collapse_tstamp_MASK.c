
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_shared_info {int tx_flags; int tskey; } ;
typedef struct sk_buff const sk_buff ;
struct TYPE_2__ {int txstamp_ack; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 void* FUNC_1 (struct sk_buff const*) ;
 int FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct sk_buff *VAR_1,
        const struct sk_buff *VAR_2)
{
 if (FUNC_3(FUNC_2(VAR_2))) {
  const struct skb_shared_info *VAR_3 =
   FUNC_1(VAR_2);
  struct skb_shared_info *VAR_4 = FUNC_1(VAR_1);

  VAR_4->tx_flags |= VAR_3->tx_flags & VAR_0;
  VAR_4->tskey = VAR_3->tskey;
  FUNC_0(VAR_1)->txstamp_ack |=
   FUNC_0(VAR_2)->txstamp_ack;
 }
}
