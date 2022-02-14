
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_card {char* shortname; int longname; int driver; int dev; } ;
struct pci_dev {int no_64bit_msi; scalar_t__ vendor; int revision; int dev; } ;
struct hdac_bus {int irq; int addr; int codec_mask; scalar_t__ ppcap; int * remap_addr; } ;
struct azx {int dev_index; int driver_type; int region_requested; int gts_present; int driver_caps; int align_buffer_size; unsigned short capture_streams; unsigned short playback_streams; unsigned short playback_index_offset; unsigned short num_streams; struct snd_card* card; scalar_t__ capture_index_offset; struct pci_dev* pci; scalar_t__ msi; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;

 unsigned short VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 unsigned short VAR_19 ;
 unsigned short VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_1 (struct azx*,int ) ;
 int FUNC_2 (struct azx*) ;
 struct hdac_bus* FUNC_3 (struct azx*) ;
 int FUNC_4 (struct azx*) ;
 int FUNC_5 (struct azx*) ;
 unsigned short FUNC_6 (struct azx*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int * VAR_23 ;
 int FUNC_13 (struct azx*,int) ;
 int FUNC_14 (struct pci_dev*) ;
 scalar_t__ FUNC_15 (struct pci_dev*) ;
 struct pci_dev* FUNC_16 (scalar_t__,int ,int *) ;
 int * FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*,int,int*) ;
 int FUNC_19 (struct pci_dev*,char*) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*,int ,int ) ;
 int FUNC_23 (struct pci_dev*,int,int) ;
 int* VAR_24 ;
 int FUNC_24 (struct hdac_bus*) ;
 int FUNC_25 (struct hdac_bus*) ;
 int FUNC_26 (int ,int,char*,char*,int ,int ) ;
 int FUNC_27 (int ,char*) ;
 int FUNC_28 (char*,int ,int) ;
 int FUNC_29 (int ) ;

__attribute__((used)) static int FUNC_30(struct azx *VAR_25)
{
 int VAR_26 = VAR_25->dev_index;
 struct pci_dev *VAR_27 = VAR_25->pci;
 struct snd_card *VAR_28 = VAR_25->card;
 struct hdac_bus *VAR_29 = FUNC_3(VAR_25);
 int VAR_30;
 unsigned short VAR_31;
 unsigned int VAR_32 = 64;



 if (VAR_25->driver_type == 128) {
  u16 VAR_33;
  FUNC_18(VAR_27, 0x40, &VAR_33);
  FUNC_23(VAR_27, 0x40, VAR_33 | 0x10);
  FUNC_22(VAR_27, VAR_14, 0);
 }


 VAR_30 = FUNC_19(VAR_27, "ICH HD audio");
 if (VAR_30 < 0)
  return VAR_30;
 VAR_25->region_requested = 1;

 VAR_29->addr = FUNC_20(VAR_27, 0);
 VAR_29->remap_addr = FUNC_17(VAR_27, 0);
 if (VAR_29->remap_addr == ((void*)0)) {
  FUNC_9(VAR_28->dev, "ioremap error\n");
  return -VAR_10;
 }

 if (VAR_25->driver_type == VAR_6)
  FUNC_24(VAR_29);







 VAR_25->gts_present = 0;






 if (VAR_25->msi) {
  if (VAR_25->driver_caps & VAR_4) {
   FUNC_8(VAR_28->dev, "Disabling 64bit MSI\n");
   VAR_27->no_64bit_msi = 1;
  }
  if (FUNC_15(VAR_27) < 0)
   VAR_25->msi = 0;
 }

 FUNC_21(VAR_27);
 FUNC_29(VAR_29->irq);

 VAR_31 = FUNC_6(VAR_25, VAR_11);
 FUNC_8(VAR_28->dev, "chipset global capabilities = 0x%x\n", VAR_31);


 if (VAR_25->pci->vendor == VAR_16)
  VAR_32 = 40;


 if (VAR_25->pci->vendor == VAR_17) {
  struct pci_dev *VAR_34;
  VAR_32 = 40;
  VAR_34 = FUNC_16(VAR_17,
      VAR_15,
      ((void*)0));
  if (VAR_34) {
   if (VAR_34->revision < 0x30)
    VAR_31 &= ~VAR_7;
   FUNC_14(VAR_34);
  }
 }


 if (VAR_25->pci->vendor == VAR_18)
  VAR_32 = 40;


 if (VAR_25->driver_caps & VAR_2) {
  FUNC_8(VAR_28->dev, "Disabling 64bit DMA\n");
  VAR_31 &= ~VAR_7;
 }


 if (VAR_22 >= 0)
  VAR_25->align_buffer_size = !!VAR_22;
 else {
  if (VAR_25->driver_caps & VAR_3)
   VAR_25->align_buffer_size = 0;
  else
   VAR_25->align_buffer_size = 1;
 }


 if (!(VAR_31 & VAR_7))
  VAR_32 = 32;
 if (!FUNC_12(&VAR_27->dev, FUNC_0(VAR_32))) {
  FUNC_11(&VAR_27->dev, FUNC_0(VAR_32));
 } else {
  FUNC_12(&VAR_27->dev, FUNC_0(32));
  FUNC_11(&VAR_27->dev, FUNC_0(32));
 }




 VAR_25->capture_streams = (VAR_31 >> 8) & 0x0f;
 VAR_25->playback_streams = (VAR_31 >> 12) & 0x0f;
 if (!VAR_25->playback_streams && !VAR_25->capture_streams) {


  switch (VAR_25->driver_type) {
  case 128:
   VAR_25->playback_streams = VAR_20;
   VAR_25->capture_streams = VAR_19;
   break;
  case 131:
  case 130:
   VAR_25->playback_streams = VAR_1;
   VAR_25->capture_streams = VAR_0;
   break;
  case 129:
  default:
   VAR_25->playback_streams = VAR_13;
   VAR_25->capture_streams = VAR_12;
   break;
  }
 }
 VAR_25->capture_index_offset = 0;
 VAR_25->playback_index_offset = VAR_25->capture_streams;
 VAR_25->num_streams = VAR_25->playback_streams + VAR_25->capture_streams;


 if (VAR_25->num_streams > 15 &&
     (VAR_25->driver_caps & VAR_5) == 0) {
  FUNC_10(VAR_25->card->dev, "number of I/O streams is %d, "
    "forcing separate stream tags", VAR_25->num_streams);
  VAR_25->driver_caps |= VAR_5;
 }


 VAR_30 = FUNC_5(VAR_25);
 if (VAR_30 < 0)
  return VAR_30;

 VAR_30 = FUNC_2(VAR_25);
 if (VAR_30 < 0)
  return VAR_30;


 FUNC_4(VAR_25);

 FUNC_25(VAR_29);

 FUNC_13(VAR_25, (VAR_24[VAR_26] & 2) == 0);


 if (!FUNC_3(VAR_25)->codec_mask) {
  FUNC_9(VAR_28->dev, "no codecs found!\n");
  return -VAR_9;
 }

 if (FUNC_1(VAR_25, 0) < 0)
  return -VAR_8;

 FUNC_27(VAR_28->driver, "HDA-Intel");
 FUNC_28(VAR_28->shortname, VAR_23[VAR_25->driver_type],
  sizeof(VAR_28->shortname));
 FUNC_26(VAR_28->longname, sizeof(VAR_28->longname),
   "%s at 0x%lx irq %i",
   VAR_28->shortname, VAR_29->addr, VAR_29->irq);

 return 0;
}
