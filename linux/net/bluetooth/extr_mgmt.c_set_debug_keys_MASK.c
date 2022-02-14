
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_mode {int val; } ;
struct hci_dev {int id; int name; } ;
typedef int mode ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int ,int,int*) ;
 scalar_t__ FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct sock*,int ,int ,int ) ;
 int FUNC_9 (struct hci_dev*,struct sock*) ;
 int FUNC_10 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_6, struct hci_dev *VAR_7,
     void *VAR_8, u16 VAR_9)
{
 struct mgmt_mode *VAR_10 = VAR_8;
 bool VAR_11, VAR_12;
 int VAR_13;

 FUNC_0("request for %s", VAR_7->name);

 if (VAR_10->val != 0x00 && VAR_10->val != 0x01 && VAR_10->val != 0x02)
  return FUNC_8(VAR_6, VAR_7->id, VAR_4,
           VAR_5);

 FUNC_1(VAR_7);

 if (VAR_10->val)
  VAR_11 = !FUNC_3(VAR_7, VAR_0);
 else
  VAR_11 = FUNC_2(VAR_7,
            VAR_0);

 if (VAR_10->val == 0x02)
  VAR_12 = !FUNC_3(VAR_7,
        VAR_3);
 else
  VAR_12 = FUNC_2(VAR_7,
         VAR_3);

 if (FUNC_7(VAR_7) && VAR_12 &&
     FUNC_4(VAR_7, VAR_2)) {
  u8 VAR_14 = (VAR_10->val == 0x02) ? 0x01 : 0x00;
  FUNC_6(VAR_7, VAR_1,
        sizeof(VAR_14), &VAR_14);
 }

 VAR_13 = FUNC_10(VAR_6, VAR_4, VAR_7);
 if (VAR_13 < 0)
  goto unlock;

 if (VAR_11)
  VAR_13 = FUNC_9(VAR_7, VAR_6);

unlock:
 FUNC_5(VAR_7);
 return VAR_13;
}
