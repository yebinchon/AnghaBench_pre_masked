
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_hci_dev {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfc_hci_dev*,int ,int ,int *,size_t,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_3)
{
 u8 VAR_4[2];
 size_t VAR_5 = 2;




 FUNC_1("\n");

 if (FUNC_2(VAR_2, &VAR_3->quirks))
  VAR_5 = 0;

 return FUNC_0(VAR_3, VAR_0,
       VAR_1, VAR_4, VAR_5,
       ((void*)0));
}
