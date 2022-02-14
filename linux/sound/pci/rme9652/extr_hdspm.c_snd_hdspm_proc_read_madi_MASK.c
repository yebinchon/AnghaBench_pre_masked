
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct hdspm* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct hdspm {int control_register; int system_sample_rate; scalar_t__ period_bytes; int control2_register; int irq_count; scalar_t__ iobase; int port; int irq; int serial; int firmware_rev; TYPE_1__* card; int card_name; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 unsigned int VAR_0 ;





 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;




 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int FUNC_0 (struct hdspm*) ;
 int FUNC_1 (struct hdspm*) ;
 int FUNC_2 (struct hdspm*) ;
 scalar_t__ FUNC_3 (struct hdspm*) ;
 int FUNC_4 (struct hdspm*) ;
 int FUNC_5 (struct hdspm*,int ) ;
 int FUNC_6 (struct snd_info_entry*,struct snd_info_buffer*) ;
 int FUNC_7 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_8(struct snd_info_entry *VAR_29,
    struct snd_info_buffer *VAR_30)
{
 struct hdspm *VAR_31 = VAR_29->private_data;
 unsigned int VAR_32, VAR_33;

 char *VAR_34;
 char *VAR_35;
 char *VAR_36;
 int VAR_37, VAR_38;

 VAR_32 = FUNC_5(VAR_31, VAR_21);
 VAR_33 = FUNC_5(VAR_31, VAR_22);

 FUNC_7(VAR_30, "%s (Card #%d) Rev.%x Status2first3bits: %x\n",
   VAR_31->card_name, VAR_31->card->number + 1,
   VAR_31->firmware_rev,
   (VAR_33 & VAR_23) |
   (VAR_33 & VAR_24) | (VAR_33 &
    VAR_25));

 FUNC_7(VAR_30, "HW Serial: 0x%06x%06x\n",
   (FUNC_5(VAR_31, VAR_16)>>8) & 0xFFFFFF,
   VAR_31->serial);

 FUNC_7(VAR_30, "IRQ: %d Registers bus: 0x%lx VM: 0x%lx\n",
   VAR_31->irq, VAR_31->port, (unsigned long)VAR_31->iobase);

 FUNC_7(VAR_30, "--- System ---\n");

 FUNC_7(VAR_30,
  "IRQ Pending: Audio=%d, MIDI0=%d, MIDI1=%d, IRQcount=%d\n",
  VAR_32 & VAR_8,
  (VAR_32 & VAR_13) ? 1 : 0,
  (VAR_32 & VAR_14) ? 1 : 0,
  VAR_31->irq_count);
 FUNC_7(VAR_30,
  "HW pointer: id = %d, rawptr = %d (%d->%d) "
  "estimated= %ld (bytes)\n",
  ((VAR_32 & VAR_2) ? 1 : 0),
  (VAR_32 & VAR_3),
  (VAR_32 & VAR_3) %
  (2 * (int)VAR_31->period_bytes),
  ((VAR_32 & VAR_3) - 64) %
  (2 * (int)VAR_31->period_bytes),
  (long) FUNC_3(VAR_31) * 4);

 FUNC_7(VAR_30,
  "MIDI FIFO: Out1=0x%x, Out2=0x%x, In1=0x%x, In2=0x%x \n",
  FUNC_5(VAR_31, VAR_18) & 0xFF,
  FUNC_5(VAR_31, VAR_19) & 0xFF,
  FUNC_5(VAR_31, VAR_15) & 0xFF,
  FUNC_5(VAR_31, VAR_16) & 0xFF);
 FUNC_7(VAR_30,
  "MIDIoverMADI FIFO: In=0x%x, Out=0x%x \n",
  FUNC_5(VAR_31, VAR_17) & 0xFF,
  FUNC_5(VAR_31, VAR_20) & 0xFF);
 FUNC_7(VAR_30,
  "Register: ctrl1=0x%x, ctrl2=0x%x, status1=0x%x, "
  "status2=0x%x\n",
  VAR_31->control_register, VAR_31->control2_register,
  VAR_32, VAR_33);


 FUNC_7(VAR_30, "--- Settings ---\n");

 VAR_37 = FUNC_2(VAR_31);

 FUNC_7(VAR_30,
  "Size (Latency): %d samples (2 periods of %lu bytes)\n",
  VAR_37, (unsigned long) VAR_31->period_bytes);

 FUNC_7(VAR_30, "Line out: %s\n",
  (VAR_31->control_register & VAR_5) ? "on " : "off");

 FUNC_7(VAR_30,
  "ClearTrackMarker = %s, Transmit in %s Channel Mode, "
  "Auto Input %s\n",
  (VAR_31->control_register & VAR_9) ? "on" : "off",
  (VAR_31->control_register & VAR_7) ? "64" : "56",
  (VAR_31->control_register & VAR_1) ? "on" : "off");


 if (!(VAR_31->control_register & VAR_4))
  VAR_36 = "AutoSync";
 else
  VAR_36 = "Master";
 FUNC_7(VAR_30, "AutoSync Reference: %s\n", VAR_36);

 switch (FUNC_4(VAR_31)) {
 case 128:
  VAR_34 = "Word Clock";
  break;
 case 131:
  VAR_34 = "MADI Sync";
  break;
 case 129:
  VAR_34 = "TCO";
  break;
 case 130:
  VAR_34 = "Sync In";
  break;
 default:
  VAR_34 = "XXXX Clock";
  break;
 }
 FUNC_7(VAR_30, "Preferred Sync Reference: %s\n",
   VAR_34);

 FUNC_7(VAR_30, "System Clock Frequency: %d\n",
   VAR_31->system_sample_rate);


 FUNC_7(VAR_30, "--- Status:\n");

 VAR_37 = VAR_32 & VAR_12;
 VAR_38 = VAR_33 & VAR_28;

 FUNC_7(VAR_30, "Inputs MADI=%s, WordClock=%s\n",
   (VAR_32 & VAR_11) ? (VAR_37 ? "Sync" : "Lock") :
   "NoLock",
   (VAR_33 & VAR_27) ? (VAR_38 ? "Sync" : "Lock") :
   "NoLock");

 switch (FUNC_0(VAR_31)) {
 case 134:
  VAR_35 = "Sync In";
  break;
 case 133:
  VAR_35 = "TCO";
  break;
 case 132:
  VAR_35 = "Word Clock";
  break;
 case 136:
  VAR_35 = "MADI Sync";
  break;
 case 135:
  VAR_35 = "Input not valid";
  break;
 default:
  VAR_35 = "---";
  break;
 }
 FUNC_7(VAR_30,
  "AutoSync: Reference= %s, Freq=%d (MADI = %d, Word = %d)\n",
  VAR_35, FUNC_1(VAR_31),
  (VAR_32 & VAR_10) >> 22,
  (VAR_33 & VAR_26) >> 5);

 FUNC_7(VAR_30, "Input: %s, Mode=%s\n",
  (VAR_32 & VAR_0) ? "Coax" : "Optical",
  (VAR_32 & VAR_6) ? "64 channels" :
  "56 channels");


 FUNC_6(VAR_29, VAR_30);

 FUNC_7(VAR_30, "\n");
}
