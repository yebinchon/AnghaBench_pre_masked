
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
struct mgmt_rp_unpair_device {TYPE_1__ addr; } ;
struct mgmt_pending_cmd {int cmd_complete; } ;
struct TYPE_4__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_cp_unpair_device {int disconnect; TYPE_2__ addr; } ;
struct hci_dev {int id; } ;
struct hci_conn_params {int auto_connect; scalar_t__ explicit_connect; } ;
struct hci_conn {int flags; } ;
typedef int rp ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hci_dev*,int *,scalar_t__,struct sock*) ;
 int FUNC_3 (struct hci_conn*,int ) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,int ,int *) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int *,int ) ;
 int FUNC_6 (struct hci_dev*,int *,int ) ;
 struct hci_conn_params* FUNC_7 (struct hci_dev*,int *,int ) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct hci_dev*,int *) ;
 int FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct mgmt_rp_unpair_device*,int ,int) ;
 int FUNC_14 (struct sock*,int ,int ,int ,struct mgmt_rp_unpair_device*,int) ;
 struct mgmt_pending_cmd* FUNC_15 (struct sock*,int ,struct hci_dev*,struct mgmt_cp_unpair_device*,int) ;
 int FUNC_16 (struct mgmt_pending_cmd*) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (struct hci_dev*,int *,int ) ;

__attribute__((used)) static int FUNC_19(struct sock *VAR_12, struct hci_dev *VAR_13, void *VAR_14,
    u16 VAR_15)
{
 struct mgmt_cp_unpair_device *VAR_16 = VAR_14;
 struct mgmt_rp_unpair_device VAR_17;
 struct hci_conn_params *VAR_18;
 struct mgmt_pending_cmd *VAR_19;
 struct hci_conn *VAR_20;
 u8 VAR_21;
 int VAR_22;

 FUNC_13(&VAR_17, 0, sizeof(VAR_17));
 FUNC_0(&VAR_17.addr.bdaddr, &VAR_16->addr.bdaddr);
 VAR_17.addr.type = VAR_16->addr.type;

 if (!FUNC_1(VAR_16->addr.type))
  return FUNC_14(VAR_12, VAR_13->id, VAR_7,
      VAR_8,
      &VAR_17, sizeof(VAR_17));

 if (VAR_16->disconnect != 0x00 && VAR_16->disconnect != 0x01)
  return FUNC_14(VAR_12, VAR_13->id, VAR_7,
      VAR_8,
      &VAR_17, sizeof(VAR_17));

 FUNC_8(VAR_13);

 if (!FUNC_11(VAR_13)) {
  VAR_22 = FUNC_14(VAR_12, VAR_13->id, VAR_7,
     VAR_10, &VAR_17,
     sizeof(VAR_17));
  goto unlock;
 }

 if (VAR_16->addr.type == VAR_1) {







  if (VAR_16->disconnect)
   VAR_20 = FUNC_4(VAR_13, VAR_0,
             &VAR_16->addr.bdaddr);
  else
   VAR_20 = ((void*)0);

  VAR_22 = FUNC_10(VAR_13, &VAR_16->addr.bdaddr);
  if (VAR_22 < 0) {
   VAR_22 = FUNC_14(VAR_12, VAR_13->id,
      VAR_7,
      VAR_9, &VAR_17,
      sizeof(VAR_17));
   goto unlock;
  }

  goto done;
 }


 VAR_21 = FUNC_12(VAR_16->addr.type);


 VAR_22 = FUNC_18(VAR_13, &VAR_16->addr.bdaddr, VAR_21);
 if (VAR_22 < 0) {
  VAR_22 = FUNC_14(VAR_12, VAR_13->id, VAR_7,
     VAR_9, &VAR_17,
     sizeof(VAR_17));
  goto unlock;
 }

 VAR_20 = FUNC_5(VAR_13, &VAR_16->addr.bdaddr, VAR_21);
 if (!VAR_20) {
  FUNC_6(VAR_13, &VAR_16->addr.bdaddr, VAR_21);
  goto done;
 }





 FUNC_17(VAR_5, &VAR_20->flags);


 VAR_18 = FUNC_7(VAR_13, &VAR_16->addr.bdaddr, VAR_21);
 if (VAR_18) {
  if (VAR_18->explicit_connect)
   VAR_18->auto_connect = VAR_4;
  else
   VAR_18->auto_connect = VAR_3;
 }




 if (!VAR_16->disconnect)
  VAR_20 = ((void*)0);

done:



 if (!VAR_20) {
  VAR_22 = FUNC_14(VAR_12, VAR_13->id, VAR_7, 0,
     &VAR_17, sizeof(VAR_17));
  FUNC_2(VAR_13, &VAR_16->addr.bdaddr, VAR_16->addr.type, VAR_12);
  goto unlock;
 }

 VAR_19 = FUNC_15(VAR_12, VAR_7, VAR_13, VAR_16,
          sizeof(*VAR_16));
 if (!VAR_19) {
  VAR_22 = -VAR_2;
  goto unlock;
 }

 VAR_19->cmd_complete = VAR_11;

 VAR_22 = FUNC_3(VAR_20, VAR_6);
 if (VAR_22 < 0)
  FUNC_16(VAR_19);

unlock:
 FUNC_9(VAR_13);
 return VAR_22;
}
