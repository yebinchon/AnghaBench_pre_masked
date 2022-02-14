
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct snd_sof_dev {int dev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct pci_dev*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct pci_dev*,unsigned int,unsigned int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static
bool FUNC_4(struct snd_sof_dev *VAR_0, u32 VAR_1,
          u32 VAR_2, u32 VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_0->dev);
 unsigned int VAR_5, VAR_6;
 u32 VAR_7 = 0;

 FUNC_1(VAR_4, VAR_1, &VAR_7);
 VAR_5 = VAR_7;
 FUNC_0(VAR_0->dev, "Debug PCIR: %8.8x at  %8.8x\n", VAR_5 & VAR_2, VAR_1);

 VAR_6 = (VAR_5 & ~VAR_2) | (VAR_3 & VAR_2);

 if (VAR_5 == VAR_6)
  return 0;

 FUNC_2(VAR_4, VAR_1, VAR_6);
 FUNC_0(VAR_0->dev, "Debug PCIW: %8.8x at  %8.8x\n", VAR_3,
  VAR_1);

 return 1;
}
