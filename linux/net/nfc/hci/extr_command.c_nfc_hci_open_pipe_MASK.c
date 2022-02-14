
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_hci_dev*,int ,int ,int *,int ,struct sk_buff**) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_1, u8 VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4;

 FUNC_2("pipe=%d\n", VAR_2);

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_0,
    ((void*)0), 0, &VAR_3);
 if (VAR_4 == 0) {




  FUNC_0(VAR_3);
 }

 return VAR_4;
}
