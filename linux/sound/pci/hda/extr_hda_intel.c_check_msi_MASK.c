
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pci_quirk {int value; int subdevice; int subvendor; } ;
struct azx {int msi; int driver_caps; TYPE_1__* card; int pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct snd_pci_quirk* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct azx *VAR_3)
{
 const struct snd_pci_quirk *VAR_4;

 if (VAR_1 >= 0) {
  VAR_3->msi = !!VAR_1;
  return;
 }
 VAR_3->msi = 1;
 VAR_4 = FUNC_1(VAR_3->pci, VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_3->card->dev,
    "msi for device %04x:%04x set to %d\n",
    VAR_4->subvendor, VAR_4->subdevice, VAR_4->value);
  VAR_3->msi = VAR_4->value;
  return;
 }


 if (VAR_3->driver_caps & VAR_0) {
  FUNC_0(VAR_3->card->dev, "Disabling MSI\n");
  VAR_3->msi = 0;
 }
}
