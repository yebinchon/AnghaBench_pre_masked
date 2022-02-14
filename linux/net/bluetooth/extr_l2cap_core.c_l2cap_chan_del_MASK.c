
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct l2cap_conn {TYPE_2__* hcon; } ;
struct l2cap_chan {scalar_t__ chan_type; int mode; int tx_q; int retrans_list; int srej_list; int srej_q; int conf_state; struct hci_chan* hs_hchan; int flags; struct l2cap_conn* conn; int list; TYPE_1__* ops; int state; } ;
struct hci_chan {int dummy; } ;
struct amp_mgr {struct l2cap_chan* bredr_chan; } ;
struct TYPE_4__ {struct amp_mgr* amp_mgr; } ;
struct TYPE_3__ {int (* teardown ) (struct l2cap_chan*,int) ;} ;


 int FUNC_0 (char*,struct l2cap_chan*,struct l2cap_conn*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct hci_chan*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct l2cap_chan*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct l2cap_chan*,int) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void FUNC_14(struct l2cap_chan *VAR_3, int VAR_4)
{
 struct l2cap_conn *VAR_5 = VAR_3->conn;

 FUNC_2(VAR_3);

 FUNC_0("chan %p, conn %p, err %d, state %s", VAR_3, VAR_5, VAR_4,
        FUNC_11(VAR_3->state));

 VAR_3->ops->teardown(VAR_3, VAR_4);

 if (VAR_5) {
  struct amp_mgr *VAR_6 = VAR_5->hcon->amp_mgr;

  FUNC_9(&VAR_3->list);

  FUNC_7(VAR_3);

  VAR_3->conn = ((void*)0);





  if (VAR_3->chan_type != VAR_2 ||
      FUNC_13(VAR_1, &VAR_3->flags))
   FUNC_6(VAR_5->hcon);

  if (VAR_6 && VAR_6->bredr_chan == VAR_3)
   VAR_6->bredr_chan = ((void*)0);
 }

 if (VAR_3->hs_hchan) {
  struct hci_chan *VAR_7 = VAR_3->hs_hchan;

  FUNC_0("chan %p disconnect hs_hchan %p", VAR_3, VAR_7);
  FUNC_5(VAR_7);
 }

 if (FUNC_13(VAR_0, &VAR_3->conf_state))
  return;

 switch(VAR_3->mode) {
 case 131:
  break;

 case 129:
  FUNC_10(&VAR_3->tx_q);
  break;

 case 130:
  FUNC_4(VAR_3);
  FUNC_3(VAR_3);
  FUNC_1(VAR_3);

  FUNC_10(&VAR_3->srej_q);

  FUNC_8(&VAR_3->srej_list);
  FUNC_8(&VAR_3->retrans_list);



 case 128:
  FUNC_10(&VAR_3->tx_q);
  break;
 }

 return;
}
