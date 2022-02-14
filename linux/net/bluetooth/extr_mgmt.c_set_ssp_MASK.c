
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_mode {int val; } ;
struct hci_dev {int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,int ,int,int*) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 scalar_t__ FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct sock*,int ,int ,scalar_t__) ;
 struct mgmt_pending_cmd* FUNC_12 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_13 (struct mgmt_pending_cmd*) ;
 int FUNC_14 (struct hci_dev*,struct sock*) ;
 scalar_t__ FUNC_15 (int ,struct hci_dev*) ;
 int FUNC_16 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_17(struct sock *VAR_10, struct hci_dev *VAR_11, void *VAR_12, u16 VAR_13)
{
 struct mgmt_mode *VAR_14 = VAR_12;
 struct mgmt_pending_cmd *VAR_15;
 u8 VAR_16;
 int VAR_17;

 FUNC_0("request for %s", VAR_11->name);

 VAR_16 = FUNC_10(VAR_11);
 if (VAR_16)
  return FUNC_11(VAR_10, VAR_11->id, VAR_6, VAR_16);

 if (!FUNC_9(VAR_11))
  return FUNC_11(VAR_10, VAR_11->id, VAR_6,
           VAR_9);

 if (VAR_14->val != 0x00 && VAR_14->val != 0x01)
  return FUNC_11(VAR_10, VAR_11->id, VAR_6,
           VAR_8);

 FUNC_2(VAR_11);

 if (!FUNC_8(VAR_11)) {
  bool VAR_18;

  if (VAR_14->val) {
   VAR_18 = !FUNC_4(VAR_11,
            VAR_4);
  } else {
   VAR_18 = FUNC_3(VAR_11,
             VAR_4);
   if (!VAR_18)
    VAR_18 = FUNC_3(VAR_11,
              VAR_1);
   else
    FUNC_1(VAR_11, VAR_1);
  }

  VAR_17 = FUNC_16(VAR_10, VAR_6, VAR_11);
  if (VAR_17 < 0)
   goto failed;

  if (VAR_18)
   VAR_17 = FUNC_14(VAR_11, VAR_10);

  goto failed;
 }

 if (FUNC_15(VAR_6, VAR_11)) {
  VAR_17 = FUNC_11(VAR_10, VAR_11->id, VAR_6,
          VAR_7);
  goto failed;
 }

 if (!!VAR_14->val == FUNC_5(VAR_11, VAR_4)) {
  VAR_17 = FUNC_16(VAR_10, VAR_6, VAR_11);
  goto failed;
 }

 VAR_15 = FUNC_12(VAR_10, VAR_6, VAR_11, VAR_12, VAR_13);
 if (!VAR_15) {
  VAR_17 = -VAR_0;
  goto failed;
 }

 if (!VAR_14->val && FUNC_5(VAR_11, VAR_5))
  FUNC_7(VAR_11, VAR_2,
        sizeof(VAR_14->val), &VAR_14->val);

 VAR_17 = FUNC_7(VAR_11, VAR_3, 1, &VAR_14->val);
 if (VAR_17 < 0) {
  FUNC_13(VAR_15);
  goto failed;
 }

failed:
 FUNC_6(VAR_11);
 return VAR_17;
}
