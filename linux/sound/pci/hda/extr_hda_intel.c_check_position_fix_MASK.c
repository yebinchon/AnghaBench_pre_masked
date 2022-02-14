
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pci_quirk {int value; int subdevice; int subvendor; } ;
struct azx {scalar_t__ driver_type; int driver_caps; TYPE_1__* card; int pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;







 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int ,int ) ;
 int VAR_4 ;
 struct snd_pci_quirk* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct azx *VAR_5, int VAR_6)
{
 const struct snd_pci_quirk *VAR_7;

 switch (VAR_6) {
 case 134:
 case 131:
 case 130:
 case 128:
 case 133:
 case 129:
 case 132:
  return VAR_6;
 }

 VAR_7 = FUNC_2(VAR_5->pci, VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_5->card->dev,
    "position_fix set to %d for device %04x:%04x\n",
    VAR_7->value, VAR_7->subvendor, VAR_7->subdevice);
  return VAR_7->value;
 }


 if (VAR_5->driver_type == VAR_3) {
  FUNC_0(VAR_5->card->dev, "Using VIACOMBO position fix\n");
  return 128;
 }
 if (VAR_5->driver_caps & VAR_0) {
  FUNC_0(VAR_5->card->dev, "Using FIFO position fix\n");
  return 132;
 }
 if (VAR_5->driver_caps & VAR_1) {
  FUNC_0(VAR_5->card->dev, "Using LPIB position fix\n");
  return 131;
 }
 if (VAR_5->driver_type == VAR_2) {
  FUNC_0(VAR_5->card->dev, "Using SKL position fix\n");
  return 129;
 }
 return 134;
}
