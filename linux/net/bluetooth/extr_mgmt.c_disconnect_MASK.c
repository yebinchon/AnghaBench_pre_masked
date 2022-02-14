
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_rp_disconnect {TYPE_1__ addr; } ;
struct mgmt_pending_cmd {int cmd_complete; } ;
struct TYPE_4__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_cp_disconnect {TYPE_2__ addr; } ;
struct hci_dev {int id; int flags; } ;
struct hci_conn {scalar_t__ state; } ;
typedef int rp ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_12 ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int *) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,int *,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_conn*,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct mgmt_rp_disconnect*,int ,int) ;
 int FUNC_10 (struct sock*,int ,int ,int ,struct mgmt_rp_disconnect*,int) ;
 struct mgmt_pending_cmd* FUNC_11 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_12 (struct mgmt_pending_cmd*) ;
 scalar_t__ FUNC_13 (int ,struct hci_dev*) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_13, struct hci_dev *VAR_14, void *VAR_15,
        u16 VAR_16)
{
 struct mgmt_cp_disconnect *VAR_17 = VAR_15;
 struct mgmt_rp_disconnect VAR_18;
 struct mgmt_pending_cmd *VAR_19;
 struct hci_conn *VAR_20;
 int VAR_21;

 FUNC_0("");

 FUNC_9(&VAR_18, 0, sizeof(VAR_18));
 FUNC_1(&VAR_18.addr.bdaddr, &VAR_17->addr.bdaddr);
 VAR_18.addr.type = VAR_17->addr.type;

 if (!FUNC_2(VAR_17->addr.type))
  return FUNC_10(VAR_13, VAR_14->id, VAR_7,
      VAR_9,
      &VAR_18, sizeof(VAR_18));

 FUNC_5(VAR_14);

 if (!FUNC_14(VAR_6, &VAR_14->flags)) {
  VAR_21 = FUNC_10(VAR_13, VAR_14->id, VAR_7,
     VAR_11, &VAR_18,
     sizeof(VAR_18));
  goto failed;
 }

 if (FUNC_13(VAR_7, VAR_14)) {
  VAR_21 = FUNC_10(VAR_13, VAR_14->id, VAR_7,
     VAR_8, &VAR_18, sizeof(VAR_18));
  goto failed;
 }

 if (VAR_17->addr.type == VAR_1)
  VAR_20 = FUNC_3(VAR_14, VAR_0,
            &VAR_17->addr.bdaddr);
 else
  VAR_20 = FUNC_4(VAR_14, &VAR_17->addr.bdaddr,
            FUNC_8(VAR_17->addr.type));

 if (!VAR_20 || VAR_20->state == VAR_3 || VAR_20->state == VAR_2) {
  VAR_21 = FUNC_10(VAR_13, VAR_14->id, VAR_7,
     VAR_10, &VAR_18,
     sizeof(VAR_18));
  goto failed;
 }

 VAR_19 = FUNC_11(VAR_13, VAR_7, VAR_14, VAR_15, VAR_16);
 if (!VAR_19) {
  VAR_21 = -VAR_4;
  goto failed;
 }

 VAR_19->cmd_complete = VAR_12;

 VAR_21 = FUNC_7(VAR_20, VAR_5);
 if (VAR_21 < 0)
  FUNC_12(VAR_19);

failed:
 FUNC_6(VAR_14);
 return VAR_21;
}
