
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; } ;
struct hdac_bus {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, int VAR_1, void *VAR_2)
{
 struct hdac_bus *VAR_3 = VAR_2;
 struct pci_dev *VAR_4, *VAR_5;

 if (!FUNC_0(VAR_0) || !FUNC_0(VAR_3->dev))
  return 0;
 VAR_5 = FUNC_1(VAR_3->dev);
 VAR_4 = FUNC_1(VAR_0);
 return VAR_5->bus == VAR_4->bus;
}
