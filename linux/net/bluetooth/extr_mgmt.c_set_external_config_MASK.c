
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_cp_set_external_config {int config; } ;
struct hci_dev {int flags; int power_on; int req_workqueue; int id; int quirks; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 scalar_t__ FUNC_8 (struct hci_dev*) ;
 scalar_t__ FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct sock*,int ,int ,int ) ;
 int FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (struct hci_dev*,struct sock*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct sock*,int ,struct hci_dev*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static int FUNC_18(struct sock *VAR_10, struct hci_dev *VAR_11,
          void *VAR_12, u16 VAR_13)
{
 struct mgmt_cp_set_external_config *VAR_14 = VAR_12;
 bool VAR_15;
 int VAR_16;

 FUNC_0("%s", VAR_11->name);

 if (FUNC_8(VAR_11))
  return FUNC_10(VAR_10, VAR_11->id, VAR_6,
           VAR_9);

 if (VAR_14->config != 0x00 && VAR_14->config != 0x01)
  return FUNC_10(VAR_10, VAR_11->id, VAR_6,
             VAR_7);

 if (!FUNC_17(VAR_3, &VAR_11->quirks))
  return FUNC_10(VAR_10, VAR_11->id, VAR_6,
           VAR_8);

 FUNC_1(VAR_11);

 if (VAR_14->config)
  VAR_15 = !FUNC_5(VAR_11, VAR_2);
 else
  VAR_15 = FUNC_4(VAR_11, VAR_2);

 VAR_16 = FUNC_15(VAR_10, VAR_6, VAR_11);
 if (VAR_16 < 0)
  goto unlock;

 if (!VAR_15)
  goto unlock;

 VAR_16 = FUNC_13(VAR_11, VAR_10);

 if (FUNC_6(VAR_11, VAR_5) == FUNC_9(VAR_11)) {
  FUNC_12(VAR_11);

  if (FUNC_3(VAR_11, VAR_5)) {
   FUNC_2(VAR_11, VAR_1);
   FUNC_2(VAR_11, VAR_0);

   FUNC_14(VAR_11->req_workqueue, &VAR_11->power_on);
  } else {
   FUNC_16(VAR_4, &VAR_11->flags);
   FUNC_11(VAR_11);
  }
 }

unlock:
 FUNC_7(VAR_11);
 return VAR_16;
}
