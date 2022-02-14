
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
struct hci_cp_write_le_host_supported {int le; int simul; } ;
typedef int hci_cp ;


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
 int FUNC_1 (struct hci_request*) ;
 int FUNC_2 (struct hci_request*) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,int ) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_request*,int ,int,struct hci_cp_write_le_host_supported*) ;
 int FUNC_10 (struct hci_dev*,int *,int *,int,int) ;
 int FUNC_11 (struct hci_request*,struct hci_dev*) ;
 int FUNC_12 (struct hci_request*,int ) ;
 int FUNC_13 (struct hci_dev*) ;
 int VAR_12 ;
 int FUNC_14 (struct hci_dev*) ;
 int FUNC_15 (struct hci_dev*) ;
 int FUNC_16 (struct hci_cp_write_le_host_supported*,int ,int) ;
 int FUNC_17 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_18 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_19 (struct mgmt_pending_cmd*) ;
 int FUNC_20 (struct hci_dev*,struct sock*) ;
 scalar_t__ FUNC_21 (int ,struct hci_dev*) ;
 int FUNC_22 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_23(struct sock *VAR_13, struct hci_dev *VAR_14, void *VAR_15, u16 VAR_16)
{
 struct mgmt_mode *VAR_17 = VAR_15;
 struct hci_cp_write_le_host_supported VAR_18;
 struct mgmt_pending_cmd *VAR_19;
 struct hci_request VAR_20;
 int VAR_21;
 u8 VAR_22, VAR_23;

 FUNC_0("request for %s", VAR_14->name);

 if (!FUNC_15(VAR_14))
  return FUNC_17(VAR_13, VAR_14->id, VAR_7,
           VAR_10);

 if (VAR_17->val != 0x00 && VAR_17->val != 0x01)
  return FUNC_17(VAR_13, VAR_14->id, VAR_7,
           VAR_9);
 if (!FUNC_7(VAR_14, VAR_2)) {
  if (VAR_17->val == 0x01)
   return FUNC_22(VAR_13, VAR_7, VAR_14);

  return FUNC_17(VAR_13, VAR_14->id, VAR_7,
           VAR_11);
 }

 FUNC_6(VAR_14);

 VAR_22 = !!VAR_17->val;
 VAR_23 = FUNC_14(VAR_14);

 if (!VAR_22)
  FUNC_10(VAR_14, ((void*)0), ((void*)0), 0x00, 1);

 if (!FUNC_13(VAR_14) || VAR_22 == VAR_23) {
  bool VAR_24 = 0;

  if (VAR_22 != FUNC_7(VAR_14, VAR_4)) {
   FUNC_4(VAR_14, VAR_4);
   VAR_24 = 1;
  }

  if (!VAR_22 && FUNC_7(VAR_14, VAR_1)) {
   FUNC_5(VAR_14, VAR_1);
   VAR_24 = 1;
  }

  VAR_21 = FUNC_22(VAR_13, VAR_7, VAR_14);
  if (VAR_21 < 0)
   goto unlock;

  if (VAR_24)
   VAR_21 = FUNC_20(VAR_14, VAR_13);

  goto unlock;
 }

 if (FUNC_21(VAR_7, VAR_14) ||
     FUNC_21(VAR_6, VAR_14)) {
  VAR_21 = FUNC_17(VAR_13, VAR_14->id, VAR_7,
          VAR_8);
  goto unlock;
 }

 VAR_19 = FUNC_18(VAR_13, VAR_7, VAR_14, VAR_15, VAR_16);
 if (!VAR_19) {
  VAR_21 = -VAR_0;
  goto unlock;
 }

 FUNC_11(&VAR_20, VAR_14);

 FUNC_16(&VAR_18, 0, sizeof(VAR_18));

 if (VAR_22) {
  VAR_18.le = VAR_22;
  VAR_18.simul = 0x00;
 } else {
  if (FUNC_7(VAR_14, VAR_3))
   FUNC_2(&VAR_20);

  if (FUNC_3(VAR_14))
   FUNC_1(&VAR_20);
 }

 FUNC_9(&VAR_20, VAR_5, sizeof(VAR_18),
      &VAR_18);

 VAR_21 = FUNC_12(&VAR_20, VAR_12);
 if (VAR_21 < 0)
  FUNC_19(VAR_19);

unlock:
 FUNC_8(VAR_14);
 return VAR_21;
}
