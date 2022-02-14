
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pci_quirk {int value; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_3 ;
 struct snd_pci_quirk* FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct snd_pci_quirk const*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_4, int VAR_5)
{
 const struct snd_pci_quirk *VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_3);
 if (VAR_6) {
  FUNC_0(&VAR_4->dev, "DXS white list for %s found\n",
       FUNC_3(VAR_6));
  return VAR_6->value;
 }


 if (VAR_5 >= VAR_2)
  return VAR_1;




 FUNC_1(&VAR_4->dev, "Assuming DXS channels with 48k fixed sample rate.\n");
 FUNC_1(&VAR_4->dev, "         Please try dxs_support=5 option\n");
 FUNC_1(&VAR_4->dev, "         and report if it works on your machine.\n");
 FUNC_1(&VAR_4->dev, "         For more details, read ALSA-Configuration.txt.\n");
 return VAR_0;
}
