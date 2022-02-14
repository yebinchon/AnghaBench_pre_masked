
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct nci_dev {TYPE_1__* ops; int nfc_dev; } ;
struct TYPE_2__ {int (* send ) (struct nci_dev*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nci_dev*,struct sk_buff*) ;

int FUNC_5(struct nci_dev *VAR_3, struct sk_buff *VAR_4)
{
 FUNC_2("len %d\n", VAR_4->len);

 if (!VAR_3) {
  FUNC_0(VAR_4);
  return -VAR_0;
 }


 FUNC_3(VAR_4);


 FUNC_1(VAR_3->nfc_dev, VAR_4,
        VAR_2, VAR_1);

 return VAR_3->ops->send(VAR_3, VAR_4);
}
