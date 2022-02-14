
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pci_quirk {int value; } ;
struct pci_dev {int subsystem_device; int subsystem_vendor; } ;
struct intel8x0 {TYPE_2__* ac97_bus; TYPE_1__* card; struct pci_dev* pci; } ;
struct TYPE_4__ {int clock; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 struct snd_pci_quirk* FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct intel8x0 *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pci;
 const struct snd_pci_quirk *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_3)
  return 0;
 FUNC_0(VAR_1->card->dev, "white list rate for %04x:%04x is %i\n",
        VAR_2->subsystem_vendor, VAR_2->subsystem_device, VAR_3->value);
 VAR_1->ac97_bus->clock = VAR_3->value;
 return 1;
}
