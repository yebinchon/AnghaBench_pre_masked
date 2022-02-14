
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_dev {int dummy; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nci_dev*,int ,struct sk_buff*) ;
 struct nci_dev* FUNC_1 (struct nfc_dev*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct nfc_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct nci_dev *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_2);
 if (VAR_4)
  FUNC_2("unable to send data\n");

 return VAR_4;
}
