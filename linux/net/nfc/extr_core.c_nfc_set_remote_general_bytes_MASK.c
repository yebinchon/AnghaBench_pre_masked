
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_dev {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfc_dev*,int *,int ) ;
 int FUNC_2 (char*,int ,int ) ;

int FUNC_3(struct nfc_dev *VAR_0, u8 *VAR_1, u8 VAR_2)
{
 FUNC_2("dev_name=%s gb_len=%d\n", FUNC_0(&VAR_0->dev), VAR_2);

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
