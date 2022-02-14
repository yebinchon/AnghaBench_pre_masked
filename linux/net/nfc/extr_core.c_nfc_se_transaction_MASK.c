
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_evt_transaction {int dummy; } ;
struct nfc_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfc_dev*,int ,struct nfc_evt_transaction*) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(struct nfc_dev *VAR_1, u8 VAR_2,
         struct nfc_evt_transaction *VAR_3)
{
 int VAR_4;

 FUNC_3("transaction: %x\n", VAR_2);

 FUNC_0(&VAR_1->dev);

 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
out:
 FUNC_1(&VAR_1->dev);
 return VAR_4;
}
