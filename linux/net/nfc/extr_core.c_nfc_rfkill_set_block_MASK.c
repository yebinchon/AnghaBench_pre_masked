
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfc_dev*) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, bool VAR_1)
{
 struct nfc_dev *VAR_2 = VAR_0;

 FUNC_2("%s blocked %d", FUNC_0(&VAR_2->dev), VAR_1);

 if (!VAR_1)
  return 0;

 FUNC_1(VAR_2);

 return 0;
}
