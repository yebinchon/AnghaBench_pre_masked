
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_hci_dev {int dummy; } ;


 int FUNC_0 (struct nfc_hci_dev*) ;
 int FUNC_1 (struct nfc_hci_dev*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct nfc_hci_dev *VAR_0)
{
 int VAR_1;

 FUNC_2("\n");

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 FUNC_1(VAR_0);

 return 0;
}
