
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_pin_code_reply {scalar_t__ status; int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_cp_pin_code_reply {int pin_len; int bdaddr; } ;
struct hci_conn {int pin_length; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 struct hci_conn* FUNC_1 (struct hci_dev*,int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 struct hci_cp_pin_code_reply* FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct hci_rp_pin_code_reply *VAR_5 = (void *) VAR_4->data;
 struct hci_cp_pin_code_reply *VAR_6;
 struct hci_conn *VAR_7;

 FUNC_0("%s status 0x%2.2x", VAR_3->name, VAR_5->status);

 FUNC_2(VAR_3);

 if (FUNC_3(VAR_3, VAR_1))
  FUNC_6(VAR_3, &VAR_5->bdaddr, VAR_5->status);

 if (VAR_5->status)
  goto unlock;

 VAR_6 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_6)
  goto unlock;

 VAR_7 = FUNC_1(VAR_3, VAR_0, &VAR_6->bdaddr);
 if (VAR_7)
  VAR_7->pin_length = VAR_6->pin_len;

unlock:
 FUNC_4(VAR_3);
}
