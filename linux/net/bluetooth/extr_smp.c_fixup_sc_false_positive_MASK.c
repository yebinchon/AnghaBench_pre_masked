
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_cmd_pairing {int init_key_dist; int resp_key_dist; int auth_req; int io_capability; } ;
struct smp_chan {int remote_key_dist; int flags; int * prsp; int * preq; struct l2cap_conn* conn; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ out; struct hci_dev* hdev; } ;


 int FUNC_0 (struct hci_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*,char*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_4 (struct l2cap_conn*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct smp_chan *VAR_3)
{
 struct l2cap_conn *VAR_4 = VAR_3->conn;
 struct hci_conn *VAR_5 = VAR_4->hcon;
 struct hci_dev *VAR_6 = VAR_5->hdev;
 struct smp_cmd_pairing *VAR_7, *VAR_8;
 u8 VAR_9;


 if (VAR_5->out)
  return VAR_2;

 if (FUNC_3(VAR_6, VAR_0)) {
  FUNC_1(VAR_6, "refusing legacy fallback in SC-only mode");
  return VAR_2;
 }

 FUNC_1(VAR_6, "trying to fall back to legacy SMP");

 VAR_7 = (void *) &VAR_3->preq[1];
 VAR_8 = (void *) &VAR_3->prsp[1];


 VAR_3->remote_key_dist = (VAR_7->init_key_dist & VAR_8->resp_key_dist);

 VAR_9 = VAR_7->auth_req & FUNC_0(VAR_6);

 if (FUNC_4(VAR_4, 0, VAR_9, VAR_8->io_capability, VAR_7->io_capability)) {
  FUNC_1(VAR_6, "failed to fall back to legacy SMP");
  return VAR_2;
 }

 FUNC_2(VAR_1, &VAR_3->flags);

 return 0;
}
