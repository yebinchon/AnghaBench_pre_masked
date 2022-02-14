
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct hci_request {int dummy; } ;
struct hci_dev {int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_request*,int ,int ,int *) ;
 int FUNC_5 (struct hci_request*,struct hci_dev*) ;
 int FUNC_6 (struct hci_request*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_10 (struct sock*,int ,struct hci_dev*,int *,int ) ;
 int FUNC_11 (struct mgmt_pending_cmd*) ;
 scalar_t__ FUNC_12 (int ,struct hci_dev*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_8, struct hci_dev *VAR_9,
          void *VAR_10, u16 VAR_11)
{
 struct mgmt_pending_cmd *VAR_12;
 struct hci_request VAR_13;
 int VAR_14;

 FUNC_0("%s", VAR_9->name);

 FUNC_2(VAR_9);

 if (!FUNC_7(VAR_9)) {
  VAR_14 = FUNC_9(VAR_8, VAR_9->id, VAR_3,
          VAR_5);
  goto unlock;
 }

 if (!FUNC_8(VAR_9)) {
  VAR_14 = FUNC_9(VAR_8, VAR_9->id, VAR_3,
          VAR_6);
  goto unlock;
 }

 if (FUNC_12(VAR_3, VAR_9)) {
  VAR_14 = FUNC_9(VAR_8, VAR_9->id, VAR_3,
          VAR_4);
  goto unlock;
 }

 VAR_12 = FUNC_10(VAR_8, VAR_3, VAR_9, ((void*)0), 0);
 if (!VAR_12) {
  VAR_14 = -VAR_0;
  goto unlock;
 }

 FUNC_5(&VAR_13, VAR_9);

 if (FUNC_1(VAR_9))
  FUNC_4(&VAR_13, VAR_2, 0, ((void*)0));
 else
  FUNC_4(&VAR_13, VAR_1, 0, ((void*)0));

 VAR_14 = FUNC_6(&VAR_13, VAR_7);
 if (VAR_14 < 0)
  FUNC_11(VAR_12);

unlock:
 FUNC_3(VAR_9);
 return VAR_14;
}
