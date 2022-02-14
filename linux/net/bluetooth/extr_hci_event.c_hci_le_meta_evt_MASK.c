
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_le_meta {int subevent; } ;
struct hci_dev {int dummy; } ;
 int FUNC_0 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_1 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_2 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_3 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_4 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_5 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_6 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_7 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_8 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_9 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_11(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_ev_le_meta *VAR_2 = (void *) VAR_1->data;

 FUNC_10(VAR_1, sizeof(*VAR_2));

 switch (VAR_2->subevent) {
 case 136:
  FUNC_1(VAR_0, VAR_1);
  break;

 case 135:
  FUNC_2(VAR_0, VAR_1);
  break;

 case 137:
  FUNC_0(VAR_0, VAR_1);
  break;

 case 128:
  FUNC_9(VAR_0, VAR_1);
  break;

 case 130:
  FUNC_7(VAR_0, VAR_1);
  break;

 case 129:
  FUNC_8(VAR_0, VAR_1);
  break;

 case 134:
  FUNC_3(VAR_0, VAR_1);
  break;

 case 132:
  FUNC_5(VAR_0, VAR_1);
  break;

 case 133:
  FUNC_4(VAR_0, VAR_1);
  break;

 case 131:
  FUNC_6(VAR_0, VAR_1);
  break;

 default:
  break;
 }
}
