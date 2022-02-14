
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_dev {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfc_dev*,int ) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(struct nfc_dev *VAR_0, u8 VAR_1)
{
 int VAR_2;

 FUNC_3("connectivity: %x\n", VAR_1);

 FUNC_0(&VAR_0->dev);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_0->dev);
 return VAR_2;
}
