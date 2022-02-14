
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct hdac_bus {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 struct hdac_bus* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct hdac_bus*,int ) ;
 int FUNC_4 (struct hdac_bus*,int ,int) ;
 struct pci_dev* FUNC_5 (struct device*) ;
 int FUNC_6 (int) ;

void FUNC_7(struct device *VAR_3, bool VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_5(VAR_3);
 struct hdac_bus *VAR_6 = FUNC_2(VAR_5);
 u8 VAR_7;
 int VAR_8 = 50;

 VAR_7 = FUNC_3(VAR_6, VAR_2);

 while ((VAR_7 & VAR_0) && --VAR_8) {
  FUNC_6(10);
  VAR_7 = FUNC_3(VAR_6, VAR_2);
 }


 if (!VAR_8) {
  FUNC_1(VAR_6->dev, "Before D0I3C update: D0I3C CIP timeout\n");
  return;
 }

 if (VAR_4)
  VAR_7 = VAR_7 | VAR_1;
 else
  VAR_7 = VAR_7 & (~VAR_1);

 FUNC_4(VAR_6, VAR_2, VAR_7);

 VAR_8 = 50;

 VAR_7 = FUNC_3(VAR_6, VAR_2);
 while ((VAR_7 & VAR_0) && --VAR_8) {
  FUNC_6(10);
  VAR_7 = FUNC_3(VAR_6, VAR_2);
 }


 if (!VAR_8) {
  FUNC_1(VAR_6->dev, "After D0I3C update: D0I3C CIP timeout\n");
  return;
 }

 FUNC_0(VAR_6->dev, "D0I3C register = 0x%x\n",
   FUNC_3(VAR_6, VAR_2));
}
