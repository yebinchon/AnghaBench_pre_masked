
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_mode {int val; } ;
struct hci_request {int dummy; } ;
struct hci_dev {int cur_adv_instance; int id; int static_addr; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct hci_request*,int ) ;
 int FUNC_2 (struct hci_request*) ;
 int FUNC_3 (struct hci_request*,int) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*,int ) ;
 int FUNC_9 (struct hci_dev*,int ) ;
 int FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct hci_request*,struct hci_dev*) ;
 int FUNC_12 (struct hci_request*,int ) ;
 int FUNC_13 (struct hci_dev*) ;
 int FUNC_14 (struct hci_dev*) ;
 int FUNC_15 (struct hci_dev*) ;
 int FUNC_16 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_17 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_18 (struct mgmt_pending_cmd*) ;
 int FUNC_19 (struct hci_dev*,struct sock*) ;
 scalar_t__ FUNC_20 (int ,struct hci_dev*) ;
 int FUNC_21 (struct sock*,int ,struct hci_dev*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_22(struct sock *VAR_16, struct hci_dev *VAR_17, void *VAR_18, u16 VAR_19)
{
 struct mgmt_mode *VAR_20 = VAR_18;
 struct mgmt_pending_cmd *VAR_21;
 struct hci_request VAR_22;
 int VAR_23;

 FUNC_0("request for %s", VAR_17->name);

 if (!FUNC_14(VAR_17) || !FUNC_15(VAR_17))
  return FUNC_16(VAR_16, VAR_17->id, VAR_10,
           VAR_13);

 if (!FUNC_9(VAR_17, VAR_6))
  return FUNC_16(VAR_16, VAR_17->id, VAR_10,
           VAR_14);

 if (VAR_20->val != 0x00 && VAR_20->val != 0x01)
  return FUNC_16(VAR_16, VAR_17->id, VAR_10,
           VAR_12);

 FUNC_7(VAR_17);

 if (VAR_20->val == FUNC_9(VAR_17, VAR_2)) {
  VAR_23 = FUNC_21(VAR_16, VAR_10, VAR_17);
  goto unlock;
 }

 if (!FUNC_13(VAR_17)) {
  if (!VAR_20->val) {
   FUNC_6(VAR_17, VAR_3);
   FUNC_6(VAR_17, VAR_9);
   FUNC_6(VAR_17, VAR_7);
   FUNC_6(VAR_17, VAR_4);
   FUNC_6(VAR_17, VAR_5);
  }

  FUNC_5(VAR_17, VAR_2);

  VAR_23 = FUNC_21(VAR_16, VAR_10, VAR_17);
  if (VAR_23 < 0)
   goto unlock;

  VAR_23 = FUNC_19(VAR_17, VAR_16);
  goto unlock;
 }


 if (!VAR_20->val) {
  VAR_23 = FUNC_16(VAR_16, VAR_17->id, VAR_10,
          VAR_14);
  goto unlock;
 } else {
  if (!FUNC_9(VAR_17, VAR_2) &&
      (FUNC_4(&VAR_17->static_addr, VAR_0) ||
       FUNC_9(VAR_17, VAR_8))) {
   VAR_23 = FUNC_16(VAR_16, VAR_17->id, VAR_10,
           VAR_14);
   goto unlock;
  }
 }

 if (FUNC_20(VAR_10, VAR_17)) {
  VAR_23 = FUNC_16(VAR_16, VAR_17->id, VAR_10,
          VAR_11);
  goto unlock;
 }

 VAR_21 = FUNC_17(VAR_16, VAR_10, VAR_17, VAR_18, VAR_19);
 if (!VAR_21) {
  VAR_23 = -VAR_1;
  goto unlock;
 }




 FUNC_8(VAR_17, VAR_2);

 FUNC_11(&VAR_22, VAR_17);

 FUNC_3(&VAR_22, 0);
 FUNC_2(&VAR_22);




 FUNC_1(&VAR_22, VAR_17->cur_adv_instance);

 VAR_23 = FUNC_12(&VAR_22, VAR_15);
 if (VAR_23 < 0)
  FUNC_18(VAR_21);

unlock:
 FUNC_10(VAR_17);
 return VAR_23;
}
