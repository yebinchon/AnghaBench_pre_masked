
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_mode {int val; } ;
struct hci_dev {int flags; int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,int ,int,int*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct sock*,int ,int ,int) ;
 struct mgmt_pending_cmd* FUNC_9 (struct sock*,int ,struct hci_dev*,void*,int ) ;
 int FUNC_10 (struct mgmt_pending_cmd*) ;
 int FUNC_11 (struct hci_dev*,struct sock*) ;
 scalar_t__ FUNC_12 (int ,struct hci_dev*) ;
 int FUNC_13 (struct sock*,int ,struct hci_dev*) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_7, struct hci_dev *VAR_8, void *VAR_9,
        u16 VAR_10)
{
 struct mgmt_mode *VAR_11 = VAR_9;
 struct mgmt_pending_cmd *VAR_12;
 u8 VAR_13, VAR_14;
 int VAR_15;

 FUNC_0("request for %s", VAR_8->name);

 VAR_14 = FUNC_7(VAR_8);
 if (VAR_14)
  return FUNC_8(VAR_7, VAR_8->id, VAR_4,
           VAR_14);

 if (VAR_11->val != 0x00 && VAR_11->val != 0x01)
  return FUNC_8(VAR_7, VAR_8->id, VAR_4,
           VAR_6);

 FUNC_2(VAR_8);

 if (!FUNC_6(VAR_8)) {
  bool VAR_16 = 0;

  if (!!VAR_11->val != FUNC_3(VAR_8, VAR_2)) {
   FUNC_1(VAR_8, VAR_2);
   VAR_16 = 1;
  }

  VAR_15 = FUNC_13(VAR_7, VAR_4, VAR_8);
  if (VAR_15 < 0)
   goto failed;

  if (VAR_16)
   VAR_15 = FUNC_11(VAR_8, VAR_7);

  goto failed;
 }

 if (FUNC_12(VAR_4, VAR_8)) {
  VAR_15 = FUNC_8(VAR_7, VAR_8->id, VAR_4,
          VAR_5);
  goto failed;
 }

 VAR_13 = !!VAR_11->val;

 if (FUNC_14(VAR_1, &VAR_8->flags) == VAR_13) {
  VAR_15 = FUNC_13(VAR_7, VAR_4, VAR_8);
  goto failed;
 }

 VAR_12 = FUNC_9(VAR_7, VAR_4, VAR_8, VAR_9, VAR_10);
 if (!VAR_12) {
  VAR_15 = -VAR_0;
  goto failed;
 }

 VAR_15 = FUNC_5(VAR_8, VAR_3, sizeof(VAR_13), &VAR_13);
 if (VAR_15 < 0) {
  FUNC_10(VAR_12);
  goto failed;
 }

failed:
 FUNC_4(VAR_8);
 return VAR_15;
}
