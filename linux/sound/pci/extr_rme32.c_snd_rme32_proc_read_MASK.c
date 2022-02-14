
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {scalar_t__ private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct rme32 {int rcreg; int wcreg; scalar_t__ fullduplex_mode; TYPE_1__* card; scalar_t__ iobase; } ;
struct TYPE_2__ {char* longname; scalar_t__ number; } ;






 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct rme32*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;
 scalar_t__ FUNC_3 (struct rme32*,int*) ;
 int FUNC_4 (struct rme32*) ;
 int FUNC_5 (struct rme32*) ;

__attribute__((used)) static void
FUNC_6(struct snd_info_entry * VAR_10, struct snd_info_buffer *VAR_11)
{
 int VAR_12;
 struct rme32 *VAR_13 = (struct rme32 *) VAR_10->private_data;

 VAR_13->rcreg = FUNC_1(VAR_13->iobase + VAR_0);

 FUNC_2(VAR_11, VAR_13->card->longname);
 FUNC_2(VAR_11, " (index #%d)\n", VAR_13->card->number + 1);

 FUNC_2(VAR_11, "\nGeneral settings\n");
 if (VAR_13->fullduplex_mode)
  FUNC_2(VAR_11, "  Full-duplex mode\n");
 else
  FUNC_2(VAR_11, "  Half-duplex mode\n");
 if (FUNC_0(VAR_13)) {
  FUNC_2(VAR_11, "  receiver: CS8414\n");
 } else {
  FUNC_2(VAR_11, "  receiver: CS8412\n");
 }
 if (VAR_13->wcreg & VAR_5) {
  FUNC_2(VAR_11, "  format: 24 bit");
 } else {
  FUNC_2(VAR_11, "  format: 16 bit");
 }
 if (VAR_13->wcreg & VAR_6) {
  FUNC_2(VAR_11, ", Mono\n");
 } else {
  FUNC_2(VAR_11, ", Stereo\n");
 }

 FUNC_2(VAR_11, "\nInput settings\n");
 switch (FUNC_4(VAR_13)) {
 case 129:
  FUNC_2(VAR_11, "  input: optical");
  break;
 case 131:
  FUNC_2(VAR_11, "  input: coaxial");
  break;
 case 130:
  FUNC_2(VAR_11, "  input: internal");
  break;
 case 128:
  FUNC_2(VAR_11, "  input: XLR");
  break;
 }
 if (FUNC_3(VAR_13, &VAR_12) < 0) {
  FUNC_2(VAR_11, "\n  sample rate: no valid signal\n");
 } else {
  if (VAR_12) {
   FUNC_2(VAR_11, " (8 channels)\n");
  } else {
   FUNC_2(VAR_11, " (2 channels)\n");
  }
  FUNC_2(VAR_11, "  sample rate: %d Hz\n",
       FUNC_3(VAR_13, &VAR_12));
 }

 FUNC_2(VAR_11, "\nOutput settings\n");
 if (VAR_13->wcreg & VAR_9) {
  FUNC_2(VAR_11, "  output signal: normal playback");
 } else {
  FUNC_2(VAR_11, "  output signal: same as input");
 }
 if (VAR_13->wcreg & VAR_7) {
  FUNC_2(VAR_11, " (muted)\n");
 } else {
  FUNC_2(VAR_11, "\n");
 }


 if (!
     ((!(VAR_13->wcreg & VAR_3))
      && (!(VAR_13->wcreg & VAR_4)))) {
  FUNC_2(VAR_11, "  sample rate: %d Hz\n",
       FUNC_5(VAR_13));
 }
 if (VAR_13->rcreg & VAR_1) {
  FUNC_2(VAR_11, "  sample clock source: AutoSync\n");
 } else {
  FUNC_2(VAR_11, "  sample clock source: Internal\n");
 }
 if (VAR_13->wcreg & VAR_8) {
  FUNC_2(VAR_11, "  format: AES/EBU (professional)\n");
 } else {
  FUNC_2(VAR_11, "  format: IEC958 (consumer)\n");
 }
 if (VAR_13->wcreg & VAR_2) {
  FUNC_2(VAR_11, "  emphasis: on\n");
 } else {
  FUNC_2(VAR_11, "  emphasis: off\n");
 }
}
