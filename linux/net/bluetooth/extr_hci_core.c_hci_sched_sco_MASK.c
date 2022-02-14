
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct hci_dev {scalar_t__ sco_cnt; int name; } ;
struct hci_conn {int sent; int data_q; } ;


 int FUNC_0 (char*,struct sk_buff*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int*) ;
 int FUNC_3 (struct hci_dev*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_1)
{
 struct hci_conn *VAR_2;
 struct sk_buff *VAR_3;
 int VAR_4;

 FUNC_0("%s", VAR_1->name);

 if (!FUNC_1(VAR_1, VAR_0))
  return;

 while (VAR_1->sco_cnt && (VAR_2 = FUNC_2(VAR_1, VAR_0, &VAR_4))) {
  while (VAR_4-- && (VAR_3 = FUNC_4(&VAR_2->data_q))) {
   FUNC_0("skb %p len %d", VAR_3, VAR_3->len);
   FUNC_3(VAR_1, VAR_3);

   VAR_2->sent++;
   if (VAR_2->sent == ~0)
    VAR_2->sent = 0;
  }
 }
}
