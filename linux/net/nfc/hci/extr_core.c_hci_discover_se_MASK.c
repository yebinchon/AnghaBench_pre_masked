
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_hci_dev {TYPE_1__* ops; } ;
struct nfc_dev {int dummy; } ;
struct TYPE_2__ {int (* discover_se ) (struct nfc_hci_dev*) ;} ;


 struct nfc_hci_dev* FUNC_0 (struct nfc_dev*) ;
 int FUNC_1 (struct nfc_hci_dev*) ;

__attribute__((used)) static int FUNC_2(struct nfc_dev *VAR_0)
{
 struct nfc_hci_dev *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->ops->discover_se)
  return VAR_1->ops->discover_se(VAR_1);

 return 0;
}
