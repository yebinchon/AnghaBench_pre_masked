
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int hci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nci_dev*,int ,int ,int *,int ,int *) ;

int FUNC_2(struct nci_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0,
        VAR_1, ((void*)0), 0, ((void*)0));
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(VAR_2->hci_dev);
 return VAR_3;
}
