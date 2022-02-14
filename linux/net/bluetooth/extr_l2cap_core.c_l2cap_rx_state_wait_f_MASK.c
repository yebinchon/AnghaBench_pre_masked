
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct l2cap_ctrl {int reqseq; int final; } ;
struct l2cap_chan {TYPE_5__* conn; TYPE_2__* hs_hcon; scalar_t__ unacked_frames; int next_tx_seq; int * tx_send_head; int tx_q; int rx_state; int conn_state; } ;
struct TYPE_10__ {TYPE_4__* hcon; int mtu; } ;
struct TYPE_9__ {TYPE_3__* hdev; } ;
struct TYPE_8__ {int acl_mtu; } ;
struct TYPE_7__ {TYPE_1__* hdev; } ;
struct TYPE_6__ {int block_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff*,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct l2cap_chan *VAR_3,
     struct l2cap_ctrl *VAR_4,
     struct sk_buff *VAR_5, u8 VAR_6)
{
 int VAR_7;

 if (!VAR_4->final)
  return -VAR_1;

 FUNC_0(VAR_0, &VAR_3->conn_state);

 VAR_3->rx_state = VAR_2;
 FUNC_1(VAR_3, VAR_4->reqseq);

 if (!FUNC_5(&VAR_3->tx_q))
  VAR_3->tx_send_head = FUNC_4(&VAR_3->tx_q);
 else
  VAR_3->tx_send_head = ((void*)0);




 VAR_3->next_tx_seq = VAR_4->reqseq;
 VAR_3->unacked_frames = 0;

 if (VAR_3->hs_hcon)
  VAR_3->conn->mtu = VAR_3->hs_hcon->hdev->block_mtu;
 else
  VAR_3->conn->mtu = VAR_3->conn->hcon->hdev->acl_mtu;

 VAR_7 = FUNC_2(VAR_3);

 if (!VAR_7)
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);

 return VAR_7;
}
