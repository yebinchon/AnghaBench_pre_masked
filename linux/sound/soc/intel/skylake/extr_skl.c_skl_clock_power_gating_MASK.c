
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct hdac_bus {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hdac_bus* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct hdac_bus*,int ,int ,int ) ;
 struct pci_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_6, bool VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_2(VAR_6);
 struct hdac_bus *VAR_9 = FUNC_0(VAR_8);
 u32 VAR_10;


 VAR_10 = VAR_7 ? VAR_0 : 0;
 FUNC_3(VAR_8, VAR_1, VAR_0, VAR_10);


 VAR_10 = VAR_7 ? VAR_4 : 0;
 FUNC_1(VAR_9, VAR_5, VAR_4, VAR_10);


 VAR_10 = VAR_7 ? 0 : VAR_3;
 FUNC_3(VAR_8, VAR_2, VAR_3, VAR_10);
}
