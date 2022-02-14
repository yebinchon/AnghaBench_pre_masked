
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {unsigned int len; } ;
struct j1939_sk_buff_cb {unsigned int offset; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int tx_acked; } ;
struct j1939_session {TYPE_2__ skb_queue; TYPE_1__ pkt; } ;


 int FUNC_0 (struct sk_buff*,TYPE_2__*) ;
 struct j1939_sk_buff_cb* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct j1939_session *VAR_0)
{
 struct sk_buff *VAR_1;
 struct j1939_sk_buff_cb *VAR_2;
 unsigned int VAR_3;
 unsigned long VAR_4;

 if (FUNC_4(&VAR_0->skb_queue) < 2)
  return;

 VAR_3 = VAR_0->pkt.tx_acked * 7;

 FUNC_5(&VAR_0->skb_queue.lock, VAR_4);
 VAR_1 = FUNC_3(&VAR_0->skb_queue);
 VAR_2 = FUNC_1(VAR_1);

 if ((VAR_2->offset + VAR_1->len) < VAR_3) {
  FUNC_0(VAR_1, &VAR_0->skb_queue);
  FUNC_2(VAR_1);
 }
 FUNC_6(&VAR_0->skb_queue.lock, VAR_4);
}
