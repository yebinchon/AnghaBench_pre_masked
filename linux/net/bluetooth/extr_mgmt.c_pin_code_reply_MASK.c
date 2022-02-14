
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int cmd_complete; } ;
struct TYPE_2__ {int bdaddr; } ;
struct mgmt_cp_pin_code_reply {int pin_len; TYPE_1__* pin_code; TYPE_1__ addr; } ;
struct mgmt_cp_pin_code_neg_reply {int addr; } ;
struct hci_dev {int id; } ;
struct hci_cp_pin_code_reply {int pin_len; int * pin_code; int bdaddr; } ;
struct hci_conn {scalar_t__ pending_sec_level; } ;
typedef int reply ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hci_dev*,char*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int *) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int ,int,struct hci_cp_pin_code_reply*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (int *,TYPE_1__*,int) ;
 int FUNC_9 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_10 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_11 (struct mgmt_pending_cmd*) ;
 int FUNC_12 (struct sock*,struct hci_dev*,struct mgmt_cp_pin_code_neg_reply*) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_9, struct hci_dev *VAR_10, void *VAR_11,
     u16 VAR_12)
{
 struct hci_conn *VAR_13;
 struct mgmt_cp_pin_code_reply *VAR_14 = VAR_11;
 struct hci_cp_pin_code_reply VAR_15;
 struct mgmt_pending_cmd *VAR_16;
 int VAR_17;

 FUNC_0("");

 FUNC_4(VAR_10);

 if (!FUNC_7(VAR_10)) {
  VAR_17 = FUNC_9(VAR_9, VAR_10->id, VAR_4,
          VAR_7);
  goto failed;
 }

 VAR_13 = FUNC_3(VAR_10, VAR_0, &VAR_14->addr.bdaddr);
 if (!VAR_13) {
  VAR_17 = FUNC_9(VAR_9, VAR_10->id, VAR_4,
          VAR_6);
  goto failed;
 }

 if (VAR_13->pending_sec_level == VAR_1 && VAR_14->pin_len != 16) {
  struct mgmt_cp_pin_code_neg_reply VAR_18;

  FUNC_8(&VAR_18.addr, &VAR_14->addr, sizeof(VAR_18.addr));

  FUNC_2(VAR_10, "PIN code is not 16 bytes long");

  VAR_17 = FUNC_12(VAR_9, VAR_10, &VAR_18);
  if (VAR_17 >= 0)
   VAR_17 = FUNC_9(VAR_9, VAR_10->id, VAR_4,
           VAR_5);

  goto failed;
 }

 VAR_16 = FUNC_10(VAR_9, VAR_4, VAR_10, VAR_11, VAR_12);
 if (!VAR_16) {
  VAR_17 = -VAR_2;
  goto failed;
 }

 VAR_16->cmd_complete = VAR_8;

 FUNC_1(&VAR_15.bdaddr, &VAR_14->addr.bdaddr);
 VAR_15.pin_len = VAR_14->pin_len;
 FUNC_8(VAR_15.pin_code, VAR_14->pin_code, sizeof(VAR_15.pin_code));

 VAR_17 = FUNC_6(VAR_10, VAR_3, sizeof(VAR_15), &VAR_15);
 if (VAR_17 < 0)
  FUNC_11(VAR_16);

failed:
 FUNC_5(VAR_10);
 return VAR_17;
}
