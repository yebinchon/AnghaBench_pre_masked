
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_pin_code_neg_reply {int status; int bdaddr; } ;
struct hci_dev {int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_rp_pin_code_neg_reply *VAR_3 = (void *) VAR_2->data;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3->status);

 FUNC_1(VAR_1);

 if (FUNC_2(VAR_1, VAR_0))
  FUNC_4(VAR_1, &VAR_3->bdaddr,
       VAR_3->status);

 FUNC_3(VAR_1);
}
