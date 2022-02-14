
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_2, bool VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;

 VAR_5 = VAR_3 ? VAR_0 : 0;

 FUNC_1(VAR_4, VAR_1, VAR_0, VAR_5);
}
