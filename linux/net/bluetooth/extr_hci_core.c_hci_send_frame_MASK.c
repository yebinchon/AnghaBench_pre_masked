
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct hci_dev {int (* send ) (struct hci_dev*,struct sk_buff*) ;int flags; int promisc; int name; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct hci_dev*,char*,int) ;
 int FUNC_4 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_5 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 FUNC_0("%s type %d len %d", VAR_1->name, FUNC_6(VAR_2),
        VAR_2->len);


 FUNC_1(VAR_2);


 FUNC_4(VAR_1, VAR_2);

 if (FUNC_2(&VAR_1->promisc)) {

  FUNC_5(VAR_1, VAR_2);
 }


 FUNC_8(VAR_2);

 if (!FUNC_10(VAR_0, &VAR_1->flags)) {
  FUNC_7(VAR_2);
  return;
 }

 VAR_3 = VAR_1->send(VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_3(VAR_1, "sending frame failed (%d)", VAR_3);
  FUNC_7(VAR_2);
 }
}
