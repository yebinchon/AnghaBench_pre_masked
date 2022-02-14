
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_rp_remove_advertising {scalar_t__ instance; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_cp_remove_advertising {scalar_t__ instance; } ;
struct hci_request {int cmd_q; } ;
struct hci_dev {int id; int adv_instances; int name; } ;
typedef int rp ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct hci_request*) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,scalar_t__) ;
 int FUNC_6 (struct hci_dev*,struct sock*,struct hci_request*,scalar_t__,int) ;
 int FUNC_7 (struct hci_request*,struct hci_dev*) ;
 int FUNC_8 (struct hci_request*) ;
 int FUNC_9 (struct hci_request*,int ) ;
 int FUNC_10 (struct hci_dev*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (struct sock*,int ,int ,int ,struct mgmt_rp_remove_advertising*,int) ;
 int FUNC_13 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_14 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_15 (struct mgmt_pending_cmd*) ;
 scalar_t__ FUNC_16 (int ,struct hci_dev*) ;
 int VAR_8 ;
 scalar_t__ FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct sock *VAR_9, struct hci_dev *VAR_10,
         void *VAR_11, u16 VAR_12)
{
 struct mgmt_cp_remove_advertising *VAR_13 = VAR_11;
 struct mgmt_rp_remove_advertising VAR_14;
 struct mgmt_pending_cmd *VAR_15;
 struct hci_request VAR_16;
 int VAR_17;

 FUNC_0("%s", VAR_10->name);

 FUNC_2(VAR_10);

 if (VAR_13->instance && !FUNC_5(VAR_10, VAR_13->instance)) {
  VAR_17 = FUNC_13(VAR_9, VAR_10->id,
          VAR_3,
          VAR_6);
  goto unlock;
 }

 if (FUNC_16(VAR_2, VAR_10) ||
     FUNC_16(VAR_3, VAR_10) ||
     FUNC_16(VAR_4, VAR_10)) {
  VAR_17 = FUNC_13(VAR_9, VAR_10->id, VAR_3,
          VAR_5);
  goto unlock;
 }

 if (FUNC_11(&VAR_10->adv_instances)) {
  VAR_17 = FUNC_13(VAR_9, VAR_10->id, VAR_3,
          VAR_6);
  goto unlock;
 }

 FUNC_7(&VAR_16, VAR_10);

 FUNC_6(VAR_10, VAR_9, &VAR_16, VAR_13->instance, 1);

 if (FUNC_11(&VAR_10->adv_instances))
  FUNC_1(&VAR_16);





 if (FUNC_17(&VAR_16.cmd_q) ||
     !FUNC_10(VAR_10) ||
     FUNC_3(VAR_10, VAR_1)) {
  FUNC_8(&VAR_16);
  VAR_14.instance = VAR_13->instance;
  VAR_17 = FUNC_12(VAR_9, VAR_10->id,
     VAR_3,
     VAR_7, &VAR_14, sizeof(VAR_14));
  goto unlock;
 }

 VAR_15 = FUNC_14(VAR_9, VAR_3, VAR_10, VAR_11,
          VAR_12);
 if (!VAR_15) {
  VAR_17 = -VAR_0;
  goto unlock;
 }

 VAR_17 = FUNC_9(&VAR_16, VAR_8);
 if (VAR_17 < 0)
  FUNC_15(VAR_15);

unlock:
 FUNC_4(VAR_10);

 return VAR_17;
}
