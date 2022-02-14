
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct l2cap_ctrl {int reqseq; int poll; } ;
struct l2cap_chan {int conn_state; scalar_t__ unacked_frames; int next_tx_seq; int * tx_send_head; int tx_q; } ;


 int FUNC_0 (char*,struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;
 int FUNC_3 (struct l2cap_chan*,struct l2cap_ctrl*,int *,int ) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct l2cap_chan *VAR_3,
     struct l2cap_ctrl *VAR_4,
     struct sk_buff *VAR_5, u8 VAR_6)
{
 int VAR_7;

 FUNC_0("chan %p, control %p, skb %p, event %d", VAR_3, VAR_4, VAR_5,
        VAR_6);

 if (!VAR_4->poll)
  return -VAR_1;

 FUNC_2(VAR_3, VAR_4->reqseq);

 if (!FUNC_7(&VAR_3->tx_q))
  VAR_3->tx_send_head = FUNC_6(&VAR_3->tx_q);
 else
  VAR_3->tx_send_head = ((void*)0);




 VAR_3->next_tx_seq = VAR_4->reqseq;
 VAR_3->unacked_frames = 0;

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_0, &VAR_3->conn_state);
 FUNC_4(VAR_3);

 if (VAR_6 == VAR_2)
  return -VAR_1;

 return FUNC_3(VAR_3, VAR_4, ((void*)0), VAR_6);
}
