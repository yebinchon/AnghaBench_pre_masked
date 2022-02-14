
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pci_quirk {int value; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 struct snd_pci_quirk* FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct snd_pci_quirk const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1)
{
 const struct snd_pci_quirk *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2) {
  if (VAR_2->value)
   FUNC_0(&VAR_1->dev,
    "Using SPDIF over AC-Link for %s\n",
        FUNC_2(VAR_2));
  else
   FUNC_0(&VAR_1->dev,
    "Using integrated SPDIF DMA for %s\n",
        FUNC_2(VAR_2));
  return VAR_2->value;
 }
 return 0;
}
