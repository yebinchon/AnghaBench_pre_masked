
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int cmd_complete; } ;
struct mgmt_cp_start_discovery {int type; } ;
struct TYPE_2__ {scalar_t__ state; int report_invalid_rssi; int limited; int type; } ;
struct hci_dev {int discov_update; int req_workqueue; TYPE_1__ discovery; int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hci_dev*,int ,int *) ;
 int VAR_7 ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct sock*,int ,int ,int ,int *,int) ;
 struct mgmt_pending_cmd* FUNC_9 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_8, struct hci_dev *VAR_9,
        u16 VAR_10, void *VAR_11, u16 VAR_12)
{
 struct mgmt_cp_start_discovery *VAR_13 = VAR_11;
 struct mgmt_pending_cmd *VAR_14;
 u8 VAR_15;
 int VAR_16;

 FUNC_0("%s", VAR_9->name);

 FUNC_2(VAR_9);

 if (!FUNC_7(VAR_9)) {
  VAR_16 = FUNC_8(VAR_8, VAR_9->id, VAR_10,
     VAR_6,
     &VAR_13->type, sizeof(VAR_13->type));
  goto failed;
 }

 if (VAR_9->discovery.state != VAR_1 ||
     FUNC_3(VAR_9, VAR_3)) {
  VAR_16 = FUNC_8(VAR_8, VAR_9->id, VAR_10, VAR_5,
     &VAR_13->type, sizeof(VAR_13->type));
  goto failed;
 }

 if (!FUNC_1(VAR_9, VAR_13->type, &VAR_15)) {
  VAR_16 = FUNC_8(VAR_8, VAR_9->id, VAR_10, VAR_15,
     &VAR_13->type, sizeof(VAR_13->type));
  goto failed;
 }




 FUNC_5(VAR_9);

 VAR_9->discovery.type = VAR_13->type;
 VAR_9->discovery.report_invalid_rssi = 0;
 if (VAR_10 == VAR_4)
  VAR_9->discovery.limited = 1;
 else
  VAR_9->discovery.limited = 0;

 VAR_14 = FUNC_9(VAR_8, VAR_10, VAR_9, VAR_11, VAR_12);
 if (!VAR_14) {
  VAR_16 = -VAR_2;
  goto failed;
 }

 VAR_14->cmd_complete = VAR_7;

 FUNC_6(VAR_9, VAR_0);
 FUNC_10(VAR_9->req_workqueue, &VAR_9->discov_update);
 VAR_16 = 0;

failed:
 FUNC_4(VAR_9);
 return VAR_16;
}
