
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct hci_ev_user_confirm_req {int passkey; int bdaddr; } ;
struct hci_dev {scalar_t__ name; scalar_t__ auto_accept_delay; } ;
struct hci_conn {int auth_type; int remote_auth; scalar_t__ pending_sec_level; scalar_t__ remote_cap; scalar_t__ io_capability; int auto_accept_work; TYPE_1__* hdev; int flags; } ;
struct TYPE_2__ {int workqueue; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct hci_conn* FUNC_1 (struct hci_dev*,int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,int ,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct hci_dev*,int *,int ,int ,int ,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int *,int) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct hci_dev *VAR_7,
      struct sk_buff *VAR_8)
{
 struct hci_ev_user_confirm_req *VAR_9 = (void *) VAR_8->data;
 int VAR_10, VAR_11, VAR_12 = 0;
 struct hci_conn *VAR_13;

 FUNC_0("%s", VAR_7->name);

 FUNC_2(VAR_7);

 if (!FUNC_3(VAR_7, VAR_4))
  goto unlock;

 VAR_13 = FUNC_1(VAR_7, VAR_0, &VAR_9->bdaddr);
 if (!VAR_13)
  goto unlock;

 VAR_10 = (VAR_13->auth_type & 0x01);
 VAR_11 = (VAR_13->remote_auth & 0x01);






 if (VAR_13->pending_sec_level > VAR_1 &&
     VAR_13->remote_cap == VAR_3) {
  FUNC_0("Rejecting request: remote device can't provide MITM");
  FUNC_5(VAR_7, VAR_5,
        sizeof(VAR_9->bdaddr), &VAR_9->bdaddr);
  goto unlock;
 }


 if ((!VAR_10 || VAR_13->remote_cap == VAR_3) &&
     (!VAR_11 || VAR_13->io_capability == VAR_3)) {







  if (!FUNC_10(VAR_2, &VAR_13->flags) &&
      VAR_13->io_capability != VAR_3 &&
      (VAR_10 || VAR_11)) {
   FUNC_0("Confirming auto-accept as acceptor");
   VAR_12 = 1;
   goto confirm;
  }

  FUNC_0("Auto-accept of user confirmation with %ums delay",
         VAR_7->auto_accept_delay);

  if (VAR_7->auto_accept_delay > 0) {
   int VAR_14 = FUNC_8(VAR_7->auto_accept_delay);
   FUNC_9(VAR_13->hdev->workqueue,
        &VAR_13->auto_accept_work, VAR_14);
   goto unlock;
  }

  FUNC_5(VAR_7, VAR_6,
        sizeof(VAR_9->bdaddr), &VAR_9->bdaddr);
  goto unlock;
 }

confirm:
 FUNC_7(VAR_7, &VAR_9->bdaddr, VAR_0, 0,
      FUNC_6(VAR_9->passkey), VAR_12);

unlock:
 FUNC_4(VAR_7);
}
