
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct l2cap_chan {int rx_state; int srej_q; int buffer_seq; int conn_state; } ;
struct TYPE_2__ {int l2cap; } ;


 int FUNC_0 (char*,struct l2cap_chan*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct l2cap_chan*,struct sk_buff*,int *) ;
 int FUNC_5 (struct l2cap_chan*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct l2cap_chan *VAR_2)
{
 int VAR_3 = 0;




 FUNC_0("chan %p", VAR_2);

 while (!FUNC_9(VAR_0, &VAR_2->conn_state)) {
  struct sk_buff *VAR_4;
  FUNC_0("Searching for skb with txseq %d (queue len %d)",
         VAR_2->buffer_seq, FUNC_7(&VAR_2->srej_q));

  VAR_4 = FUNC_3(&VAR_2->srej_q, VAR_2->buffer_seq);

  if (!VAR_4)
   break;

  FUNC_8(VAR_4, &VAR_2->srej_q);
  VAR_2->buffer_seq = FUNC_1(VAR_2, VAR_2->buffer_seq);
  VAR_3 = FUNC_4(VAR_2, VAR_4, &FUNC_2(VAR_4)->l2cap);
  if (VAR_3)
   break;
 }

 if (FUNC_6(&VAR_2->srej_q)) {
  VAR_2->rx_state = VAR_1;
  FUNC_5(VAR_2);
 }

 return VAR_3;
}
