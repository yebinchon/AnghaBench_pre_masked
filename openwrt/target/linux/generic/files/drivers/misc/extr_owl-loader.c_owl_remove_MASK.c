
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct owl_ctx {int eeprom_load; } ;


 int FUNC_0 (struct owl_ctx*) ;
 struct owl_ctx* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct owl_ctx *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  FUNC_3(&VAR_1->eeprom_load);
  FUNC_2(VAR_0, ((void*)0));
  FUNC_0(VAR_1);
 }
}
