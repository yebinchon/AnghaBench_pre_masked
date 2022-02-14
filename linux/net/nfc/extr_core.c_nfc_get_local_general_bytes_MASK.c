
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_dev {int dev; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct nfc_dev*,size_t*) ;
 int FUNC_2 (char*,int ) ;

u8 *FUNC_3(struct nfc_dev *VAR_0, size_t *VAR_1)
{
 FUNC_2("dev_name=%s\n", FUNC_0(&VAR_0->dev));

 return FUNC_1(VAR_0, VAR_1);
}
