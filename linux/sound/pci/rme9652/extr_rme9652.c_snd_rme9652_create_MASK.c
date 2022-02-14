
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int irq; int precise_ptr; int hw_rev; char* card_name; int ss_channels; int ds_channels; int last_spdif_sample_rate; int last_adat_sample_rate; int playback_pid; int capture_pid; int * playback_substream; int * capture_substream; struct pci_dev* pci; scalar_t__ port; int * iobase; int lock; struct snd_card* card; } ;
struct snd_card {int driver; int dev; } ;
struct pci_dev {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int,...) ;
 int * FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,unsigned short*) ;
 int FUNC_4 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (int,int ,int ,int ,struct snd_rme9652*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct snd_rme9652*) ;
 int FUNC_10 (struct snd_rme9652*,int ) ;
 int FUNC_11 (struct snd_card*,struct snd_rme9652*) ;
 int FUNC_12 (struct snd_card*,struct snd_rme9652*) ;
 int FUNC_13 (struct snd_rme9652*) ;
 int VAR_10 ;
 int FUNC_14 (struct snd_rme9652*) ;
 int FUNC_15 (struct snd_rme9652*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*) ;

__attribute__((used)) static int FUNC_18(struct snd_card *VAR_11,
         struct snd_rme9652 *VAR_12,
         int VAR_13)
{
 struct pci_dev *VAR_14 = VAR_12->pci;
 int VAR_15;
 int VAR_16;
 unsigned short VAR_17;

 VAR_12->irq = -1;
 VAR_12->card = VAR_11;

 FUNC_3(VAR_12->pci, VAR_4, &VAR_17);

 switch (VAR_17 & 0xff) {
 case 3:
 case 4:
 case 8:
 case 9:
  break;

 default:

  return -VAR_1;
 }

 if ((VAR_15 = FUNC_2(VAR_14)) < 0)
  return VAR_15;

 FUNC_16(&VAR_12->lock);

 if ((VAR_15 = FUNC_4(VAR_14, "rme9652")) < 0)
  return VAR_15;
 VAR_12->port = FUNC_5(VAR_14, 0);
 VAR_12->iobase = FUNC_1(VAR_12->port, VAR_7);
 if (VAR_12->iobase == ((void*)0)) {
  FUNC_0(VAR_11->dev, "unable to remap region 0x%lx-0x%lx\n",
   VAR_12->port, VAR_12->port + VAR_7 - 1);
  return -VAR_0;
 }

 if (FUNC_7(VAR_14->irq, VAR_10, VAR_2,
   VAR_3, VAR_12)) {
  FUNC_0(VAR_11->dev, "unable to request IRQ %d\n", VAR_14->irq);
  return -VAR_0;
 }
 VAR_12->irq = VAR_14->irq;
 VAR_12->precise_ptr = VAR_13;






 VAR_16 = FUNC_10(VAR_12, VAR_9);
 if (FUNC_8(VAR_16&VAR_6) == 1) {
  VAR_12->hw_rev = 15;
 } else {
  VAR_12->hw_rev = 11;
 }
 switch (VAR_17) {
 case 8:
  FUNC_17(VAR_11->driver, "RME9636");
  if (VAR_12->hw_rev == 15) {
   VAR_12->card_name = "RME Digi9636 (Rev 1.5)";
  } else {
   VAR_12->card_name = "RME Digi9636";
  }
  VAR_12->ss_channels = VAR_5;
  break;
 case 9:
  FUNC_17(VAR_11->driver, "RME9636");
  VAR_12->card_name = "RME Digi9636 (Rev G)";
  VAR_12->ss_channels = VAR_5;
  break;
 case 4:
  FUNC_17(VAR_11->driver, "RME9652");
  VAR_12->card_name = "RME Digi9652 (Rev G)";
  VAR_12->ss_channels = VAR_8;
  break;
 case 3:
  FUNC_17(VAR_11->driver, "RME9652");
  if (VAR_12->hw_rev == 15) {
   VAR_12->card_name = "RME Digi9652 (Rev 1.5)";
  } else {
   VAR_12->card_name = "RME Digi9652";
  }
  VAR_12->ss_channels = VAR_8;
  break;
 }

 VAR_12->ds_channels = (VAR_12->ss_channels - 2) / 2 + 2;

 FUNC_6(VAR_12->pci);

 if ((VAR_15 = FUNC_13(VAR_12)) < 0) {
  return VAR_15;
 }

 if ((VAR_15 = FUNC_12(VAR_11, VAR_12)) < 0) {
  return VAR_15;
 }

 if ((VAR_15 = FUNC_11(VAR_11, VAR_12)) < 0) {
  return VAR_15;
 }

 FUNC_14(VAR_12);

 VAR_12->last_spdif_sample_rate = -1;
 VAR_12->last_adat_sample_rate = -1;
 VAR_12->playback_pid = -1;
 VAR_12->capture_pid = -1;
 VAR_12->capture_substream = ((void*)0);
 VAR_12->playback_substream = ((void*)0);

 FUNC_15(VAR_12);

 if (VAR_12->hw_rev == 15) {
  FUNC_9 (VAR_12);
 }

 return 0;
}
