
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct snd_pci_quirk {scalar_t__ value; } ;
struct ct_atc {int chip_type; char* chip_name; scalar_t__ model; int model_name; TYPE_2__* card; TYPE_1__* pci; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {unsigned int subsystem_vendor; unsigned int subsystem_device; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*,char*,int ,unsigned int,unsigned int) ;
 struct snd_pci_quirk* FUNC_2 (unsigned int,unsigned int,struct snd_pci_quirk const*) ;
 struct snd_pci_quirk* VAR_4 ;
 struct snd_pci_quirk* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct ct_atc *VAR_6, unsigned int VAR_7)
{
 const struct snd_pci_quirk *VAR_8;
 const struct snd_pci_quirk *VAR_9;
 u16 VAR_10, VAR_11;

 switch (VAR_6->chip_type) {
 case 129:
  VAR_6->chip_name = "20K1";
  VAR_9 = VAR_4;
  break;
 case 128:
  VAR_6->chip_name = "20K2";
  VAR_9 = VAR_5;
  break;
 default:
  return -VAR_2;
 }
 if (VAR_7) {
  VAR_10 = VAR_7 >> 16;
  VAR_11 = VAR_7 & 0xffff;
 } else {
  VAR_10 = VAR_6->pci->subsystem_vendor;
  VAR_11 = VAR_6->pci->subsystem_device;
 }
 VAR_8 = FUNC_2(VAR_10, VAR_11, VAR_9);
 if (VAR_8) {
  if (VAR_8->value < 0) {
   FUNC_0(VAR_6->card->dev,
    "Device %04x:%04x is black-listed\n",
    VAR_10, VAR_11);
   return -VAR_2;
  }
  VAR_6->model = VAR_8->value;
 } else {
  if (VAR_6->chip_type == 129)
   VAR_6->model = VAR_0;
  else
   VAR_6->model = VAR_1;
 }
 VAR_6->model_name = VAR_3[VAR_6->model];
 FUNC_1(VAR_6->card->dev, "chip %s model %s (%04x:%04x) is found\n",
     VAR_6->chip_name, VAR_6->model_name,
     VAR_10, VAR_11);
 return 0;
}
