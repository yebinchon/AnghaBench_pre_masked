
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int cmd_complete; } ;
struct hci_cp_user_passkey_reply {int passkey; int bdaddr; } ;
struct mgmt_addr_info {scalar_t__ type; struct hci_cp_user_passkey_reply bdaddr; } ;
struct hci_dev {int id; } ;
struct hci_conn {int dummy; } ;
typedef int cp ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,struct hci_cp_user_passkey_reply*) ;
 struct hci_conn* FUNC_1 (struct hci_dev*,int ,struct hci_cp_user_passkey_reply*) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,struct hci_cp_user_passkey_reply*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,int ,int,struct hci_cp_user_passkey_reply*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sock*,int ,int ,int ,struct mgmt_addr_info*,int) ;
 struct mgmt_pending_cmd* FUNC_9 (struct sock*,int ,struct hci_dev*,struct mgmt_addr_info*,int) ;
 int FUNC_10 (struct mgmt_pending_cmd*) ;
 int FUNC_11 (struct hci_conn*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_11, struct hci_dev *VAR_12,
        struct mgmt_addr_info *VAR_13, u16 VAR_14,
        u16 VAR_15, __le32 VAR_16)
{
 struct mgmt_pending_cmd *VAR_17;
 struct hci_conn *VAR_18;
 int VAR_19;

 FUNC_3(VAR_12);

 if (!FUNC_6(VAR_12)) {
  VAR_19 = FUNC_8(VAR_11, VAR_12->id, VAR_14,
     VAR_8, VAR_13,
     sizeof(*VAR_13));
  goto done;
 }

 if (VAR_13->type == VAR_1)
  VAR_18 = FUNC_1(VAR_12, VAR_0, &VAR_13->bdaddr);
 else
  VAR_18 = FUNC_2(VAR_12, &VAR_13->bdaddr,
            FUNC_7(VAR_13->type));

 if (!VAR_18) {
  VAR_19 = FUNC_8(VAR_11, VAR_12->id, VAR_14,
     VAR_7, VAR_13,
     sizeof(*VAR_13));
  goto done;
 }

 if (VAR_13->type == VAR_2 || VAR_13->type == VAR_3) {
  VAR_19 = FUNC_11(VAR_18, VAR_14, VAR_16);
  if (!VAR_19)
   VAR_19 = FUNC_8(VAR_11, VAR_12->id, VAR_14,
      VAR_9, VAR_13,
      sizeof(*VAR_13));
  else
   VAR_19 = FUNC_8(VAR_11, VAR_12->id, VAR_14,
      VAR_6, VAR_13,
      sizeof(*VAR_13));

  goto done;
 }

 VAR_17 = FUNC_9(VAR_11, VAR_14, VAR_12, VAR_13, sizeof(*VAR_13));
 if (!VAR_17) {
  VAR_19 = -VAR_4;
  goto done;
 }

 VAR_17->cmd_complete = VAR_10;


 if (VAR_15 == VAR_5) {
  struct hci_cp_user_passkey_reply VAR_20;

  FUNC_0(&VAR_20.bdaddr, &VAR_13->bdaddr);
  VAR_20.passkey = VAR_16;
  VAR_19 = FUNC_5(VAR_12, VAR_15, sizeof(VAR_20), &VAR_20);
 } else
  VAR_19 = FUNC_5(VAR_12, VAR_15, sizeof(VAR_13->bdaddr),
       &VAR_13->bdaddr);

 if (VAR_19 < 0)
  FUNC_10(VAR_17);

done:
 FUNC_4(VAR_12);
 return VAR_19;
}
