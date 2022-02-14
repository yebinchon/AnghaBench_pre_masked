
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_rp_get_clock_info {int which; int handle; TYPE_1__ addr; } ;
struct mgmt_pending_cmd {int user_data; int cmd_complete; } ;
struct TYPE_4__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_cp_get_clock_info {TYPE_2__ addr; } ;
struct hci_request {int dummy; } ;
struct hci_dev {int id; int name; } ;
struct hci_cp_read_clock {int which; int handle; TYPE_1__ addr; } ;
struct hci_conn {scalar_t__ state; int handle; } ;
typedef int rp ;
typedef int hci_cp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (struct hci_conn*) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int ,int *) ;
 int FUNC_6 (struct hci_conn*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_request*,int ,int,struct mgmt_rp_get_clock_info*) ;
 int FUNC_10 (struct hci_request*,struct hci_dev*) ;
 int FUNC_11 (struct hci_request*,int ) ;
 int FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (struct mgmt_rp_get_clock_info*,int ,int) ;
 int FUNC_14 (struct sock*,int ,int ,int ,struct mgmt_rp_get_clock_info*,int) ;
 struct mgmt_pending_cmd* FUNC_15 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_16 (struct mgmt_pending_cmd*) ;

__attribute__((used)) static int FUNC_17(struct sock *VAR_12, struct hci_dev *VAR_13, void *VAR_14,
    u16 VAR_15)
{
 struct mgmt_cp_get_clock_info *VAR_16 = VAR_14;
 struct mgmt_rp_get_clock_info VAR_17;
 struct hci_cp_read_clock VAR_18;
 struct mgmt_pending_cmd *VAR_19;
 struct hci_request VAR_20;
 struct hci_conn *VAR_21;
 int VAR_22;

 FUNC_0("%s", VAR_13->name);

 FUNC_13(&VAR_17, 0, sizeof(VAR_17));
 FUNC_2(&VAR_17.addr.bdaddr, &VAR_16->addr.bdaddr);
 VAR_17.addr.type = VAR_16->addr.type;

 if (VAR_16->addr.type != VAR_2)
  return FUNC_14(VAR_12, VAR_13->id, VAR_6,
      VAR_7,
      &VAR_17, sizeof(VAR_17));

 FUNC_7(VAR_13);

 if (!FUNC_12(VAR_13)) {
  VAR_22 = FUNC_14(VAR_12, VAR_13->id, VAR_6,
     VAR_9, &VAR_17,
     sizeof(VAR_17));
  goto unlock;
 }

 if (FUNC_1(&VAR_16->addr.bdaddr, VAR_1)) {
  VAR_21 = FUNC_5(VAR_13, VAR_0,
            &VAR_16->addr.bdaddr);
  if (!VAR_21 || VAR_21->state != VAR_3) {
   VAR_22 = FUNC_14(VAR_12, VAR_13->id,
      VAR_6,
      VAR_8,
      &VAR_17, sizeof(VAR_17));
   goto unlock;
  }
 } else {
  VAR_21 = ((void*)0);
 }

 VAR_19 = FUNC_15(VAR_12, VAR_6, VAR_13, VAR_14, VAR_15);
 if (!VAR_19) {
  VAR_22 = -VAR_4;
  goto unlock;
 }

 VAR_19->cmd_complete = VAR_10;

 FUNC_10(&VAR_20, VAR_13);

 FUNC_13(&VAR_18, 0, sizeof(VAR_18));
 FUNC_9(&VAR_20, VAR_5, sizeof(VAR_18), &VAR_18);

 if (VAR_21) {
  FUNC_6(VAR_21);
  VAR_19->user_data = FUNC_4(VAR_21);

  VAR_18.handle = FUNC_3(VAR_21->handle);
  VAR_18.which = 0x01;
  FUNC_9(&VAR_20, VAR_5, sizeof(VAR_18), &VAR_18);
 }

 VAR_22 = FUNC_11(&VAR_20, VAR_11);
 if (VAR_22 < 0)
  FUNC_16(VAR_19);

unlock:
 FUNC_8(VAR_13);
 return VAR_22;
}
