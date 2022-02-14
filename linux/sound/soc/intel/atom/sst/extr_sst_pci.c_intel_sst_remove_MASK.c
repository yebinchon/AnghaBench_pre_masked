
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct intel_sst_drv {int pci; } ;


 int FUNC_0 (int ) ;
 struct intel_sst_drv* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int *) ;
 int FUNC_4 (struct intel_sst_drv*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct intel_sst_drv *VAR_1 = FUNC_1(VAR_0);

 FUNC_4(VAR_1);
 FUNC_0(VAR_1->pci);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0, ((void*)0));
}
