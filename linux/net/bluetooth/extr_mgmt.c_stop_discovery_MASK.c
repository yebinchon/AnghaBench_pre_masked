
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int cmd_complete; } ;
struct mgmt_cp_stop_discovery {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct hci_dev {int discov_update; int req_workqueue; int id; TYPE_1__ discovery; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct sock*,int ,int ,int ,scalar_t__*,int) ;
 struct mgmt_pending_cmd* FUNC_6 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_6, struct hci_dev *VAR_7, void *VAR_8,
     u16 VAR_9)
{
 struct mgmt_cp_stop_discovery *VAR_10 = VAR_8;
 struct mgmt_pending_cmd *VAR_11;
 int VAR_12;

 FUNC_0("%s", VAR_7->name);

 FUNC_1(VAR_7);

 if (!FUNC_3(VAR_7)) {
  VAR_12 = FUNC_5(VAR_6, VAR_7->id, VAR_2,
     VAR_4, &VAR_10->type,
     sizeof(VAR_10->type));
  goto unlock;
 }

 if (VAR_7->discovery.type != VAR_10->type) {
  VAR_12 = FUNC_5(VAR_6, VAR_7->id, VAR_2,
     VAR_3,
     &VAR_10->type, sizeof(VAR_10->type));
  goto unlock;
 }

 VAR_11 = FUNC_6(VAR_6, VAR_2, VAR_7, VAR_8, VAR_9);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto unlock;
 }

 VAR_11->cmd_complete = VAR_5;

 FUNC_4(VAR_7, VAR_0);
 FUNC_7(VAR_7->req_workqueue, &VAR_7->discov_update);
 VAR_12 = 0;

unlock:
 FUNC_2(VAR_7);
 return VAR_12;
}
