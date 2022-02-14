
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct hdsp* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct hdsp {int control_register; int state; int io_type; scalar_t__ clock_source_locked; int system_sample_rate; scalar_t__ precise_ptr; scalar_t__ period_bytes; scalar_t__ use_midi_tasklet; int control2_register; scalar_t__ iobase; int port; int irq; int playback_buffer; int capture_buffer; TYPE_1__* card; int card_name; } ;
struct TYPE_2__ {scalar_t__ number; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;





 int VAR_12 ;





 int VAR_13 ;
 unsigned int VAR_14 ;




 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;






 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (struct hdsp*) ;
 int FUNC_1 (struct hdsp*) ;
 scalar_t__ FUNC_2 (struct hdsp*,int ) ;
 scalar_t__ FUNC_3 (struct hdsp*) ;
 int FUNC_4 (struct hdsp*) ;
 int FUNC_5 (struct hdsp*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct hdsp*) ;
 int FUNC_8 (struct hdsp*) ;
 int FUNC_9 (struct hdsp*) ;
 int FUNC_10 (struct hdsp*) ;
 int FUNC_11 (struct hdsp*,int ) ;
 int FUNC_12 (struct hdsp*) ;
 int FUNC_13 (struct hdsp*) ;
 int FUNC_14 (struct hdsp*) ;
 scalar_t__ FUNC_15 (struct hdsp*) ;
 scalar_t__ FUNC_16 (struct hdsp*,int ) ;
 scalar_t__ FUNC_17 (struct hdsp*) ;
 int FUNC_18 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_19(struct snd_info_entry *VAR_38, struct snd_info_buffer *VAR_39)
{
 struct hdsp *VAR_40 = VAR_38->private_data;
 unsigned int VAR_41;
 unsigned int VAR_42;
 char *VAR_43;
 char *VAR_44;
 char *VAR_45;
 char *VAR_46;
 int VAR_47;

 VAR_41 = FUNC_11(VAR_40, VAR_31);
 VAR_42 = FUNC_11(VAR_40, VAR_30);

 FUNC_18(VAR_39, "%s (Card #%d)\n", VAR_40->card_name,
      VAR_40->card->number + 1);
 FUNC_18(VAR_39, "Buffers: capture %p playback %p\n",
      VAR_40->capture_buffer, VAR_40->playback_buffer);
 FUNC_18(VAR_39, "IRQ: %d Registers bus: 0x%lx VM: 0x%lx\n",
      VAR_40->irq, VAR_40->port, (unsigned long)VAR_40->iobase);
 FUNC_18(VAR_39, "Control register: 0x%x\n", VAR_40->control_register);
 FUNC_18(VAR_39, "Control2 register: 0x%x\n",
      VAR_40->control2_register);
 FUNC_18(VAR_39, "Status register: 0x%x\n", VAR_41);
 FUNC_18(VAR_39, "Status2 register: 0x%x\n", VAR_42);

 if (FUNC_3(VAR_40)) {
  FUNC_18(VAR_39, "No I/O box connected.\n"
       "Please connect one and upload firmware.\n");
  return;
 }

 if (FUNC_2(VAR_40, 0)) {
  if (VAR_40->state & VAR_3) {
   if (FUNC_17(VAR_40) != 0) {
    FUNC_18(VAR_39, "Firmware loading from "
         "cache failed, "
         "please upload manually.\n");
    return;
   }
  } else {
   int VAR_48 = -VAR_0;
   VAR_48 = FUNC_12(VAR_40);
   if (VAR_48 < 0) {
    FUNC_18(VAR_39,
         "No firmware loaded nor cached, "
         "please upload firmware.\n");
    return;
   }
  }
 }

 FUNC_18(VAR_39, "FIFO status: %d\n", FUNC_11(VAR_40, VAR_25) & 0xff);
 FUNC_18(VAR_39, "MIDI1 Output status: 0x%x\n", FUNC_11(VAR_40, VAR_28));
 FUNC_18(VAR_39, "MIDI1 Input status: 0x%x\n", FUNC_11(VAR_40, VAR_26));
 FUNC_18(VAR_39, "MIDI2 Output status: 0x%x\n", FUNC_11(VAR_40, VAR_29));
 FUNC_18(VAR_39, "MIDI2 Input status: 0x%x\n", FUNC_11(VAR_40, VAR_27));
 FUNC_18(VAR_39, "Use Midi Tasklet: %s\n", VAR_40->use_midi_tasklet ? "on" : "off");

 FUNC_18(VAR_39, "\n");

 VAR_47 = 1 << (6 + FUNC_6(VAR_40->control_register & VAR_4));

 FUNC_18(VAR_39, "Buffer Size (Latency): %d samples (2 periods of %lu bytes)\n", VAR_47, (unsigned long) VAR_40->period_bytes);
 FUNC_18(VAR_39, "Hardware pointer (frames): %ld\n", FUNC_8(VAR_40));
 FUNC_18(VAR_39, "Precise pointer: %s\n", VAR_40->precise_ptr ? "on" : "off");
 FUNC_18(VAR_39, "Line out: %s\n", (VAR_40->control_register & VAR_5) ? "on" : "off");

 FUNC_18(VAR_39, "Firmware version: %d\n", (VAR_42&VAR_32)|(VAR_42&VAR_33)<<1|(VAR_42&VAR_34)<<2);

 FUNC_18(VAR_39, "\n");

 switch (FUNC_4(VAR_40)) {
 case 157:
  VAR_46 = "AutoSync";
  break;
 case 153:
  VAR_46 = "Internal 32 kHz";
  break;
 case 152:
  VAR_46 = "Internal 44.1 kHz";
  break;
 case 151:
  VAR_46 = "Internal 48 kHz";
  break;
 case 150:
  VAR_46 = "Internal 64 kHz";
  break;
 case 149:
  VAR_46 = "Internal 88.2 kHz";
  break;
 case 148:
  VAR_46 = "Internal 96 kHz";
  break;
 case 156:
  VAR_46 = "Internal 128 kHz";
  break;
 case 155:
  VAR_46 = "Internal 176.4 kHz";
  break;
  case 154:
  VAR_46 = "Internal 192 kHz";
  break;
 default:
  VAR_46 = "Error";
 }
 FUNC_18 (VAR_39, "Sample Clock Source: %s\n", VAR_46);

 if (FUNC_15(VAR_40))
  VAR_45 = "Slave";
 else
  VAR_45 = "Master";

 switch (FUNC_10 (VAR_40)) {
 case 128:
  VAR_43 = "Word Clock";
  break;
 case 130:
  VAR_43 = "ADAT Sync";
  break;
 case 129:
  VAR_43 = "SPDIF";
  break;
 case 133:
  VAR_43 = "ADAT1";
  break;
 case 132:
  VAR_43 = "ADAT2";
  break;
 case 131:
  VAR_43 = "ADAT3";
  break;
 default:
  VAR_43 = "Word Clock";
  break;
 }
 FUNC_18 (VAR_39, "Preferred Sync Reference: %s\n", VAR_43);

 switch (FUNC_1 (VAR_40)) {
 case 158:
  VAR_44 = "Word Clock";
  break;
 case 161:
  VAR_44 = "ADAT Sync";
  break;
 case 159:
  VAR_44 = "SPDIF";
  break;
 case 160:
  VAR_44 = "None";
  break;
 case 164:
  VAR_44 = "ADAT1";
  break;
 case 163:
  VAR_44 = "ADAT2";
  break;
 case 162:
  VAR_44 = "ADAT3";
  break;
 default:
  VAR_44 = "---";
  break;
 }
 FUNC_18 (VAR_39, "AutoSync Reference: %s\n", VAR_44);

 FUNC_18 (VAR_39, "AutoSync Frequency: %d\n", FUNC_7(VAR_40));

 FUNC_18 (VAR_39, "System Clock Mode: %s\n", VAR_45);

 FUNC_18 (VAR_39, "System Clock Frequency: %d\n", VAR_40->system_sample_rate);
 FUNC_18 (VAR_39, "System Clock Locked: %s\n", VAR_40->clock_source_locked ? "Yes" : "No");

 FUNC_18(VAR_39, "\n");

 if (VAR_40->io_type != VAR_37) {
  switch (FUNC_13(VAR_40)) {
  case 134:
   FUNC_18(VAR_39, "IEC958 input: Optical\n");
   break;
  case 136:
   FUNC_18(VAR_39, "IEC958 input: Coaxial\n");
   break;
  case 135:
   FUNC_18(VAR_39, "IEC958 input: Internal\n");
   break;
  case 137:
   FUNC_18(VAR_39, "IEC958 input: AES\n");
   break;
  default:
   FUNC_18(VAR_39, "IEC958 input: ???\n");
   break;
  }
 }

 if (VAR_37 == VAR_40->io_type) {
  if (VAR_40->control_register & VAR_9)
   FUNC_18(VAR_39, "RPM Bypass: disabled\n");
  else
   FUNC_18(VAR_39, "RPM Bypass: enabled\n");
  if (VAR_40->control_register & VAR_10)
   FUNC_18(VAR_39, "RPM disconnected\n");
  else
   FUNC_18(VAR_39, "RPM connected\n");

  switch (VAR_40->control_register & VAR_11) {
  case 144:
   FUNC_18(VAR_39, "Input 1/2: Phono, 6dB\n");
   break;
  case 145:
   FUNC_18(VAR_39, "Input 1/2: Phono, 0dB\n");
   break;
  case 143:
   FUNC_18(VAR_39, "Input 1/2: Phono, -6dB\n");
   break;
  case 147:
   FUNC_18(VAR_39, "Input 1/2: Line, 0dB\n");
   break;
  case 146:
   FUNC_18(VAR_39, "Input 1/2: Line, -6dB\n");
   break;
  default:
   FUNC_18(VAR_39, "Input 1/2: ???\n");
  }

  switch (VAR_40->control_register & VAR_12) {
  case 139:
   FUNC_18(VAR_39, "Input 3/4: Phono, 6dB\n");
   break;
  case 140:
   FUNC_18(VAR_39, "Input 3/4: Phono, 0dB\n");
   break;
  case 138:
   FUNC_18(VAR_39, "Input 3/4: Phono, -6dB\n");
   break;
  case 142:
   FUNC_18(VAR_39, "Input 3/4: Line, 0dB\n");
   break;
  case 141:
   FUNC_18(VAR_39, "Input 3/4: Line, -6dB\n");
   break;
  default:
   FUNC_18(VAR_39, "Input 3/4: ???\n");
  }

 } else {
  if (VAR_40->control_register & VAR_16)
   FUNC_18(VAR_39, "IEC958 output: Coaxial & ADAT1\n");
  else
   FUNC_18(VAR_39, "IEC958 output: Coaxial only\n");

  if (VAR_40->control_register & VAR_17)
   FUNC_18(VAR_39, "IEC958 quality: Professional\n");
  else
   FUNC_18(VAR_39, "IEC958 quality: Consumer\n");

  if (VAR_40->control_register & VAR_13)
   FUNC_18(VAR_39, "IEC958 emphasis: on\n");
  else
   FUNC_18(VAR_39, "IEC958 emphasis: off\n");

  if (VAR_40->control_register & VAR_15)
   FUNC_18(VAR_39, "IEC958 NonAudio: on\n");
  else
   FUNC_18(VAR_39, "IEC958 NonAudio: off\n");
  VAR_47 = FUNC_14(VAR_40);
  if (VAR_47 != 0)
   FUNC_18(VAR_39, "IEC958 sample rate: %d\n", VAR_47);
  else
   FUNC_18(VAR_39, "IEC958 sample rate: Error flag set\n");
 }
 FUNC_18(VAR_39, "\n");


 VAR_47 = VAR_41 & VAR_19;
 if (VAR_41 & VAR_6)
  FUNC_18(VAR_39, "ADAT1: %s\n", VAR_47 ? "Sync" : "Lock");
 else
  FUNC_18(VAR_39, "ADAT1: No Lock\n");

 switch (VAR_40->io_type) {
 case 166:
 case 165:
  VAR_47 = VAR_41 & VAR_20;
  if (VAR_41 & VAR_7)
   FUNC_18(VAR_39, "ADAT2: %s\n", VAR_47 ? "Sync" : "Lock");
  else
   FUNC_18(VAR_39, "ADAT2: No Lock\n");
  VAR_47 = VAR_41 & VAR_21;
  if (VAR_41 & VAR_8)
   FUNC_18(VAR_39, "ADAT3: %s\n", VAR_47 ? "Sync" : "Lock");
  else
   FUNC_18(VAR_39, "ADAT3: No Lock\n");
  break;
 default:

  break;
 }

 VAR_47 = VAR_41 & VAR_18;
 if (VAR_41 & VAR_14)
  FUNC_18 (VAR_39, "SPDIF: No Lock\n");
 else
  FUNC_18 (VAR_39, "SPDIF: %s\n", VAR_47 ? "Sync" : "Lock");

 VAR_47 = VAR_42 & VAR_36;
 if (VAR_42 & VAR_35)
  FUNC_18 (VAR_39, "Word Clock: %s\n", VAR_47 ? "Sync" : "Lock");
 else
  FUNC_18 (VAR_39, "Word Clock: No Lock\n");

 VAR_47 = VAR_41 & VAR_23;
 if (VAR_41 & VAR_22)
  FUNC_18(VAR_39, "ADAT Sync: %s\n", VAR_47 ? "Sync" : "Lock");
 else
  FUNC_18(VAR_39, "ADAT Sync: No Lock\n");

 FUNC_18(VAR_39, "\n");


 if (VAR_40->io_type == VAR_1) {
  char *VAR_49;

  switch (FUNC_0(VAR_40)) {
  case 0:
   VAR_49 = "-10 dBV";
   break;
  case 1:
   VAR_49 = "+4 dBu";
   break;
  default:
   VAR_49 = "Lo Gain";
   break;
  }
  FUNC_18(VAR_39, "AD Gain : %s\n", VAR_49);

  switch (FUNC_5(VAR_40)) {
  case 0:
   VAR_49 = "Hi Gain";
   break;
  case 1:
   VAR_49 = "+4 dBu";
   break;
  default:
   VAR_49 = "-10 dBV";
   break;
  }
  FUNC_18(VAR_39, "DA Gain : %s\n", VAR_49);

  switch (FUNC_9(VAR_40)) {
  case 0:
   VAR_49 = "0 dB";
   break;
  case 1:
   VAR_49 = "-6 dB";
   break;
  default:
   VAR_49 = "-12 dB";
   break;
  }
  FUNC_18(VAR_39, "Phones Gain : %s\n", VAR_49);

  FUNC_18(VAR_39, "XLR Breakout Cable : %s\n",
   FUNC_16(VAR_40, VAR_24) ?
   "yes" : "no");

  if (VAR_40->control_register & VAR_2)
   FUNC_18(VAR_39, "AEB : on (ADAT1 internal)\n");
  else
   FUNC_18(VAR_39, "AEB : off (ADAT1 external)\n");
  FUNC_18(VAR_39, "\n");
 }

}
