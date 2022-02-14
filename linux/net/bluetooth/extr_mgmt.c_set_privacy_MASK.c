
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_cp_set_privacy {int privacy; int irk; } ;
struct hci_dev {int irk; int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct hci_dev*,int) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 scalar_t__ FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (struct sock*,int ,int ,int ) ;
 int FUNC_13 (struct hci_dev*,struct sock*) ;
 int FUNC_14 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_8, struct hci_dev *VAR_9, void *VAR_10,
         u16 VAR_11)
{
 struct mgmt_cp_set_privacy *VAR_12 = VAR_10;
 bool VAR_13;
 int VAR_14;

 FUNC_0("request for %s", VAR_9->name);

 if (!FUNC_9(VAR_9))
  return FUNC_12(VAR_8, VAR_9->id, VAR_4,
           VAR_6);

 if (VAR_12->privacy != 0x00 && VAR_12->privacy != 0x01 && VAR_12->privacy != 0x02)
  return FUNC_12(VAR_8, VAR_9->id, VAR_4,
           VAR_5);

 if (FUNC_8(VAR_9))
  return FUNC_12(VAR_8, VAR_9->id, VAR_4,
           VAR_7);

 FUNC_3(VAR_9);




 FUNC_4(VAR_9, VAR_3);

 if (VAR_12->privacy) {
  VAR_13 = !FUNC_6(VAR_9, VAR_1);
  FUNC_10(VAR_9->irk, VAR_12->irk, sizeof(VAR_9->irk));
  FUNC_4(VAR_9, VAR_2);
  FUNC_1(VAR_9, 1);
  if (VAR_12->privacy == 0x02)
   FUNC_4(VAR_9, VAR_0);
  else
   FUNC_2(VAR_9, VAR_0);
 } else {
  VAR_13 = FUNC_5(VAR_9, VAR_1);
  FUNC_11(VAR_9->irk, 0, sizeof(VAR_9->irk));
  FUNC_2(VAR_9, VAR_2);
  FUNC_1(VAR_9, 0);
  FUNC_2(VAR_9, VAR_0);
 }

 VAR_14 = FUNC_14(VAR_8, VAR_4, VAR_9);
 if (VAR_14 < 0)
  goto unlock;

 if (VAR_13)
  VAR_14 = FUNC_13(VAR_9, VAR_8);

unlock:
 FUNC_7(VAR_9);
 return VAR_14;
}
