
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct l2cap_chan {TYPE_1__* conn; struct hci_conn* hs_hcon; int local_amp_id; int remote_amp_id; int flags; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {TYPE_2__* hdev; int remote_id; struct amp_mgr* amp_mgr; } ;
struct amp_mgr {struct l2cap_chan* bredr_chan; } ;
struct TYPE_4__ {int block_mtu; int id; } ;
struct TYPE_3__ {int mtu; } ;


 int FUNC_0 (char*,struct hci_conn*,struct hci_conn*,struct amp_mgr*) ;
 int VAR_0 ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 struct hci_dev* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct hci_conn *VAR_1, struct hci_conn *VAR_2)
{
 struct hci_dev *VAR_3 = FUNC_2(VAR_1->hdev);
 struct amp_mgr *VAR_4 = VAR_2->amp_mgr;
 struct l2cap_chan *VAR_5;

 FUNC_0("bredr_hcon %p hs_hcon %p mgr %p", VAR_1, VAR_2, VAR_4);

 if (!VAR_3 || !VAR_4 || !VAR_4->bredr_chan)
  return;

 VAR_5 = VAR_4->bredr_chan;

 FUNC_4(VAR_5);

 FUNC_6(VAR_0, &VAR_5->flags);
 VAR_5->remote_amp_id = VAR_2->remote_id;
 VAR_5->local_amp_id = VAR_2->hdev->id;
 VAR_5->hs_hcon = VAR_2;
 VAR_5->conn->mtu = VAR_2->hdev->block_mtu;

 FUNC_1(VAR_5, 0);

 FUNC_5(VAR_5);

 FUNC_3(VAR_3);
}
