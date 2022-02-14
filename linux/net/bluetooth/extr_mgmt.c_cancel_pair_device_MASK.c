
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;struct hci_conn* user_data; } ;
struct mgmt_addr_info {int bdaddr; } ;
struct hci_dev {int id; } ;
struct hci_conn {int dst; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct sock*,int ,int ,int ,struct mgmt_addr_info*,int) ;
 int FUNC_6 (struct sock*,int ,int ,int ) ;
 int FUNC_7 (struct mgmt_pending_cmd*) ;
 struct mgmt_pending_cmd* FUNC_8 (int ,struct hci_dev*) ;
 int FUNC_9 (struct mgmt_pending_cmd*,int ) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_5, struct hci_dev *VAR_6, void *VAR_7,
         u16 VAR_8)
{
 struct mgmt_addr_info *VAR_9 = VAR_7;
 struct mgmt_pending_cmd *VAR_10;
 struct hci_conn *VAR_11;
 int VAR_12;

 FUNC_0("");

 FUNC_2(VAR_6);

 if (!FUNC_4(VAR_6)) {
  VAR_12 = FUNC_6(VAR_5, VAR_6->id, VAR_0,
          VAR_4);
  goto unlock;
 }

 VAR_10 = FUNC_8(VAR_1, VAR_6);
 if (!VAR_10) {
  VAR_12 = FUNC_6(VAR_5, VAR_6->id, VAR_0,
          VAR_3);
  goto unlock;
 }

 VAR_11 = VAR_10->user_data;

 if (FUNC_1(&VAR_9->bdaddr, &VAR_11->dst) != 0) {
  VAR_12 = FUNC_6(VAR_5, VAR_6->id, VAR_0,
          VAR_3);
  goto unlock;
 }

 VAR_10->cmd_complete(VAR_10, VAR_2);
 FUNC_7(VAR_10);

 VAR_12 = FUNC_5(VAR_5, VAR_6->id, VAR_0, 0,
    VAR_9, sizeof(*VAR_9));
unlock:
 FUNC_3(VAR_6);
 return VAR_12;
}
