
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pci_quirk {int value; int subdevice; int subvendor; } ;
struct azx {int codec_probe_mask; TYPE_1__* card; int pci; } ;
struct TYPE_4__ {int codec_mask; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct azx*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int* VAR_1 ;
 int VAR_2 ;
 struct snd_pci_quirk* FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct azx *VAR_3, int VAR_4)
{
 const struct snd_pci_quirk *VAR_5;

 VAR_3->codec_probe_mask = VAR_1[VAR_4];
 if (VAR_3->codec_probe_mask == -1) {
  VAR_5 = FUNC_2(VAR_3->pci, VAR_2);
  if (VAR_5) {
   FUNC_1(VAR_3->card->dev,
     "probe_mask set to 0x%x for device %04x:%04x\n",
     VAR_5->value, VAR_5->subvendor, VAR_5->subdevice);
   VAR_3->codec_probe_mask = VAR_5->value;
  }
 }


 if (VAR_3->codec_probe_mask != -1 &&
     (VAR_3->codec_probe_mask & VAR_0)) {
  FUNC_0(VAR_3)->codec_mask = VAR_3->codec_probe_mask & 0xff;
  FUNC_1(VAR_3->card->dev, "codec_mask forced to 0x%x\n",
    (int)FUNC_0(VAR_3)->codec_mask);
 }
}
