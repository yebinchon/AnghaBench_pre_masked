
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dev {int dummy; } ;
struct pci_dev {int dummy; } ;
struct hdac_bus {int dummy; } ;
struct device {int dummy; } ;


 struct skl_dev* FUNC_0 (struct hdac_bus*) ;
 struct hdac_bus* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct skl_dev*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_3(VAR_0);
 struct hdac_bus *VAR_2 = FUNC_1(VAR_1);
 struct skl_dev *VAR_3 = FUNC_0(VAR_2);

 return FUNC_2(VAR_3);
}
