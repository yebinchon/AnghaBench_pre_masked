
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_ev_pin_code_req {int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {scalar_t__ state; scalar_t__ pending_sec_level; int flags; int disc_timeout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct hci_conn*) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int *) ;
 int FUNC_3 (struct hci_conn*) ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,int ,int,int *) ;
 int FUNC_8 (struct hci_dev*,int *,int) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct hci_dev *VAR_8, struct sk_buff *VAR_9)
{
 struct hci_ev_pin_code_req *VAR_10 = (void *) VAR_9->data;
 struct hci_conn *VAR_11;

 FUNC_0("%s", VAR_8->name);

 FUNC_4(VAR_8);

 VAR_11 = FUNC_2(VAR_8, VAR_0, &VAR_10->bdaddr);
 if (!VAR_11)
  goto unlock;

 if (VAR_11->state == VAR_1) {
  FUNC_3(VAR_11);
  VAR_11->disc_timeout = VAR_7;
  FUNC_1(VAR_11);
 }

 if (!FUNC_5(VAR_8, VAR_3) &&
     !FUNC_9(VAR_4, &VAR_11->flags)) {
  FUNC_7(VAR_8, VAR_6,
        sizeof(VAR_10->bdaddr), &VAR_10->bdaddr);
 } else if (FUNC_5(VAR_8, VAR_5)) {
  u8 VAR_12;

  if (VAR_11->pending_sec_level == VAR_2)
   VAR_12 = 1;
  else
   VAR_12 = 0;

  FUNC_8(VAR_8, &VAR_10->bdaddr, VAR_12);
 }

unlock:
 FUNC_6(VAR_8);
}
