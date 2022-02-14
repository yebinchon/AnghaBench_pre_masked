
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_cp_set_local_name {int name; int short_name; } ;
struct hci_request {int dummy; } ;
struct hci_dev {int cur_adv_instance; int dev_name; int id; int short_name; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_request*) ;
 int FUNC_2 (struct hci_request*) ;
 int FUNC_3 (struct hci_request*,int ) ;
 int FUNC_4 (struct hci_dev*,struct sock*) ;
 int FUNC_5 (struct hci_dev*) ;
 scalar_t__ FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_request*,struct hci_dev*) ;
 int FUNC_9 (struct hci_request*,int ) ;
 int FUNC_10 (struct hci_dev*) ;
 scalar_t__ FUNC_11 (struct hci_dev*) ;
 scalar_t__ FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (struct sock*,int ,int ,int ,void*,int ) ;
 int FUNC_16 (int ,struct hci_dev*,void*,int ,int ,struct sock*) ;
 struct mgmt_pending_cmd* FUNC_17 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_18 (struct mgmt_pending_cmd*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_19(struct sock *VAR_6, struct hci_dev *VAR_7, void *VAR_8,
     u16 VAR_9)
{
 struct mgmt_cp_set_local_name *VAR_10 = VAR_8;
 struct mgmt_pending_cmd *VAR_11;
 struct hci_request VAR_12;
 int VAR_13;

 FUNC_0("");

 FUNC_5(VAR_7);




 if (!FUNC_13(VAR_7->dev_name, VAR_10->name, sizeof(VAR_7->dev_name)) &&
     !FUNC_13(VAR_7->short_name, VAR_10->short_name,
      sizeof(VAR_7->short_name))) {
  VAR_13 = FUNC_15(VAR_6, VAR_7->id, VAR_4, 0,
     VAR_8, VAR_9);
  goto failed;
 }

 FUNC_14(VAR_7->short_name, VAR_10->short_name, sizeof(VAR_7->short_name));

 if (!FUNC_10(VAR_7)) {
  FUNC_14(VAR_7->dev_name, VAR_10->name, sizeof(VAR_7->dev_name));

  VAR_13 = FUNC_15(VAR_6, VAR_7->id, VAR_4, 0,
     VAR_8, VAR_9);
  if (VAR_13 < 0)
   goto failed;

  VAR_13 = FUNC_16(VAR_3, VAR_7, VAR_8,
      VAR_9, VAR_2, VAR_6);
  FUNC_4(VAR_7, VAR_6);

  goto failed;
 }

 VAR_11 = FUNC_17(VAR_6, VAR_4, VAR_7, VAR_8, VAR_9);
 if (!VAR_11) {
  VAR_13 = -VAR_0;
  goto failed;
 }

 FUNC_14(VAR_7->dev_name, VAR_10->name, sizeof(VAR_7->dev_name));

 FUNC_8(&VAR_12, VAR_7);

 if (FUNC_11(VAR_7)) {
  FUNC_2(&VAR_12);
  FUNC_1(&VAR_12);
 }




 if (FUNC_12(VAR_7) && FUNC_6(VAR_7, VAR_1))
  FUNC_3(&VAR_12, VAR_7->cur_adv_instance);

 VAR_13 = FUNC_9(&VAR_12, VAR_5);
 if (VAR_13 < 0)
  FUNC_18(VAR_11);

failed:
 FUNC_7(VAR_7);
 return VAR_13;
}
