
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_mode {int val; } ;
struct hci_request {int dummy; } ;
struct hci_dev {scalar_t__ hci_ver; int id; int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct hci_request*,int) ;
 int VAR_9 ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_request*,struct hci_dev*) ;
 int FUNC_7 (struct hci_request*,int ) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_10 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_11 (struct mgmt_pending_cmd*) ;
 int FUNC_12 (struct hci_dev*,struct sock*) ;
 scalar_t__ FUNC_13 (int ,struct hci_dev*) ;
 int FUNC_14 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_10, struct hci_dev *VAR_11,
    void *VAR_12, u16 VAR_13)
{
 struct mgmt_mode *VAR_14 = VAR_12;
 struct mgmt_pending_cmd *VAR_15;
 struct hci_request VAR_16;
 int VAR_17;

 FUNC_0("%s", VAR_11->name);

 if (!FUNC_4(VAR_11, VAR_2) ||
     VAR_11->hci_ver < VAR_0)
  return FUNC_9(VAR_10, VAR_11->id, VAR_4,
           VAR_8);

 if (VAR_14->val != 0x00 && VAR_14->val != 0x01)
  return FUNC_9(VAR_10, VAR_11->id, VAR_4,
           VAR_7);

 FUNC_3(VAR_11);

 if (FUNC_13(VAR_4, VAR_11)) {
  VAR_17 = FUNC_9(VAR_10, VAR_11->id, VAR_4,
          VAR_5);
  goto unlock;
 }

 if (!!VAR_14->val == FUNC_4(VAR_11, VAR_3)) {
  VAR_17 = FUNC_14(VAR_10, VAR_4,
     VAR_11);
  goto unlock;
 }

 if (!FUNC_8(VAR_11)) {
  FUNC_2(VAR_11, VAR_3);
  VAR_17 = FUNC_14(VAR_10, VAR_4,
     VAR_11);
  FUNC_12(VAR_11, VAR_10);
  goto unlock;
 }

 VAR_15 = FUNC_10(VAR_10, VAR_4, VAR_11,
          VAR_12, VAR_13);
 if (!VAR_15) {
  VAR_17 = -VAR_1;
  goto unlock;
 }

 FUNC_6(&VAR_16, VAR_11);

 FUNC_1(&VAR_16, VAR_14->val);

 VAR_17 = FUNC_7(&VAR_16, VAR_9);
 if (VAR_17 < 0) {
  VAR_17 = FUNC_9(VAR_10, VAR_11->id, VAR_4,
          VAR_6);
  FUNC_11(VAR_15);
 }

unlock:
 FUNC_5(VAR_11);

 return VAR_17;
}
