
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_cp_add_uuid {int uuid; int svc_hint; } ;
struct hci_request {int dummy; } ;
struct hci_dev {int dev_class; int id; int uuids; int name; } ;
struct bt_uuid {int list; int size; int svc_hint; int uuid; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_request*) ;
 int FUNC_2 (struct hci_request*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_request*,struct hci_dev*) ;
 int FUNC_7 (struct hci_request*,int ) ;
 struct bt_uuid* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct sock*,int ,int ,int ,int ,int) ;
 int FUNC_12 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_13 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 scalar_t__ FUNC_14 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_6, struct hci_dev *VAR_7, void *VAR_8, u16 VAR_9)
{
 struct mgmt_cp_add_uuid *VAR_10 = VAR_8;
 struct mgmt_pending_cmd *VAR_11;
 struct hci_request VAR_12;
 struct bt_uuid *VAR_13;
 int VAR_14;

 FUNC_0("request for %s", VAR_7->name);

 FUNC_4(VAR_7);

 if (FUNC_14(VAR_7)) {
  VAR_14 = FUNC_12(VAR_6, VAR_7->id, VAR_3,
          VAR_4);
  goto failed;
 }

 VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  VAR_14 = -VAR_1;
  goto failed;
 }

 FUNC_10(VAR_13->uuid, VAR_10->uuid, 16);
 VAR_13->svc_hint = VAR_10->svc_hint;
 VAR_13->size = FUNC_3(VAR_10->uuid);

 FUNC_9(&VAR_13->list, &VAR_7->uuids);

 FUNC_6(&VAR_12, VAR_7);

 FUNC_1(&VAR_12);
 FUNC_2(&VAR_12);

 VAR_14 = FUNC_7(&VAR_12, VAR_5);
 if (VAR_14 < 0) {
  if (VAR_14 != -VAR_0)
   goto failed;

  VAR_14 = FUNC_11(VAR_6, VAR_7->id, VAR_3, 0,
     VAR_7->dev_class, 3);
  goto failed;
 }

 VAR_11 = FUNC_13(VAR_6, VAR_3, VAR_7, VAR_8, VAR_9);
 if (!VAR_11) {
  VAR_14 = -VAR_1;
  goto failed;
 }

 VAR_14 = 0;

failed:
 FUNC_5(VAR_7);
 return VAR_14;
}
