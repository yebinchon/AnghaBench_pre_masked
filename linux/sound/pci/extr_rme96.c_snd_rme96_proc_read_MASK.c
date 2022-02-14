
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct rme96* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct rme96 {int wcreg; int areg; scalar_t__* vol; TYPE_1__* card; scalar_t__ iobase; int rcreg; } ;
struct TYPE_2__ {scalar_t__ number; int longname; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (struct rme96*) ;





 scalar_t__ VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;
 scalar_t__ FUNC_3 (struct rme96*,int*) ;
 int FUNC_4 (struct rme96*) ;
 int const FUNC_5 (struct rme96*) ;
 int FUNC_6 (struct rme96*) ;
 scalar_t__ FUNC_7 (struct rme96*) ;

__attribute__((used)) static void
FUNC_8(struct snd_info_entry *VAR_11, struct snd_info_buffer *VAR_12)
{
 int VAR_13;
 struct rme96 *VAR_14 = VAR_11->private_data;

 VAR_14->rcreg = FUNC_1(VAR_14->iobase + VAR_1);

 FUNC_2(VAR_12, VAR_14->card->longname);
 FUNC_2(VAR_12, " (index #%d)\n", VAR_14->card->number + 1);

 FUNC_2(VAR_12, "\nGeneral settings\n");
 if (VAR_14->wcreg & VAR_4) {
  FUNC_2(VAR_12, "  period size: N/A (interrupts "
       "disabled)\n");
 } else if (VAR_14->wcreg & VAR_5) {
  FUNC_2(VAR_12, "  period size: 2048 bytes\n");
 } else {
  FUNC_2(VAR_12, "  period size: 8192 bytes\n");
 }
 FUNC_2(VAR_12, "\nInput settings\n");
 switch (FUNC_5(VAR_14)) {
 case 133:
  FUNC_2(VAR_12, "  input: optical");
  break;
 case 135:
  FUNC_2(VAR_12, "  input: coaxial");
  break;
 case 134:
  FUNC_2(VAR_12, "  input: internal");
  break;
 case 132:
  FUNC_2(VAR_12, "  input: XLR");
  break;
 case 136:
  FUNC_2(VAR_12, "  input: analog");
  break;
 }
 if (FUNC_3(VAR_14, &VAR_13) < 0) {
  FUNC_2(VAR_12, "\n  sample rate: no valid signal\n");
 } else {
  if (VAR_13) {
   FUNC_2(VAR_12, " (8 channels)\n");
  } else {
   FUNC_2(VAR_12, " (2 channels)\n");
  }
  FUNC_2(VAR_12, "  sample rate: %d Hz\n",
       FUNC_3(VAR_14, &VAR_13));
 }
 if (VAR_14->wcreg & VAR_8) {
  FUNC_2(VAR_12, "  sample format: 24 bit\n");
 } else {
  FUNC_2(VAR_12, "  sample format: 16 bit\n");
 }

 FUNC_2(VAR_12, "\nOutput settings\n");
 if (VAR_14->wcreg & VAR_10) {
  FUNC_2(VAR_12, "  output signal: normal playback\n");
 } else {
  FUNC_2(VAR_12, "  output signal: same as input\n");
 }
 FUNC_2(VAR_12, "  sample rate: %d Hz\n",
      FUNC_7(VAR_14));
 if (VAR_14->wcreg & VAR_7) {
  FUNC_2(VAR_12, "  sample format: 24 bit\n");
 } else {
  FUNC_2(VAR_12, "  sample format: 16 bit\n");
 }
 if (VAR_14->areg & VAR_0) {
  FUNC_2(VAR_12, "  sample clock source: word clock\n");
 } else if (VAR_14->wcreg & VAR_6) {
  FUNC_2(VAR_12, "  sample clock source: internal\n");
 } else if (FUNC_5(VAR_14) == 136) {
  FUNC_2(VAR_12, "  sample clock source: autosync (internal anyway due to analog input setting)\n");
 } else if (FUNC_3(VAR_14, &VAR_13) < 0) {
  FUNC_2(VAR_12, "  sample clock source: autosync (internal anyway due to no valid signal)\n");
 } else {
  FUNC_2(VAR_12, "  sample clock source: autosync\n");
 }
 if (VAR_14->wcreg & VAR_9) {
  FUNC_2(VAR_12, "  format: AES/EBU (professional)\n");
 } else {
  FUNC_2(VAR_12, "  format: IEC958 (consumer)\n");
 }
 if (VAR_14->wcreg & VAR_3) {
  FUNC_2(VAR_12, "  emphasis: on\n");
 } else {
  FUNC_2(VAR_12, "  emphasis: off\n");
 }
 if (VAR_14->wcreg & VAR_2) {
  FUNC_2(VAR_12, "  non-audio (dolby): on\n");
 } else {
  FUNC_2(VAR_12, "  non-audio (dolby): off\n");
 }
 if (FUNC_0(VAR_14)) {
  FUNC_2(VAR_12, "\nAnalog output settings\n");
  switch (FUNC_6(VAR_14)) {
  case 131:
   FUNC_2(VAR_12, "  monitored ADAT tracks: 1+2\n");
   break;
  case 130:
   FUNC_2(VAR_12, "  monitored ADAT tracks: 3+4\n");
   break;
  case 129:
   FUNC_2(VAR_12, "  monitored ADAT tracks: 5+6\n");
   break;
  case 128:
   FUNC_2(VAR_12, "  monitored ADAT tracks: 7+8\n");
   break;
  }
  switch (FUNC_4(VAR_14)) {
  case 140:
   FUNC_2(VAR_12, "  attenuation: 0 dB\n");
   break;
  case 137:
   FUNC_2(VAR_12, "  attenuation: -6 dB\n");
   break;
  case 139:
   FUNC_2(VAR_12, "  attenuation: -12 dB\n");
   break;
  case 138:
   FUNC_2(VAR_12, "  attenuation: -18 dB\n");
   break;
  }
  FUNC_2(VAR_12, "  volume left: %u\n", VAR_14->vol[0]);
  FUNC_2(VAR_12, "  volume right: %u\n", VAR_14->vol[1]);
 }
}
