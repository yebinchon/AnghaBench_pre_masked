
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct smp_cmd_pairing {int auth_req; } ;
struct smp_chan {scalar_t__ link_key; TYPE_1__* conn; int flags; TYPE_2__* slave_ltk; TYPE_2__* ltk; TYPE_4__* slave_csrk; TYPE_4__* csrk; TYPE_3__* remote_irk; int * prsp; int * preq; } ;
struct link_key {scalar_t__ type; int list; } ;
struct l2cap_conn {int id_addr_update_work; struct hci_conn* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_dev {int workqueue; } ;
struct hci_conn {scalar_t__ type; scalar_t__ key_type; scalar_t__ sec_level; int dst; int dst_type; int flags; struct hci_dev* hdev; } ;
struct TYPE_8__ {int bdaddr; int bdaddr_type; } ;
struct TYPE_7__ {int addr_type; int bdaddr; } ;
struct TYPE_6__ {int bdaddr; int bdaddr_type; } ;
struct TYPE_5__ {int hcon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int *) ;
 struct link_key* FUNC_1 (struct hci_dev*,int ,int *,scalar_t__,scalar_t__,int ,int*) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct link_key*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hci_dev*,TYPE_4__*,int) ;
 int FUNC_6 (struct hci_dev*,TYPE_3__*,int) ;
 int FUNC_7 (struct hci_dev*,struct link_key*,int) ;
 int FUNC_8 (struct hci_dev*,TYPE_2__*,int) ;
 int FUNC_9 (int ,int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct l2cap_conn *VAR_11)
{
 struct l2cap_chan *VAR_12 = VAR_11->smp;
 struct smp_chan *VAR_13 = VAR_12->data;
 struct hci_conn *VAR_14 = VAR_11->hcon;
 struct hci_dev *VAR_15 = VAR_14->hdev;
 struct smp_cmd_pairing *VAR_16 = (void *) &VAR_13->preq[1];
 struct smp_cmd_pairing *VAR_17 = (void *) &VAR_13->prsp[1];
 bool VAR_18;

 if (VAR_14->type == VAR_0) {
  if (VAR_14->key_type == VAR_5)
   VAR_18 = 0;
  else
   VAR_18 = !FUNC_10(VAR_2,
            &VAR_14->flags);
 } else {




  VAR_18 = !!((VAR_16->auth_req & VAR_17->auth_req) &
    VAR_8);
 }

 if (VAR_13->remote_irk) {
  FUNC_6(VAR_15, VAR_13->remote_irk, VAR_18);





  if (VAR_14->type == VAR_7) {
   FUNC_0(&VAR_14->dst, &VAR_13->remote_irk->bdaddr);
   VAR_14->dst_type = VAR_13->remote_irk->addr_type;
   FUNC_9(VAR_15->workqueue, &VAR_11->id_addr_update_work);
  }
 }

 if (VAR_13->csrk) {
  VAR_13->csrk->bdaddr_type = VAR_14->dst_type;
  FUNC_0(&VAR_13->csrk->bdaddr, &VAR_14->dst);
  FUNC_5(VAR_15, VAR_13->csrk, VAR_18);
 }

 if (VAR_13->slave_csrk) {
  VAR_13->slave_csrk->bdaddr_type = VAR_14->dst_type;
  FUNC_0(&VAR_13->slave_csrk->bdaddr, &VAR_14->dst);
  FUNC_5(VAR_15, VAR_13->slave_csrk, VAR_18);
 }

 if (VAR_13->ltk) {
  VAR_13->ltk->bdaddr_type = VAR_14->dst_type;
  FUNC_0(&VAR_13->ltk->bdaddr, &VAR_14->dst);
  FUNC_8(VAR_15, VAR_13->ltk, VAR_18);
 }

 if (VAR_13->slave_ltk) {
  VAR_13->slave_ltk->bdaddr_type = VAR_14->dst_type;
  FUNC_0(&VAR_13->slave_ltk->bdaddr, &VAR_14->dst);
  FUNC_8(VAR_15, VAR_13->slave_ltk, VAR_18);
 }

 if (VAR_13->link_key) {
  struct link_key *VAR_19;
  u8 VAR_20;

  if (FUNC_10(VAR_9, &VAR_13->flags))
   VAR_20 = VAR_5;
  else if (VAR_14->sec_level == VAR_1)
   VAR_20 = VAR_4;
  else
   VAR_20 = VAR_6;

  VAR_19 = FUNC_1(VAR_15, VAR_13->conn->hcon, &VAR_14->dst,
           VAR_13->link_key, VAR_20, 0, &VAR_18);
  if (VAR_19) {
   FUNC_7(VAR_15, VAR_19, VAR_18);




   if (!FUNC_2(VAR_15, VAR_3) &&
       VAR_19->type == VAR_5) {
    FUNC_4(&VAR_19->list);
    FUNC_3(VAR_19, VAR_10);
   }
  }
 }
}
