
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_mode {int val; } ;
struct hci_request {int dummy; } ;
struct hci_dev {scalar_t__ le_scan_type; int cur_adv_instance; int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct hci_request*) ;
 int FUNC_2 (struct hci_request*) ;
 int FUNC_3 (struct hci_request*,int) ;
 int FUNC_4 (struct hci_request*,int) ;
 int FUNC_5 (struct hci_request*,int) ;
 int FUNC_6 (struct hci_dev*) ;
 scalar_t__ FUNC_7 (struct hci_dev*) ;
 scalar_t__ FUNC_8 (struct hci_dev*,int ) ;
 int FUNC_9 (struct hci_dev*,int ) ;
 int FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct hci_dev*,int ) ;
 int FUNC_12 (struct hci_dev*,int ) ;
 int FUNC_13 (struct hci_dev*,int ) ;
 int FUNC_14 (struct hci_dev*,int ) ;
 int FUNC_15 (struct hci_dev*) ;
 int FUNC_16 (struct hci_request*,struct hci_dev*) ;
 int FUNC_17 (struct hci_request*,int ) ;
 int FUNC_18 (struct hci_dev*) ;
 int FUNC_19 (struct sock*,int ,int ,int) ;
 int FUNC_20 (struct hci_dev*) ;
 struct mgmt_pending_cmd* FUNC_21 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_22 (struct mgmt_pending_cmd*) ;
 int FUNC_23 (struct hci_dev*,struct sock*) ;
 scalar_t__ FUNC_24 (int ,struct hci_dev*) ;
 int FUNC_25 (struct sock*,int ,struct hci_dev*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_26(struct sock *VAR_11, struct hci_dev *VAR_12, void *VAR_13,
      u16 VAR_14)
{
 struct mgmt_mode *VAR_15 = VAR_13;
 struct mgmt_pending_cmd *VAR_16;
 struct hci_request VAR_17;
 u8 VAR_18, VAR_19;
 int VAR_20;

 FUNC_0("request for %s", VAR_12->name);

 VAR_19 = FUNC_20(VAR_12);
 if (VAR_19)
  return FUNC_19(VAR_11, VAR_12->id, VAR_6,
           VAR_19);

 if (VAR_15->val != 0x00 && VAR_15->val != 0x01 && VAR_15->val != 0x02)
  return FUNC_19(VAR_11, VAR_12->id, VAR_6,
           VAR_9);

 FUNC_10(VAR_12);

 VAR_18 = !!VAR_15->val;






 if (!FUNC_18(VAR_12) ||
     (VAR_18 == FUNC_14(VAR_12, VAR_1) &&
      (VAR_15->val == 0x02) == FUNC_14(VAR_12, VAR_2)) ||
     FUNC_8(VAR_12, VAR_4) > 0 ||
     (FUNC_14(VAR_12, VAR_3) &&
      VAR_12->le_scan_type == VAR_5)) {
  bool VAR_21;

  if (VAR_15->val) {
   VAR_12->cur_adv_instance = 0x00;
   VAR_21 = !FUNC_13(VAR_12, VAR_1);
   if (VAR_15->val == 0x02)
    FUNC_11(VAR_12, VAR_2);
   else
    FUNC_9(VAR_12, VAR_2);
  } else {
   VAR_21 = FUNC_12(VAR_12, VAR_1);
   FUNC_9(VAR_12, VAR_2);
  }

  VAR_20 = FUNC_25(VAR_11, VAR_6, VAR_12);
  if (VAR_20 < 0)
   goto unlock;

  if (VAR_21)
   VAR_20 = FUNC_23(VAR_12, VAR_11);

  goto unlock;
 }

 if (FUNC_24(VAR_6, VAR_12) ||
     FUNC_24(VAR_7, VAR_12)) {
  VAR_20 = FUNC_19(VAR_11, VAR_12->id, VAR_6,
          VAR_8);
  goto unlock;
 }

 VAR_16 = FUNC_21(VAR_11, VAR_6, VAR_12, VAR_13, VAR_14);
 if (!VAR_16) {
  VAR_20 = -VAR_0;
  goto unlock;
 }

 FUNC_16(&VAR_17, VAR_12);

 if (VAR_15->val == 0x02)
  FUNC_11(VAR_12, VAR_2);
 else
  FUNC_9(VAR_12, VAR_2);

 FUNC_6(VAR_12);

 if (VAR_18) {




  VAR_12->cur_adv_instance = 0x00;

  if (FUNC_7(VAR_12)) {
   FUNC_3(&VAR_17, 0x00);
  } else {
   FUNC_4(&VAR_17, 0x00);
   FUNC_5(&VAR_17, 0x00);
   FUNC_2(&VAR_17);
  }
 } else {
  FUNC_1(&VAR_17);
 }

 VAR_20 = FUNC_17(&VAR_17, VAR_10);
 if (VAR_20 < 0)
  FUNC_22(VAR_16);

unlock:
 FUNC_15(VAR_12);
 return VAR_20;
}
