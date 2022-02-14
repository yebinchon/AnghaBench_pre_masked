
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfc_hci_dev*,int ,int ,int *,int,struct sk_buff**) ;
 int FUNC_1 (char*,int ,int ) ;

int FUNC_2(struct nfc_hci_dev *VAR_1, u8 VAR_2, u8 VAR_3,
        struct sk_buff **VAR_4)
{
 FUNC_1("gate=%d regidx=%d\n", VAR_2, VAR_3);

 return FUNC_0(VAR_1, VAR_2, VAR_0,
    &VAR_3, 1, VAR_4);
}
