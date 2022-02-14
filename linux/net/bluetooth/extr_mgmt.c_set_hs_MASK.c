
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_mode {int val; } ;
struct hci_dev {int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 scalar_t__ FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 scalar_t__ FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct sock*,int ,int ,scalar_t__) ;
 int FUNC_10 (struct hci_dev*,struct sock*) ;
 scalar_t__ FUNC_11 (int ,struct hci_dev*) ;
 int FUNC_12 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_8, struct hci_dev *VAR_9, void *VAR_10, u16 VAR_11)
{
 struct mgmt_mode *VAR_12 = VAR_10;
 bool VAR_13;
 u8 VAR_14;
 int VAR_15;

 FUNC_0("request for %s", VAR_9->name);

 VAR_14 = FUNC_8(VAR_9);
 if (VAR_14)
  return FUNC_9(VAR_8, VAR_9->id, VAR_2, VAR_14);

 if (!FUNC_7(VAR_9))
  return FUNC_9(VAR_8, VAR_9->id, VAR_2,
           VAR_6);

 if (!FUNC_4(VAR_9, VAR_1))
  return FUNC_9(VAR_8, VAR_9->id, VAR_2,
           VAR_7);

 if (VAR_12->val != 0x00 && VAR_12->val != 0x01)
  return FUNC_9(VAR_8, VAR_9->id, VAR_2,
           VAR_5);

 FUNC_1(VAR_9);

 if (FUNC_11(VAR_3, VAR_9)) {
  VAR_15 = FUNC_9(VAR_8, VAR_9->id, VAR_2,
          VAR_4);
  goto unlock;
 }

 if (VAR_12->val) {
  VAR_13 = !FUNC_3(VAR_9, VAR_0);
 } else {
  if (FUNC_6(VAR_9)) {
   VAR_15 = FUNC_9(VAR_8, VAR_9->id, VAR_2,
           VAR_7);
   goto unlock;
  }

  VAR_13 = FUNC_2(VAR_9, VAR_0);
 }

 VAR_15 = FUNC_12(VAR_8, VAR_2, VAR_9);
 if (VAR_15 < 0)
  goto unlock;

 if (VAR_13)
  VAR_15 = FUNC_10(VAR_9, VAR_8);

unlock:
 FUNC_5(VAR_9);
 return VAR_15;
}
