
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
struct hci_dev {int id; int name; } ;


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
 int VAR_11 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_request*,int ,int,int*) ;
 int FUNC_9 (struct hci_request*,struct hci_dev*) ;
 int FUNC_10 (struct hci_request*,int ) ;
 int FUNC_11 (struct hci_dev*) ;
 scalar_t__ FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_14 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_15 (struct mgmt_pending_cmd*) ;
 int FUNC_16 (struct hci_dev*,struct sock*) ;
 scalar_t__ FUNC_17 (int ,struct hci_dev*) ;
 int VAR_12 ;
 int FUNC_18 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_19(struct sock *VAR_13, struct hci_dev *VAR_14,
      void *VAR_15, u16 VAR_16)
{
 struct mgmt_mode *VAR_17 = VAR_15;
 struct mgmt_pending_cmd *VAR_18;
 struct hci_request VAR_19;
 u8 VAR_20;
 int VAR_21;

 FUNC_0("request for %s", VAR_14->name);

 if (!FUNC_12(VAR_14) &&
     !FUNC_6(VAR_14, VAR_2))
  return FUNC_13(VAR_13, VAR_14->id, VAR_7,
           VAR_10);

 if (FUNC_6(VAR_14, VAR_1) &&
     FUNC_12(VAR_14) &&
     !FUNC_6(VAR_14, VAR_6))
  return FUNC_13(VAR_13, VAR_14->id, VAR_7,
           VAR_11);

 if (VAR_17->val != 0x00 && VAR_17->val != 0x01 && VAR_17->val != 0x02)
  return FUNC_13(VAR_13, VAR_14->id, VAR_7,
      VAR_9);

 FUNC_2(VAR_14);

 if (!FUNC_11(VAR_14) || !FUNC_12(VAR_14) ||
     !FUNC_6(VAR_14, VAR_1)) {
  bool VAR_22;

  if (VAR_17->val) {
   VAR_22 = !FUNC_5(VAR_14,
            VAR_4);
   if (VAR_17->val == 0x02)
    FUNC_3(VAR_14, VAR_5);
   else
    FUNC_1(VAR_14, VAR_5);
  } else {
   VAR_22 = FUNC_4(VAR_14,
             VAR_4);
   FUNC_1(VAR_14, VAR_5);
  }

  VAR_21 = FUNC_18(VAR_13, VAR_7, VAR_14);
  if (VAR_21 < 0)
   goto failed;

  if (VAR_22)
   VAR_21 = FUNC_16(VAR_14, VAR_13);

  goto failed;
 }

 if (FUNC_17(VAR_7, VAR_14)) {
  VAR_21 = FUNC_13(VAR_13, VAR_14->id, VAR_7,
          VAR_8);
  goto failed;
 }

 VAR_20 = !!VAR_17->val;

 if (VAR_20 == FUNC_6(VAR_14, VAR_4) &&
     (VAR_17->val == 0x02) == FUNC_6(VAR_14, VAR_5)) {
  VAR_21 = FUNC_18(VAR_13, VAR_7, VAR_14);
  goto failed;
 }

 VAR_18 = FUNC_14(VAR_13, VAR_7, VAR_14, VAR_15, VAR_16);
 if (!VAR_18) {
  VAR_21 = -VAR_0;
  goto failed;
 }

 FUNC_9(&VAR_19, VAR_14);
 FUNC_8(&VAR_19, VAR_3, 1, &VAR_20);
 VAR_21 = FUNC_10(&VAR_19, VAR_12);
 if (VAR_21 < 0) {
  FUNC_15(VAR_18);
  goto failed;
 }

failed:
 FUNC_7(VAR_14);
 return VAR_21;
}
