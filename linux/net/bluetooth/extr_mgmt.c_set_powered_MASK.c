
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_mode {int val; } ;
struct TYPE_3__ {int work; } ;
struct hci_dev {TYPE_1__ power_off; int req_workqueue; int power_on; int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_7 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 scalar_t__ FUNC_8 (int ,struct hci_dev*) ;
 int FUNC_9 (int ,TYPE_1__*,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_6, struct hci_dev *VAR_7, void *VAR_8,
         u16 VAR_9)
{
 struct mgmt_mode *VAR_10 = VAR_8;
 struct mgmt_pending_cmd *VAR_11;
 int VAR_12;

 FUNC_0("request for %s", VAR_7->name);

 if (VAR_10->val != 0x00 && VAR_10->val != 0x01)
  return FUNC_6(VAR_6, VAR_7->id, VAR_3,
           VAR_5);

 FUNC_3(VAR_7);

 if (FUNC_8(VAR_3, VAR_7)) {
  VAR_12 = FUNC_6(VAR_6, VAR_7->id, VAR_3,
          VAR_4);
  goto failed;
 }

 if (!!VAR_10->val == FUNC_5(VAR_7)) {
  VAR_12 = FUNC_11(VAR_6, VAR_3, VAR_7);
  goto failed;
 }

 VAR_11 = FUNC_7(VAR_6, VAR_3, VAR_7, VAR_8, VAR_9);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto failed;
 }

 if (VAR_10->val) {
  FUNC_10(VAR_7->req_workqueue, &VAR_7->power_on);
  VAR_12 = 0;
 } else {

  VAR_12 = FUNC_2(VAR_7);
  if (!VAR_12)
   FUNC_9(VAR_7->req_workqueue, &VAR_7->power_off,
        VAR_2);


  if (VAR_12 == -VAR_0) {
   FUNC_1(&VAR_7->power_off);
   FUNC_10(VAR_7->req_workqueue, &VAR_7->power_off.work);
   VAR_12 = 0;
  }
 }

failed:
 FUNC_4(VAR_7);
 return VAR_12;
}
