
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct acp3x_dev_data {int acp3x_base; int pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct acp3x_dev_data* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct acp3x_dev_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_5(VAR_1->pdev);
 FUNC_0(VAR_1->acp3x_base);

 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
 FUNC_1(VAR_0);
}
