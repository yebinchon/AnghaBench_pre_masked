
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_rp_pair_device {TYPE_1__ addr; } ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;int user_data; } ;
struct TYPE_4__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_cp_pair_device {scalar_t__ io_cap; TYPE_2__ addr; } ;
struct hci_dev {int id; } ;
struct hci_conn_params {scalar_t__ auto_connect; } ;
struct hci_conn {scalar_t__ io_capability; scalar_t__ state; void* disconn_cfm_cb; void* security_cfm_cb; void* connect_cfm_cb; } ;
typedef int rp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct hci_conn*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct hci_conn*) ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int *,scalar_t__) ;
 int FUNC_6 (struct hci_conn*) ;
 int FUNC_7 (struct hci_conn*) ;
 struct hci_conn_params* FUNC_8 (struct hci_dev*,int *,int ) ;
 scalar_t__ FUNC_9 (struct hci_conn*,int ,int ,int) ;
 struct hci_conn* FUNC_10 (struct hci_dev*,int *,int ,int ) ;
 struct hci_conn* FUNC_11 (struct hci_dev*,int *,int ,int ,int ) ;
 int FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (struct hci_dev*) ;
 int FUNC_14 (struct hci_dev*) ;
 int FUNC_15 (scalar_t__) ;
 void* VAR_21 ;
 int FUNC_16 (struct mgmt_rp_pair_device*,int ,int) ;
 int FUNC_17 (struct sock*,int ,int ,int,struct mgmt_rp_pair_device*,int) ;
 struct mgmt_pending_cmd* FUNC_18 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_19 (struct mgmt_pending_cmd*) ;
 int FUNC_20 (struct mgmt_pending_cmd*,int ) ;
 void* VAR_22 ;
 int FUNC_21 (struct mgmt_pending_cmd*,int ) ;

__attribute__((used)) static int FUNC_22(struct sock *VAR_23, struct hci_dev *VAR_24, void *VAR_25,
         u16 VAR_26)
{
 struct mgmt_cp_pair_device *VAR_27 = VAR_25;
 struct mgmt_rp_pair_device VAR_28;
 struct mgmt_pending_cmd *VAR_29;
 u8 VAR_30, VAR_31;
 struct hci_conn *VAR_32;
 int VAR_33;

 FUNC_0("");

 FUNC_16(&VAR_28, 0, sizeof(VAR_28));
 FUNC_3(&VAR_28.addr.bdaddr, &VAR_27->addr.bdaddr);
 VAR_28.addr.type = VAR_27->addr.type;

 if (!FUNC_4(VAR_27->addr.type))
  return FUNC_17(VAR_23, VAR_24->id, VAR_12,
      VAR_16,
      &VAR_28, sizeof(VAR_28));

 if (VAR_27->io_cap > VAR_20)
  return FUNC_17(VAR_23, VAR_24->id, VAR_12,
      VAR_16,
      &VAR_28, sizeof(VAR_28));

 FUNC_12(VAR_24);

 if (!FUNC_14(VAR_24)) {
  VAR_33 = FUNC_17(VAR_23, VAR_24->id, VAR_12,
     VAR_17, &VAR_28,
     sizeof(VAR_28));
  goto unlock;
 }

 if (FUNC_5(VAR_24, &VAR_27->addr.bdaddr, VAR_27->addr.type)) {
  VAR_33 = FUNC_17(VAR_23, VAR_24->id, VAR_12,
     VAR_13, &VAR_28,
     sizeof(VAR_28));
  goto unlock;
 }

 VAR_30 = VAR_3;
 VAR_31 = VAR_8;

 if (VAR_27->addr.type == VAR_0) {
  VAR_32 = FUNC_10(VAR_24, &VAR_27->addr.bdaddr, VAR_30,
           VAR_31);
 } else {
  u8 VAR_34 = FUNC_15(VAR_27->addr.type);
  struct hci_conn_params *VAR_35;
  VAR_35 = FUNC_8(VAR_24, &VAR_27->addr.bdaddr, VAR_34);

  if (VAR_35->auto_connect == VAR_10)
   VAR_35->auto_connect = VAR_9;

  VAR_32 = FUNC_11(VAR_24, &VAR_27->addr.bdaddr,
        VAR_34, VAR_30,
        VAR_11);
 }

 if (FUNC_1(VAR_32)) {
  int VAR_36;

  if (FUNC_2(VAR_32) == -VAR_4)
   VAR_36 = VAR_14;
  else if (FUNC_2(VAR_32) == -VAR_7)
   VAR_36 = VAR_18;
  else if (FUNC_2(VAR_32) == -VAR_5)
   VAR_36 = VAR_19;
  else
   VAR_36 = VAR_15;

  VAR_33 = FUNC_17(VAR_23, VAR_24->id, VAR_12,
     VAR_36, &VAR_28, sizeof(VAR_28));
  goto unlock;
 }

 if (VAR_32->connect_cfm_cb) {
  FUNC_6(VAR_32);
  VAR_33 = FUNC_17(VAR_23, VAR_24->id, VAR_12,
     VAR_14, &VAR_28, sizeof(VAR_28));
  goto unlock;
 }

 VAR_29 = FUNC_18(VAR_23, VAR_12, VAR_24, VAR_25, VAR_26);
 if (!VAR_29) {
  VAR_33 = -VAR_6;
  FUNC_6(VAR_32);
  goto unlock;
 }

 VAR_29->cmd_complete = FUNC_20;


 if (VAR_27->addr.type == VAR_0) {
  VAR_32->connect_cfm_cb = VAR_22;
  VAR_32->security_cfm_cb = VAR_22;
  VAR_32->disconn_cfm_cb = VAR_22;
 } else {
  VAR_32->connect_cfm_cb = VAR_21;
  VAR_32->security_cfm_cb = VAR_21;
  VAR_32->disconn_cfm_cb = VAR_21;
 }

 VAR_32->io_capability = VAR_27->io_cap;
 VAR_29->user_data = FUNC_7(VAR_32);

 if ((VAR_32->state == VAR_2 || VAR_32->state == VAR_1) &&
     FUNC_9(VAR_32, VAR_30, VAR_31, 1)) {
  VAR_29->cmd_complete(VAR_29, 0);
  FUNC_19(VAR_29);
 }

 VAR_33 = 0;

unlock:
 FUNC_13(VAR_24);
 return VAR_33;
}
