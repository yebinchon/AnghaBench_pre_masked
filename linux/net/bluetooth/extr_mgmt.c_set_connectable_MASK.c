
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_mode {int val; } ;
struct hci_dev {scalar_t__ discov_timeout; int connectable_update; int req_workqueue; int discov_off; int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_9 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 scalar_t__ FUNC_10 (int ,struct hci_dev*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct hci_dev*,struct sock*,int) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_11, struct hci_dev *VAR_12, void *VAR_13,
      u16 VAR_14)
{
 struct mgmt_mode *VAR_15 = VAR_13;
 struct mgmt_pending_cmd *VAR_16;
 int VAR_17;

 FUNC_0("request for %s", VAR_12->name);

 if (!FUNC_5(VAR_12, VAR_4) &&
     !FUNC_5(VAR_12, VAR_1))
  return FUNC_8(VAR_11, VAR_12->id, VAR_6,
           VAR_10);

 if (VAR_15->val != 0x00 && VAR_15->val != 0x01)
  return FUNC_8(VAR_11, VAR_12->id, VAR_6,
           VAR_9);

 FUNC_3(VAR_12);

 if (!FUNC_7(VAR_12)) {
  VAR_17 = FUNC_12(VAR_12, VAR_11, VAR_15->val);
  goto failed;
 }

 if (FUNC_10(VAR_7, VAR_12) ||
     FUNC_10(VAR_6, VAR_12)) {
  VAR_17 = FUNC_8(VAR_11, VAR_12->id, VAR_6,
          VAR_8);
  goto failed;
 }

 VAR_16 = FUNC_9(VAR_11, VAR_6, VAR_12, VAR_13, VAR_14);
 if (!VAR_16) {
  VAR_17 = -VAR_0;
  goto failed;
 }

 if (VAR_15->val) {
  FUNC_4(VAR_12, VAR_2);
 } else {
  if (VAR_12->discov_timeout > 0)
   FUNC_1(&VAR_12->discov_off);

  FUNC_2(VAR_12, VAR_5);
  FUNC_2(VAR_12, VAR_3);
  FUNC_2(VAR_12, VAR_2);
 }

 FUNC_11(VAR_12->req_workqueue, &VAR_12->connectable_update);
 VAR_17 = 0;

failed:
 FUNC_6(VAR_12);
 return VAR_17;
}
