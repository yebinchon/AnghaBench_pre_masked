
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct hdspm* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct hdspm {int control_register; int system_sample_rate; scalar_t__ period_bytes; int control2_register; int irq_count; scalar_t__ iobase; int port; int irq; int firmware_rev; TYPE_1__* card; int card_name; } ;
struct TYPE_2__ {scalar_t__ number; } ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (unsigned int) ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct hdspm*) ;
 int FUNC_2 (struct hdspm*) ;
 scalar_t__ FUNC_3 (struct hdspm*) ;
 int FUNC_4 (struct hdspm*) ;
 int FUNC_5 (struct hdspm*,int ) ;
 int FUNC_6 (struct snd_info_entry*,struct snd_info_buffer*) ;
 int FUNC_7 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_8(struct snd_info_entry * VAR_25,
     struct snd_info_buffer *VAR_26)
{
 struct hdspm *VAR_27 = VAR_25->private_data;
 unsigned int VAR_28;
 unsigned int VAR_29;
 unsigned int VAR_30;
 unsigned int VAR_31, VAR_32;
 int VAR_33;
 char *VAR_34;
 int VAR_35;

 VAR_28 = FUNC_5(VAR_27, VAR_22);
 VAR_29 = FUNC_5(VAR_27, VAR_23);
 VAR_30 = FUNC_5(VAR_27, VAR_24);

 FUNC_7(VAR_26, "%s (Card #%d) Rev.%x\n",
      VAR_27->card_name, VAR_27->card->number + 1,
      VAR_27->firmware_rev);

 FUNC_7(VAR_26, "IRQ: %d Registers bus: 0x%lx VM: 0x%lx\n",
      VAR_27->irq, VAR_27->port, (unsigned long)VAR_27->iobase);

 FUNC_7(VAR_26, "--- System ---\n");

 FUNC_7(VAR_26,
      "IRQ Pending: Audio=%d, MIDI0=%d, MIDI1=%d, IRQcount=%d\n",
      VAR_28 & VAR_12,
      (VAR_28 & VAR_14) ? 1 : 0,
      (VAR_28 & VAR_15) ? 1 : 0,
      VAR_27->irq_count);
 FUNC_7(VAR_26,
      "HW pointer: id = %d, rawptr = %d (%d->%d) "
      "estimated= %ld (bytes)\n",
      ((VAR_28 & VAR_3) ? 1 : 0),
      (VAR_28 & VAR_4),
      (VAR_28 & VAR_4) %
      (2 * (int)VAR_27->period_bytes),
      ((VAR_28 & VAR_4) - 64) %
      (2 * (int)VAR_27->period_bytes),
      (long) FUNC_3(VAR_27) * 4);

 FUNC_7(VAR_26,
      "MIDI FIFO: Out1=0x%x, Out2=0x%x, In1=0x%x, In2=0x%x \n",
      FUNC_5(VAR_27, VAR_19) & 0xFF,
      FUNC_5(VAR_27, VAR_20) & 0xFF,
      FUNC_5(VAR_27, VAR_16) & 0xFF,
      FUNC_5(VAR_27, VAR_17) & 0xFF);
 FUNC_7(VAR_26,
      "MIDIoverMADI FIFO: In=0x%x, Out=0x%x \n",
      FUNC_5(VAR_27, VAR_18) & 0xFF,
      FUNC_5(VAR_27, VAR_21) & 0xFF);
 FUNC_7(VAR_26,
      "Register: ctrl1=0x%x, ctrl2=0x%x, status1=0x%x, "
      "status2=0x%x\n",
      VAR_27->control_register, VAR_27->control2_register,
      VAR_28, VAR_29);

 FUNC_7(VAR_26, "--- Settings ---\n");

 VAR_35 = FUNC_2(VAR_27);

 FUNC_7(VAR_26,
      "Size (Latency): %d samples (2 periods of %lu bytes)\n",
      VAR_35, (unsigned long) VAR_27->period_bytes);

 FUNC_7(VAR_26, "Line out: %s\n",
      (VAR_27->
       control_register & VAR_8) ? "on " : "off");

 FUNC_7(VAR_26,
      "ClearTrackMarker %s, Emphasis %s, Dolby %s\n",
      (VAR_27->
       control_register & VAR_13) ? "on" : "off",
      (VAR_27->
       control_register & VAR_7) ? "on" : "off",
      (VAR_27->
       control_register & VAR_6) ? "on" : "off");


 VAR_33 = FUNC_4(VAR_27);
 if (VAR_33 == 0)
  FUNC_7(VAR_26, "Preferred Sync Reference: Word Clock\n");
 else
  FUNC_7(VAR_26, "Preferred Sync Reference: AES%d\n",
    VAR_33);

 FUNC_7(VAR_26, "System Clock Frequency: %d\n",
      VAR_27->system_sample_rate);

 FUNC_7(VAR_26, "Double speed: %s\n",
   VAR_27->control_register & VAR_5?
   "Double wire" : "Single wire");
 FUNC_7(VAR_26, "Quad speed: %s\n",
   VAR_27->control_register & VAR_10?
   "Double wire" :
   VAR_27->control_register & VAR_11?
   "Quad wire" : "Single wire");

 FUNC_7(VAR_26, "--- Status:\n");

 VAR_31 = VAR_28 & VAR_1;
 VAR_32 = VAR_31 && (VAR_28 & VAR_2);

 FUNC_7(VAR_26, "Word: %s  Frequency: %d\n",
      (VAR_31) ? (VAR_32 ? "Sync   " : "Lock   ") : "No Lock",
      FUNC_0((VAR_28 >> VAR_0) & 0xF));

 for (VAR_35 = 0; VAR_35 < 8; VAR_35++) {
  FUNC_7(VAR_26, "AES%d: %s  Frequency: %d\n",
       VAR_35+1,
       (VAR_29 & (VAR_9 >> VAR_35)) ?
       "Sync   " : "No Lock",
       FUNC_0((VAR_30 >> (4*VAR_35)) & 0xF));
 }

 switch (FUNC_1(VAR_27)) {
 case 131:
  VAR_34 = "None"; break;
 case 128:
  VAR_34 = "Word Clock"; break;
 case 139:
  VAR_34 = "AES1"; break;
 case 138:
  VAR_34 = "AES2"; break;
 case 137:
  VAR_34 = "AES3"; break;
 case 136:
  VAR_34 = "AES4"; break;
 case 135:
  VAR_34 = "AES5"; break;
 case 134:
  VAR_34 = "AES6"; break;
 case 133:
  VAR_34 = "AES7"; break;
 case 132:
  VAR_34 = "AES8"; break;
 case 129:
  VAR_34 = "TCO"; break;
 case 130:
  VAR_34 = "Sync In"; break;
 default:
  VAR_34 = "---"; break;
 }
 FUNC_7(VAR_26, "AutoSync ref = %s\n", VAR_34);


 FUNC_6(VAR_25, VAR_26);

 FUNC_7(VAR_26, "\n");
}
