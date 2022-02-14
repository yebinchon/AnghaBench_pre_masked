
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_cp_set_public_address {int bdaddr; } ;
struct hci_dev {int power_on; int req_workqueue; int public_addr; int id; int set_bdaddr; int name; } ;


 int * VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 scalar_t__ FUNC_8 (struct hci_dev*) ;
 scalar_t__ FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct sock*,int ,int ,int ) ;
 int FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (struct hci_dev*,struct sock*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_8, struct hci_dev *VAR_9,
         void *VAR_10, u16 VAR_11)
{
 struct mgmt_cp_set_public_address *VAR_12 = VAR_10;
 bool VAR_13;
 int VAR_14;

 FUNC_0("%s", VAR_9->name);

 if (FUNC_8(VAR_9))
  return FUNC_10(VAR_8, VAR_9->id, VAR_4,
           VAR_7);

 if (!FUNC_1(&VAR_12->bdaddr, VAR_0))
  return FUNC_10(VAR_8, VAR_9->id, VAR_4,
           VAR_5);

 if (!VAR_9->set_bdaddr)
  return FUNC_10(VAR_8, VAR_9->id, VAR_4,
           VAR_6);

 FUNC_4(VAR_9);

 VAR_13 = !!FUNC_1(&VAR_9->public_addr, &VAR_12->bdaddr);
 FUNC_2(&VAR_9->public_addr, &VAR_12->bdaddr);

 VAR_14 = FUNC_14(VAR_8, VAR_4, VAR_9);
 if (VAR_14 < 0)
  goto unlock;

 if (!VAR_13)
  goto unlock;

 if (FUNC_6(VAR_9, VAR_3))
  VAR_14 = FUNC_12(VAR_9, VAR_8);

 if (FUNC_9(VAR_9)) {
  FUNC_11(VAR_9);

  FUNC_3(VAR_9, VAR_3);

  FUNC_5(VAR_9, VAR_2);
  FUNC_5(VAR_9, VAR_1);

  FUNC_13(VAR_9->req_workqueue, &VAR_9->power_on);
 }

unlock:
 FUNC_7(VAR_9);
 return VAR_14;
}
