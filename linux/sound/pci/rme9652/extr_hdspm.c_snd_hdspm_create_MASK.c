
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dev; int id; int driver; int mixername; } ;
struct pci_dev {int irq; } ;
struct hdspm {int irq; int firmware_rev; int io_type; char* card_name; int midiPorts; int ss_in_channels; int ss_out_channels; int ds_in_channels; int ds_out_channels; int qs_in_channels; int qs_out_channels; int texts_autosync_items; int serial; size_t dev; int midi_tasklet; void* texts_autosync; int * tco; void* port_names_out_qs; void* port_names_in_qs; void* port_names_out_ds; void* port_names_in_ds; void* port_names_out_ss; void* port_names_in_ss; void* channel_map_out; void* channel_map_in; void* channel_map_out_qs; void* channel_map_in_qs; void* channel_map_out_ds; void* channel_map_in_ds; void* channel_map_out_ss; void* channel_map_in_ss; void* max_channels_out; void* max_channels_in; int * port_names_out; int * port_names_in; void* mixer; scalar_t__ port; scalar_t__ iobase; struct pci_dev* pci; int lock; struct snd_card* card; } ;



 void* VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (void*) ;
 int VAR_7 ;
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
 int VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;

 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,char*) ;
 int VAR_38 ;
 int FUNC_4 (struct hdspm*,int ) ;
 int FUNC_5 (struct hdspm*) ;
 int * VAR_39 ;
 scalar_t__ FUNC_6 (scalar_t__,unsigned long) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ,int*) ;
 int FUNC_10 (struct pci_dev*,char*) ;
 unsigned long FUNC_11 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*) ;
 scalar_t__ FUNC_14 (int,int ,int ,int ,struct hdspm*) ;
 int FUNC_15 (struct snd_card*,int ) ;
 int FUNC_16 (struct snd_card*,struct hdspm*) ;
 int FUNC_17 (struct hdspm*) ;
 int VAR_40 ;
 int FUNC_18 (int ,int,char*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (int *,int ,unsigned long) ;
 void* VAR_41 ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 void* VAR_45 ;
 void* VAR_46 ;
 void* VAR_47 ;
 void* VAR_48 ;
 void* VAR_49 ;
 void* VAR_50 ;
 void* VAR_51 ;
 void* VAR_52 ;
 void* VAR_53 ;
 void* VAR_54 ;
 void* VAR_55 ;
 void* VAR_56 ;
 void* VAR_57 ;
 void* VAR_58 ;
 void* VAR_59 ;

__attribute__((used)) static int FUNC_22(struct snd_card *VAR_60,
       struct hdspm *VAR_61)
{

 struct pci_dev *VAR_62 = VAR_61->pci;
 int VAR_63;
 unsigned long VAR_64;

 VAR_61->irq = -1;
 VAR_61->card = VAR_60;

 FUNC_19(&VAR_61->lock);

 FUNC_9(VAR_61->pci,
   VAR_23, &VAR_61->firmware_rev);

 FUNC_20(VAR_60->mixername, "Xilinx FPGA");
 FUNC_20(VAR_60->driver, "HDSPM");

 switch (VAR_61->firmware_rev) {
 case 131:
  VAR_61->io_type = 128;
  VAR_61->card_name = "RME RayDAT";
  VAR_61->midiPorts = 2;
  break;
 case 133:
  VAR_61->io_type = 134;
  VAR_61->card_name = "RME AIO";
  VAR_61->midiPorts = 1;
  break;
 case 132:
  VAR_61->io_type = 129;
  VAR_61->card_name = "RME MADIface";
  VAR_61->midiPorts = 1;
  break;
 default:
  if ((VAR_61->firmware_rev == 0xf0) ||
   ((VAR_61->firmware_rev >= 0xe6) &&
     (VAR_61->firmware_rev <= 0xea))) {
   VAR_61->io_type = 135;
   VAR_61->card_name = "RME AES32";
   VAR_61->midiPorts = 2;
  } else if ((VAR_61->firmware_rev == 0xd2) ||
   ((VAR_61->firmware_rev >= 0xc8) &&
    (VAR_61->firmware_rev <= 0xcf))) {
   VAR_61->io_type = 130;
   VAR_61->card_name = "RME MADI";
   VAR_61->midiPorts = 3;
  } else {
   FUNC_2(VAR_60->dev,
    "unknown firmware revision %x\n",
    VAR_61->firmware_rev);
   return -VAR_8;
  }
 }

 VAR_63 = FUNC_8(VAR_62);
 if (VAR_63 < 0)
  return VAR_63;

 FUNC_13(VAR_61->pci);

 VAR_63 = FUNC_10(VAR_62, "hdspm");
 if (VAR_63 < 0)
  return VAR_63;

 VAR_61->port = FUNC_12(VAR_62, 0);
 VAR_64 = FUNC_11(VAR_62, 0);

 FUNC_1(VAR_60->dev, "grabbed memory region 0x%lx-0x%lx\n",
   VAR_61->port, VAR_61->port + VAR_64 - 1);

 VAR_61->iobase = FUNC_6(VAR_61->port, VAR_64);
 if (!VAR_61->iobase) {
  FUNC_2(VAR_60->dev, "unable to remap region 0x%lx-0x%lx\n",
    VAR_61->port, VAR_61->port + VAR_64 - 1);
  return -VAR_7;
 }
 FUNC_1(VAR_60->dev, "remapped region (0x%lx) 0x%lx-0x%lx\n",
   (unsigned long)VAR_61->iobase, VAR_61->port,
   VAR_61->port + VAR_64 - 1);

 if (FUNC_14(VAR_62->irq, VAR_40,
   VAR_18, VAR_19, VAR_61)) {
  FUNC_2(VAR_60->dev, "unable to use IRQ %d\n", VAR_62->irq);
  return -VAR_7;
 }

 FUNC_1(VAR_60->dev, "use IRQ %d\n", VAR_62->irq);

 VAR_61->irq = VAR_62->irq;

 FUNC_1(VAR_60->dev, "kmalloc Mixer memory of %zd Bytes\n",
  sizeof(*VAR_61->mixer));
 VAR_61->mixer = FUNC_7(sizeof(*VAR_61->mixer), VAR_10);
 if (!VAR_61->mixer)
  return -VAR_9;

 VAR_61->port_names_in = ((void*)0);
 VAR_61->port_names_out = ((void*)0);

 switch (VAR_61->io_type) {
 case 135:
  VAR_61->ss_in_channels = VAR_61->ss_out_channels = VAR_0;
  VAR_61->ds_in_channels = VAR_61->ds_out_channels = VAR_0;
  VAR_61->qs_in_channels = VAR_61->qs_out_channels = VAR_0;

  VAR_61->channel_map_in_ss = VAR_61->channel_map_out_ss =
   VAR_27;
  VAR_61->channel_map_in_ds = VAR_61->channel_map_out_ds =
   VAR_27;
  VAR_61->channel_map_in_qs = VAR_61->channel_map_out_qs =
   VAR_27;
  VAR_61->port_names_in_ss = VAR_61->port_names_out_ss =
   VAR_49;
  VAR_61->port_names_in_ds = VAR_61->port_names_out_ds =
   VAR_49;
  VAR_61->port_names_in_qs = VAR_61->port_names_out_qs =
   VAR_49;

  VAR_61->max_channels_out = VAR_61->max_channels_in =
   VAR_0;
  VAR_61->port_names_in = VAR_61->port_names_out =
   VAR_49;
  VAR_61->channel_map_in = VAR_61->channel_map_out =
   VAR_27;

  break;

 case 130:
 case 129:
  VAR_61->ss_in_channels = VAR_61->ss_out_channels =
   VAR_22;
  VAR_61->ds_in_channels = VAR_61->ds_out_channels =
   VAR_20;
  VAR_61->qs_in_channels = VAR_61->qs_out_channels =
   VAR_21;

  VAR_61->channel_map_in_ss = VAR_61->channel_map_out_ss =
   VAR_37;
  VAR_61->channel_map_in_ds = VAR_61->channel_map_out_ds =
   VAR_37;
  VAR_61->channel_map_in_qs = VAR_61->channel_map_out_qs =
   VAR_37;

  VAR_61->port_names_in_ss = VAR_61->port_names_out_ss =
   VAR_56;
  VAR_61->port_names_in_ds = VAR_61->port_names_out_ds =
   VAR_56;
  VAR_61->port_names_in_qs = VAR_61->port_names_out_qs =
   VAR_56;
  break;

 case 134:
  VAR_61->ss_in_channels = VAR_3;
  VAR_61->ds_in_channels = VAR_1;
  VAR_61->qs_in_channels = VAR_2;
  VAR_61->ss_out_channels = VAR_6;
  VAR_61->ds_out_channels = VAR_4;
  VAR_61->qs_out_channels = VAR_5;

  if (0 == (FUNC_4(VAR_61, VAR_16) & VAR_12)) {
   FUNC_3(VAR_60->dev, "AEB input board found\n");
   VAR_61->ss_in_channels += 4;
   VAR_61->ds_in_channels += 4;
   VAR_61->qs_in_channels += 4;
  }

  if (0 == (FUNC_4(VAR_61, VAR_16) & VAR_13)) {
   FUNC_3(VAR_60->dev, "AEB output board found\n");
   VAR_61->ss_out_channels += 4;
   VAR_61->ds_out_channels += 4;
   VAR_61->qs_out_channels += 4;
  }

  VAR_61->channel_map_out_ss = VAR_33;
  VAR_61->channel_map_out_ds = VAR_31;
  VAR_61->channel_map_out_qs = VAR_32;

  VAR_61->channel_map_in_ss = VAR_30;
  VAR_61->channel_map_in_ds = VAR_28;
  VAR_61->channel_map_in_qs = VAR_29;

  VAR_61->port_names_in_ss = VAR_52;
  VAR_61->port_names_out_ss = VAR_55;
  VAR_61->port_names_in_ds = VAR_50;
  VAR_61->port_names_out_ds = VAR_53;
  VAR_61->port_names_in_qs = VAR_51;
  VAR_61->port_names_out_qs = VAR_54;

  break;

 case 128:
  VAR_61->ss_in_channels = VAR_61->ss_out_channels =
   VAR_26;
  VAR_61->ds_in_channels = VAR_61->ds_out_channels =
   VAR_24;
  VAR_61->qs_in_channels = VAR_61->qs_out_channels =
   VAR_25;

  VAR_61->max_channels_in = VAR_26;
  VAR_61->max_channels_out = VAR_26;

  VAR_61->channel_map_in_ss = VAR_61->channel_map_out_ss =
   VAR_36;
  VAR_61->channel_map_in_ds = VAR_61->channel_map_out_ds =
   VAR_34;
  VAR_61->channel_map_in_qs = VAR_61->channel_map_out_qs =
   VAR_35;
  VAR_61->channel_map_in = VAR_61->channel_map_out =
   VAR_36;

  VAR_61->port_names_in_ss = VAR_61->port_names_out_ss =
   VAR_59;
  VAR_61->port_names_in_ds = VAR_61->port_names_out_ds =
   VAR_57;
  VAR_61->port_names_in_qs = VAR_61->port_names_out_qs =
   VAR_58;


  break;

 }


 switch (VAR_61->io_type) {
 case 134:
 case 128:
  if (FUNC_4(VAR_61, VAR_16) &
    VAR_14) {
   VAR_61->midiPorts++;
   VAR_61->tco = FUNC_7(sizeof(*VAR_61->tco), VAR_10);
   if (VAR_61->tco)
    FUNC_5(VAR_61);

   FUNC_3(VAR_60->dev, "AIO/RayDAT TCO module found\n");
  } else {
   VAR_61->tco = ((void*)0);
  }
  break;

 case 130:
 case 135:
  if (FUNC_4(VAR_61, VAR_15) & VAR_17) {
   VAR_61->midiPorts++;
   VAR_61->tco = FUNC_7(sizeof(*VAR_61->tco), VAR_10);
   if (VAR_61->tco)
    FUNC_5(VAR_61);

   FUNC_3(VAR_60->dev, "MADI/AES TCO module found\n");
  } else {
   VAR_61->tco = ((void*)0);
  }
  break;

 default:
  VAR_61->tco = ((void*)0);
 }


 switch (VAR_61->io_type) {
 case 135:
  if (VAR_61->tco) {
   VAR_61->texts_autosync = VAR_42;
   VAR_61->texts_autosync_items =
    FUNC_0(VAR_42);
  } else {
   VAR_61->texts_autosync = VAR_41;
   VAR_61->texts_autosync_items =
    FUNC_0(VAR_41);
  }
  break;

 case 130:
  if (VAR_61->tco) {
   VAR_61->texts_autosync = VAR_46;
   VAR_61->texts_autosync_items = 4;
  } else {
   VAR_61->texts_autosync = VAR_45;
   VAR_61->texts_autosync_items = 3;
  }
  break;

 case 129:

  break;

 case 128:
  if (VAR_61->tco) {
   VAR_61->texts_autosync = VAR_48;
   VAR_61->texts_autosync_items = 9;
  } else {
   VAR_61->texts_autosync = VAR_47;
   VAR_61->texts_autosync_items = 8;
  }
  break;

 case 134:
  if (VAR_61->tco) {
   VAR_61->texts_autosync = VAR_44;
   VAR_61->texts_autosync_items = 6;
  } else {
   VAR_61->texts_autosync = VAR_43;
   VAR_61->texts_autosync_items = 5;
  }
  break;

 }

 FUNC_21(&VAR_61->midi_tasklet,
   VAR_38, (unsigned long) VAR_61);


 if (VAR_61->io_type != 129) {
  VAR_61->serial = (FUNC_4(VAR_61,
    VAR_11)>>8) & 0xFFFFFF;
  if (!VAR_39[VAR_61->dev] && VAR_61->serial != 0xFFFFFF) {
   FUNC_18(VAR_60->id, sizeof(VAR_60->id),
     "HDSPMx%06x", VAR_61->serial);
   FUNC_15(VAR_60, VAR_60->id);
  }
 }

 FUNC_1(VAR_60->dev, "create alsa devices.\n");
 VAR_63 = FUNC_16(VAR_60, VAR_61);
 if (VAR_63 < 0)
  return VAR_63;

 FUNC_17(VAR_61);

 return 0;
}
