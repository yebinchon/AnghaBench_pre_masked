
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {scalar_t__ capture_con_substream; scalar_t__ playback_con_substream; scalar_t__* playback_con_substream_ds; scalar_t__ capture_pro_substream; scalar_t__ playback_pro_substream; int reg_lock; scalar_t__ midi_input; scalar_t__ midi_output; TYPE_1__* card; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct snd_ice1712*,unsigned char,int ) ;
 unsigned char FUNC_5 (int ) ;
 int FUNC_6 (unsigned char,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct snd_ice1712*) ;
 int FUNC_11 (struct snd_ice1712*) ;
 int FUNC_12 (struct snd_ice1712*) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_15, void *VAR_16)
{
 struct snd_ice1712 *VAR_17 = VAR_16;
 unsigned char VAR_18;
 unsigned char VAR_19 =
  VAR_4 | VAR_5 | VAR_6;
 int VAR_20 = 0;
 int VAR_21 = 0;

 while (1) {
  VAR_18 = FUNC_5(FUNC_1(VAR_17, VAR_3));
  VAR_18 &= VAR_19;
  if (VAR_18 == 0)
   break;
  FUNC_8(&VAR_17->reg_lock);
  if (++VAR_21 > 10) {
   VAR_18 = FUNC_5(FUNC_1(VAR_17, VAR_3));
   FUNC_3(VAR_17->card->dev,
    "Too long irq loop, status = 0x%x\n", VAR_18);
   if (VAR_18 & VAR_5) {
    FUNC_3(VAR_17->card->dev, "Disabling MPU_TX\n");
    FUNC_4(VAR_17, VAR_5, 0);
   }
   FUNC_9(&VAR_17->reg_lock);
   break;
  }
  VAR_20 = 1;
  if (VAR_18 & VAR_5) {
   if (VAR_17->midi_output)
    FUNC_12(VAR_17);
   else
    FUNC_4(VAR_17, VAR_5, 0);





   VAR_19 &= ~VAR_5;
  }
  if (VAR_18 & VAR_4) {
   if (VAR_17->midi_input)
    FUNC_11(VAR_17);
   else
    FUNC_10(VAR_17);
  }

  FUNC_6(VAR_18, FUNC_1(VAR_17, VAR_3));
  FUNC_9(&VAR_17->reg_lock);
  if (VAR_18 & VAR_6) {
   unsigned char VAR_22 = FUNC_5(FUNC_0(VAR_17, VAR_2));
   if (VAR_22 & VAR_8) {
    if (VAR_17->playback_pro_substream)
     FUNC_7(VAR_17->playback_pro_substream);
   }
   if (VAR_22 & VAR_13) {
    if (VAR_17->capture_pro_substream)
     FUNC_7(VAR_17->capture_pro_substream);
   }
   if (VAR_22 & VAR_9) {
    if (VAR_17->playback_con_substream_ds[0])
     FUNC_7(VAR_17->playback_con_substream_ds[0]);
   }
   if (VAR_22 & VAR_10) {
    if (VAR_17->playback_con_substream_ds[1])
     FUNC_7(VAR_17->playback_con_substream_ds[1]);
   }
   if (VAR_22 & VAR_11) {
    if (VAR_17->playback_con_substream_ds[2])
     FUNC_7(VAR_17->playback_con_substream_ds[2]);
   }
   if (VAR_22 & VAR_12) {
    if (VAR_17->playback_con_substream)
     FUNC_7(VAR_17->playback_con_substream);
   }
   if (VAR_22 & VAR_14) {
    if (VAR_17->capture_con_substream)
     FUNC_7(VAR_17->capture_con_substream);
   }

   FUNC_6(VAR_22, FUNC_0(VAR_17, VAR_2));

   if (VAR_22 & VAR_7) {
    unsigned char VAR_23 = FUNC_5(FUNC_0(VAR_17, VAR_0));
    FUNC_6(VAR_23, FUNC_0(VAR_17, VAR_0));
    FUNC_6(VAR_7 | FUNC_5(FUNC_0(VAR_17, VAR_1)), FUNC_0(VAR_17, VAR_1));

   }

  }
 }
 return FUNC_2(VAR_20);
}
