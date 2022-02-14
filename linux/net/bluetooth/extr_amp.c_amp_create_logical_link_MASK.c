
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct l2cap_chan {int remote_flush_to; int remote_acc_lat; int remote_sdu_itime; int remote_msdu; int remote_stype; int remote_id; int local_flush_to; int local_acc_lat; int local_sdu_itime; int local_msdu; int local_stype; int local_id; struct hci_conn* hs_hcon; TYPE_2__* conn; } ;
struct hci_dev {int dummy; } ;
struct TYPE_8__ {void* flush_to; void* acc_lat; void* sdu_itime; void* msdu; int stype; int id; } ;
struct TYPE_7__ {void* flush_to; void* acc_lat; void* sdu_itime; void* msdu; int stype; int id; } ;
struct hci_cp_create_accept_logical_link {TYPE_4__ rx_flow_spec; TYPE_3__ tx_flow_spec; int phy_handle; } ;
struct hci_conn {scalar_t__ out; int handle; int hdev; } ;
typedef int cp ;
struct TYPE_6__ {TYPE_1__* hcon; } ;
struct TYPE_5__ {int dst; } ;


 int FUNC_0 (char*,struct l2cap_chan*,struct hci_conn*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 struct hci_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,int ,int,struct hci_cp_create_accept_logical_link*) ;

void FUNC_6(struct l2cap_chan *VAR_2)
{
 struct hci_conn *VAR_3 = VAR_2->hs_hcon;
 struct hci_cp_create_accept_logical_link VAR_4;
 struct hci_dev *VAR_5;

 FUNC_0("chan %p hs_hcon %p dst %pMR", VAR_2, VAR_3,
        &VAR_2->conn->hcon->dst);

 if (!VAR_3)
  return;

 VAR_5 = FUNC_3(VAR_2->hs_hcon->hdev);
 if (!VAR_5)
  return;

 VAR_4.phy_handle = VAR_3->handle;

 VAR_4.tx_flow_spec.id = VAR_2->local_id;
 VAR_4.tx_flow_spec.stype = VAR_2->local_stype;
 VAR_4.tx_flow_spec.msdu = FUNC_1(VAR_2->local_msdu);
 VAR_4.tx_flow_spec.sdu_itime = FUNC_2(VAR_2->local_sdu_itime);
 VAR_4.tx_flow_spec.acc_lat = FUNC_2(VAR_2->local_acc_lat);
 VAR_4.tx_flow_spec.flush_to = FUNC_2(VAR_2->local_flush_to);

 VAR_4.rx_flow_spec.id = VAR_2->remote_id;
 VAR_4.rx_flow_spec.stype = VAR_2->remote_stype;
 VAR_4.rx_flow_spec.msdu = FUNC_1(VAR_2->remote_msdu);
 VAR_4.rx_flow_spec.sdu_itime = FUNC_2(VAR_2->remote_sdu_itime);
 VAR_4.rx_flow_spec.acc_lat = FUNC_2(VAR_2->remote_acc_lat);
 VAR_4.rx_flow_spec.flush_to = FUNC_2(VAR_2->remote_flush_to);

 if (VAR_3->out)
  FUNC_5(VAR_5, VAR_1, sizeof(VAR_4),
        &VAR_4);
 else
  FUNC_5(VAR_5, VAR_0, sizeof(VAR_4),
        &VAR_4);

 FUNC_4(VAR_5);
}
