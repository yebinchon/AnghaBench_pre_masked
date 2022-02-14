
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_hci_gate {int pipe; int gate; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfc_hci_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct nfc_hci_dev *VAR_1, u8 VAR_2,
     struct nfc_hci_gate *VAR_3)
{
 int VAR_4;
 while (VAR_2--) {
  VAR_4 = FUNC_0(VAR_1, VAR_0,
      VAR_3->gate, VAR_3->pipe);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_3++;
 }

 return 0;
}
