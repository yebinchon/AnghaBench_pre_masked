
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_request {int dummy; } ;
struct hci_dev {int name; } ;
struct hci_cp_accept_phy_link {int key_type; int key_len; int key; int phy_handle; } ;
struct hci_conn {int handle; } ;
struct amp_mgr {TYPE_1__* l2cap_conn; } ;
typedef int cp ;
struct TYPE_2__ {int hcon; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hci_request*,int ,int,struct hci_cp_accept_phy_link*) ;
 int FUNC_2 (struct hci_request*,struct hci_dev*) ;
 int FUNC_3 (struct hci_request*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *) ;

void FUNC_5(struct hci_dev *VAR_2, struct amp_mgr *VAR_3,
   struct hci_conn *VAR_4)
{
 struct hci_cp_accept_phy_link VAR_5;
 struct hci_request VAR_6;

 VAR_5.phy_handle = VAR_4->handle;

 FUNC_0("%s hcon %p phy handle 0x%2.2x", VAR_2->name, VAR_4,
        VAR_4->handle);

 if (FUNC_4(VAR_3->l2cap_conn->hcon, VAR_5.key, &VAR_5.key_len,
       &VAR_5.key_type)) {
  FUNC_0("Cannot create link key");
  return;
 }

 FUNC_2(&VAR_6, VAR_2);
 FUNC_1(&VAR_6, VAR_0, sizeof(VAR_5), &VAR_5);
 FUNC_3(&VAR_6, VAR_1);
}
