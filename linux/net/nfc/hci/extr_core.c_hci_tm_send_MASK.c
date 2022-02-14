
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfc_hci_dev {TYPE_1__* ops; } ;
struct nfc_dev {int dummy; } ;
struct TYPE_2__ {int (* tm_send ) (struct nfc_hci_dev*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct nfc_hci_dev* FUNC_1 (struct nfc_dev*) ;
 int FUNC_2 (struct nfc_hci_dev*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct nfc_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct nfc_hci_dev *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3->ops->tm_send) {
  FUNC_0(VAR_2);
  return -VAR_0;
 }

 return VAR_3->ops->tm_send(VAR_3, VAR_2);
}
