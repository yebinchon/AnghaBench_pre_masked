
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_hci_dev {TYPE_1__* ops; int llc; } ;
struct nfc_dev {int dummy; } ;
struct TYPE_2__ {int (* close ) (struct nfc_hci_dev*) ;} ;


 struct nfc_hci_dev* FUNC_0 (struct nfc_dev*) ;
 int FUNC_1 (struct nfc_hci_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfc_hci_dev*) ;

__attribute__((used)) static int FUNC_4(struct nfc_dev *VAR_0)
{
 struct nfc_hci_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->llc);

 if (VAR_1->ops->close)
  VAR_1->ops->close(VAR_1);

 FUNC_1(VAR_1);

 return 0;
}
