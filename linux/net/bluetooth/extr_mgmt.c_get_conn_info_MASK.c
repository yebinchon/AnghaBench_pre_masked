
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_rp_get_conn_info {scalar_t__ tx_power; scalar_t__ max_tx_power; int rssi; TYPE_1__ addr; } ;
struct mgmt_pending_cmd {int cmd_complete; int user_data; } ;
struct TYPE_4__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_cp_get_conn_info {TYPE_2__ addr; } ;
struct hci_request {int dummy; } ;
struct hci_dev {unsigned long conn_info_min_age; int id; scalar_t__ conn_info_max_age; int name; } ;
struct hci_cp_read_tx_power {int type; void* handle; } ;
struct hci_cp_read_rssi {int type; void* handle; } ;
struct hci_conn {scalar_t__ state; scalar_t__ tx_power; scalar_t__ max_tx_power; int rssi; scalar_t__ conn_info_timestamp; int handle; } ;
typedef int rp ;
typedef int req_txp_cp ;
typedef int req_rssi_cp ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct hci_conn*) ;
 struct hci_conn* FUNC_6 (struct hci_dev*,int ,int *) ;
 int FUNC_7 (struct hci_conn*) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct hci_request*,int ,int,struct hci_cp_read_tx_power*) ;
 int FUNC_11 (struct hci_request*,struct hci_dev*) ;
 int FUNC_12 (struct hci_request*,int ) ;
 int FUNC_13 (struct hci_dev*) ;
 scalar_t__ VAR_16 ;
 int FUNC_14 (struct mgmt_rp_get_conn_info*,int ,int) ;
 int FUNC_15 (struct sock*,int ,int ,int ,struct mgmt_rp_get_conn_info*,int) ;
 struct mgmt_pending_cmd* FUNC_16 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 scalar_t__ FUNC_17 (unsigned long) ;
 scalar_t__ FUNC_18 (int ,struct hci_dev*,struct hci_conn*) ;
 unsigned long FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct sock *VAR_17, struct hci_dev *VAR_18, void *VAR_19,
    u16 VAR_20)
{
 struct mgmt_cp_get_conn_info *VAR_21 = VAR_19;
 struct mgmt_rp_get_conn_info VAR_22;
 struct hci_conn *VAR_23;
 unsigned long VAR_24;
 int VAR_25 = 0;

 FUNC_0("%s", VAR_18->name);

 FUNC_14(&VAR_22, 0, sizeof(VAR_22));
 FUNC_1(&VAR_22.addr.bdaddr, &VAR_21->addr.bdaddr);
 VAR_22.addr.type = VAR_21->addr.type;

 if (!FUNC_3(VAR_21->addr.type))
  return FUNC_15(VAR_17, VAR_18->id, VAR_8,
      VAR_10,
      &VAR_22, sizeof(VAR_22));

 FUNC_8(VAR_18);

 if (!FUNC_13(VAR_18)) {
  VAR_25 = FUNC_15(VAR_17, VAR_18->id, VAR_8,
     VAR_12, &VAR_22,
     sizeof(VAR_22));
  goto unlock;
 }

 if (VAR_21->addr.type == VAR_1)
  VAR_23 = FUNC_6(VAR_18, VAR_0,
            &VAR_21->addr.bdaddr);
 else
  VAR_23 = FUNC_6(VAR_18, VAR_7, &VAR_21->addr.bdaddr);

 if (!VAR_23 || VAR_23->state != VAR_2) {
  VAR_25 = FUNC_15(VAR_17, VAR_18->id, VAR_8,
     VAR_11, &VAR_22,
     sizeof(VAR_22));
  goto unlock;
 }

 if (FUNC_18(VAR_8, VAR_18, VAR_23)) {
  VAR_25 = FUNC_15(VAR_17, VAR_18->id, VAR_8,
     VAR_9, &VAR_22, sizeof(VAR_22));
  goto unlock;
 }




 VAR_24 = VAR_18->conn_info_min_age +
   FUNC_19(VAR_18->conn_info_max_age -
     VAR_18->conn_info_min_age);




 if (FUNC_20(VAR_16, VAR_23->conn_info_timestamp +
         FUNC_17(VAR_24)) ||
     !VAR_23->conn_info_timestamp) {
  struct hci_request VAR_26;
  struct hci_cp_read_tx_power VAR_27;
  struct hci_cp_read_rssi VAR_28;
  struct mgmt_pending_cmd *VAR_29;

  FUNC_11(&VAR_26, VAR_18);
  VAR_28.handle = FUNC_4(VAR_23->handle);
  FUNC_10(&VAR_26, VAR_4, sizeof(VAR_28),
       &VAR_28);




  if (!FUNC_2(VAR_21->addr.type) ||
      VAR_23->tx_power == VAR_6) {
   VAR_27.handle = FUNC_4(VAR_23->handle);
   VAR_27.type = 0x00;
   FUNC_10(&VAR_26, VAR_5,
        sizeof(VAR_27), &VAR_27);
  }


  if (VAR_23->max_tx_power == VAR_6) {
   VAR_27.handle = FUNC_4(VAR_23->handle);
   VAR_27.type = 0x01;
   FUNC_10(&VAR_26, VAR_5,
        sizeof(VAR_27), &VAR_27);
  }

  VAR_25 = FUNC_12(&VAR_26, VAR_15);
  if (VAR_25 < 0)
   goto unlock;

  VAR_29 = FUNC_16(VAR_17, VAR_8, VAR_18,
           VAR_19, VAR_20);
  if (!VAR_29) {
   VAR_25 = -VAR_3;
   goto unlock;
  }

  FUNC_7(VAR_23);
  VAR_29->user_data = FUNC_5(VAR_23);
  VAR_29->cmd_complete = VAR_14;

  VAR_23->conn_info_timestamp = VAR_16;
 } else {

  VAR_22.rssi = VAR_23->rssi;
  VAR_22.tx_power = VAR_23->tx_power;
  VAR_22.max_tx_power = VAR_23->max_tx_power;

  VAR_25 = FUNC_15(VAR_17, VAR_18->id, VAR_8,
     VAR_13, &VAR_22, sizeof(VAR_22));
 }

unlock:
 FUNC_9(VAR_18);
 return VAR_25;
}
