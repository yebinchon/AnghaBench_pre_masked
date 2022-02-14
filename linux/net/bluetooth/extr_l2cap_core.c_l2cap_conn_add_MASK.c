
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct l2cap_conn {int local_fixed_chan; int disc_reason; int id_addr_update_work; int pending_rx_work; int pending_rx; int info_timer; int users; int chan_l; int chan_lock; int ident_lock; scalar_t__ feat_mask; int mtu; struct hci_chan* hchan; int hcon; int ref; } ;
struct hci_conn {int type; TYPE_1__* hdev; struct l2cap_conn* l2cap_data; } ;
struct hci_chan {int dummy; } ;
struct TYPE_3__ {int acl_mtu; int le_mtu; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct hci_conn*,struct l2cap_conn*,struct hci_chan*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 scalar_t__ FUNC_4 (TYPE_1__*) ;
 struct hci_chan* FUNC_5 (struct hci_conn*) ;
 int FUNC_6 (struct hci_chan*) ;
 int FUNC_7 (struct hci_conn*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 struct l2cap_conn* FUNC_10 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int *) ;
 int VAR_12 ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct l2cap_conn *FUNC_13(struct hci_conn *VAR_13)
{
 struct l2cap_conn *VAR_14 = VAR_13->l2cap_data;
 struct hci_chan *VAR_15;

 if (VAR_14)
  return VAR_14;

 VAR_15 = FUNC_5(VAR_13);
 if (!VAR_15)
  return ((void*)0);

 VAR_14 = FUNC_10(sizeof(*VAR_14), VAR_1);
 if (!VAR_14) {
  FUNC_6(VAR_15);
  return ((void*)0);
 }

 FUNC_9(&VAR_14->ref);
 VAR_13->l2cap_data = VAR_14;
 VAR_14->hcon = FUNC_7(VAR_13);
 VAR_14->hchan = VAR_15;

 FUNC_0("hcon %p conn %p hchan %p", VAR_13, VAR_14, VAR_15);

 switch (VAR_13->type) {
 case 128:
  if (VAR_13->hdev->le_mtu) {
   VAR_14->mtu = VAR_13->hdev->le_mtu;
   break;
  }

 default:
  VAR_14->mtu = VAR_13->hdev->acl_mtu;
  break;
 }

 VAR_14->feat_mask = 0;

 VAR_14->local_fixed_chan = VAR_8 | VAR_7;

 if (VAR_13->type == VAR_0 &&
     FUNC_8(VAR_13->hdev, VAR_4))
  VAR_14->local_fixed_chan |= VAR_6;

 if (FUNC_8(VAR_13->hdev, VAR_5) &&
     (FUNC_4(VAR_13->hdev) ||
      FUNC_8(VAR_13->hdev, VAR_3)))
  VAR_14->local_fixed_chan |= VAR_9;

 FUNC_11(&VAR_14->ident_lock);
 FUNC_11(&VAR_14->chan_lock);

 FUNC_2(&VAR_14->chan_l);
 FUNC_2(&VAR_14->users);

 FUNC_1(&VAR_14->info_timer, VAR_11);

 FUNC_12(&VAR_14->pending_rx);
 FUNC_3(&VAR_14->pending_rx_work, VAR_12);
 FUNC_3(&VAR_14->id_addr_update_work, VAR_10);

 VAR_14->disc_reason = VAR_2;

 return VAR_14;
}
