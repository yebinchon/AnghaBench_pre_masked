
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_card {int dev; int mixername; int driver; } ;
struct pci_dev {int irq; } ;
struct hdsp {int irq; int max_channels; int firmware_rev; char* card_name; int use_midi_tasklet; int state; int io_type; struct snd_card* card; scalar_t__ dds_value; scalar_t__ precise_ptr; scalar_t__ port; int * iobase; struct pci_dev* pci; int midi_tasklet; int lock; scalar_t__ control2_register; scalar_t__ control_register; TYPE_1__* midi; } ;
struct TYPE_2__ {int lock; scalar_t__ pending; int * output; int * input; int * rmidi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_19 ;
 int FUNC_2 (struct hdsp*,int ) ;
 int FUNC_3 (struct hdsp*) ;
 int FUNC_4 (struct hdsp*,int,int) ;
 int * FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int FUNC_8 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_12 (int,int ,int ,int ,struct hdsp*) ;
 int FUNC_13 (struct snd_card*,struct hdsp*) ;
 int FUNC_14 (struct snd_card*,struct hdsp*) ;
 int FUNC_15 (struct hdsp*) ;
 int FUNC_16 (struct hdsp*) ;
 int FUNC_17 (struct hdsp*) ;
 int FUNC_18 (struct hdsp*) ;
 int VAR_20 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_22(struct snd_card *VAR_21,
      struct hdsp *VAR_22)
{
 struct pci_dev *VAR_23 = VAR_22->pci;
 int VAR_24;
 int VAR_25 = 0;
 int VAR_26 = 0;

 VAR_22->irq = -1;
 VAR_22->state = 0;
 VAR_22->midi[0].rmidi = ((void*)0);
 VAR_22->midi[1].rmidi = ((void*)0);
 VAR_22->midi[0].input = ((void*)0);
 VAR_22->midi[1].input = ((void*)0);
 VAR_22->midi[0].output = ((void*)0);
 VAR_22->midi[1].output = ((void*)0);
 VAR_22->midi[0].pending = 0;
 VAR_22->midi[1].pending = 0;
 FUNC_19(&VAR_22->midi[0].lock);
 FUNC_19(&VAR_22->midi[1].lock);
 VAR_22->iobase = ((void*)0);
 VAR_22->control_register = 0;
 VAR_22->control2_register = 0;
 VAR_22->io_type = VAR_18;
 VAR_22->max_channels = 26;

 VAR_22->card = VAR_21;

 FUNC_19(&VAR_22->lock);

 FUNC_21(&VAR_22->midi_tasklet, VAR_19, (unsigned long)VAR_22);

 FUNC_7(VAR_22->pci, VAR_15, &VAR_22->firmware_rev);
 VAR_22->firmware_rev &= 0xff;
 FUNC_11(VAR_22->pci, VAR_16, 0xFF);

 FUNC_20(VAR_21->driver, "H-DSP");
 FUNC_20(VAR_21->mixername, "Xilinx FPGA");

 if (VAR_22->firmware_rev < 0xa)
  return -VAR_2;
 else if (VAR_22->firmware_rev < 0x64)
  VAR_22->card_name = "RME Hammerfall DSP";
 else if (VAR_22->firmware_rev < 0x96) {
  VAR_22->card_name = "RME HDSP 9652";
  VAR_25 = 1;
 } else {
  VAR_22->card_name = "RME HDSP 9632";
  VAR_22->max_channels = 16;
  VAR_26 = 1;
 }

 if ((VAR_24 = FUNC_6(VAR_23)) < 0)
  return VAR_24;

 FUNC_10(VAR_22->pci);

 if ((VAR_24 = FUNC_8(VAR_23, "hdsp")) < 0)
  return VAR_24;
 VAR_22->port = FUNC_9(VAR_23, 0);
 if ((VAR_22->iobase = FUNC_5(VAR_22->port, VAR_7)) == ((void*)0)) {
  FUNC_0(VAR_22->card->dev, "unable to remap region 0x%lx-0x%lx\n",
   VAR_22->port, VAR_22->port + VAR_7 - 1);
  return -VAR_1;
 }

 if (FUNC_12(VAR_23->irq, VAR_20, VAR_12,
   VAR_13, VAR_22)) {
  FUNC_0(VAR_22->card->dev, "unable to use IRQ %d\n", VAR_23->irq);
  return -VAR_1;
 }

 VAR_22->irq = VAR_23->irq;
 VAR_22->precise_ptr = 0;
 VAR_22->use_midi_tasklet = 1;
 VAR_22->dds_value = 0;

 if ((VAR_24 = FUNC_17(VAR_22)) < 0)
  return VAR_24;

 if (!VAR_25 && !VAR_26) {


  VAR_24 = FUNC_4(VAR_22, 1000, 10);

  if (VAR_24 < 0)
   return VAR_24;

  if ((FUNC_2 (VAR_22, VAR_9) & VAR_5) != 0) {
   if ((VAR_24 = FUNC_3(VAR_22)) < 0)




    FUNC_0(VAR_22->card->dev,
     "couldn't get firmware from userspace. try using hdsploader\n");
   else

    return 0;

   FUNC_1(VAR_22->card->dev,
     "card initialization pending : waiting for firmware\n");
   if ((VAR_24 = FUNC_14(VAR_21, VAR_22)) < 0)
    return VAR_24;
   return 0;
  } else {
   FUNC_1(VAR_22->card->dev,
     "Firmware already present, initializing card.\n");
   if (FUNC_2(VAR_22, VAR_8) & VAR_11)
    VAR_22->io_type = VAR_17;
   else if (FUNC_2(VAR_22, VAR_8) & VAR_10)
    VAR_22->io_type = VAR_14;
   else
    VAR_22->io_type = VAR_0;
  }
 }

 if ((VAR_24 = FUNC_15(VAR_22)) != 0)
  return VAR_24;

 if (VAR_25)
         VAR_22->io_type = VAR_4;

 if (VAR_26)
  VAR_22->io_type = VAR_3;

 if ((VAR_24 = FUNC_14(VAR_21, VAR_22)) < 0)
  return VAR_24;

 FUNC_16(VAR_22);
 FUNC_18(VAR_22);

 VAR_22->state |= VAR_6;

 if ((VAR_24 = FUNC_13(VAR_21, VAR_22)) < 0)
  return VAR_24;

 return 0;
}
