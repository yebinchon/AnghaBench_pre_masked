
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct snd_emu10k1_voice {TYPE_1__* epcm; scalar_t__ use; int (* interrupt ) (struct snd_emu10k1*,struct snd_emu10k1_voice*) ;} ;
struct TYPE_9__ {int (* interrupt ) (struct snd_emu10k1*,unsigned int) ;} ;
struct TYPE_8__ {int (* interrupt ) (struct snd_emu10k1*,unsigned int) ;} ;
struct snd_emu10k1 {TYPE_2__* card; scalar_t__ port; scalar_t__ audigy; struct snd_emu10k1_voice p16v_capture_voice; struct snd_emu10k1_voice* p16v_voices; int (* dsp_interrupt ) (struct snd_emu10k1*) ;int (* spdif_interrupt ) (struct snd_emu10k1*,unsigned int) ;TYPE_5__* timer; TYPE_4__ midi2; TYPE_3__ midi; int (* capture_efx_interrupt ) (struct snd_emu10k1*,unsigned int) ;int (* capture_mic_interrupt ) (struct snd_emu10k1*,unsigned int) ;int (* capture_interrupt ) (struct snd_emu10k1*,unsigned int) ;struct snd_emu10k1_voice* voices; int (* hwvol_interrupt ) (struct snd_emu10k1*,unsigned int) ;} ;
typedef int irqreturn_t ;
struct TYPE_10__ {int sticks; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 unsigned int VAR_41 ;
 unsigned int VAR_42 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (struct snd_emu10k1*,unsigned int) ;
 int FUNC_6 (struct snd_emu10k1*,int ,int ) ;
 int FUNC_7 (struct snd_emu10k1*,int) ;
 int FUNC_8 (struct snd_emu10k1*,int) ;
 int FUNC_9 (struct snd_emu10k1*,int) ;
 int FUNC_10 (struct snd_emu10k1*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (struct snd_emu10k1*,unsigned int) ;
 int FUNC_14 (struct snd_emu10k1*) ;
 int FUNC_15 (struct snd_emu10k1*,struct snd_emu10k1_voice*) ;
 int FUNC_16 (struct snd_emu10k1*,struct snd_emu10k1_voice*) ;
 int FUNC_17 (struct snd_emu10k1*,unsigned int) ;
 int FUNC_18 (struct snd_emu10k1*,unsigned int) ;
 int FUNC_19 (struct snd_emu10k1*,unsigned int) ;
 int FUNC_20 (struct snd_emu10k1*,unsigned int) ;
 int FUNC_21 (struct snd_emu10k1*,unsigned int) ;
 int FUNC_22 (struct snd_emu10k1*,unsigned int) ;

irqreturn_t FUNC_23(int VAR_43, void *VAR_44)
{
 struct snd_emu10k1 *VAR_45 = VAR_44;
 unsigned int VAR_46, VAR_47, VAR_48, VAR_49;
 int VAR_50 = 0;
 int VAR_51 = 0;

 while (((VAR_46 = FUNC_3(VAR_45->port + VAR_20)) != 0) && (VAR_51 < 1000)) {
  VAR_51++;
  VAR_48 = VAR_46;
  VAR_50 = 1;
  if ((VAR_46 & 0xffffffff) == 0xffffffff) {
   FUNC_2(VAR_45->card->dev,
     "Suspected sound card removal\n");
   break;
  }
  if (VAR_46 & VAR_40) {
   FUNC_1(VAR_45->card->dev, "interrupt: PCI error\n");
   FUNC_5(VAR_45, VAR_17);
   VAR_46 &= ~VAR_40;
  }
  if (VAR_46 & (VAR_42|VAR_41|VAR_38)) {
   if (VAR_45->hwvol_interrupt)
    VAR_45->hwvol_interrupt(VAR_45, VAR_46);
   else
    FUNC_5(VAR_45, VAR_19|VAR_18|VAR_16);
   VAR_46 &= ~(VAR_42|VAR_41|VAR_38);
  }
  if (VAR_46 & VAR_27) {
   int VAR_52;
   int VAR_53 = VAR_46 & VAR_28;
   u32 VAR_54;
   struct snd_emu10k1_voice *VAR_55 = VAR_45->voices;

   VAR_54 = FUNC_6(VAR_45, VAR_1, 0);
   for (VAR_52 = 0; VAR_52 <= VAR_53; VAR_52++) {
    if (VAR_52 == 0x20)
     VAR_54 = FUNC_6(VAR_45, VAR_0, 0);
    if (VAR_54 & 1) {
     if (VAR_55->use && VAR_55->interrupt != ((void*)0)) {
      VAR_55->interrupt(VAR_45, VAR_55);
      FUNC_9(VAR_45, VAR_52);
     } else {
      FUNC_10(VAR_45, VAR_52);
     }
    }
    VAR_54 >>= 1;
    VAR_55++;
   }
   VAR_54 = FUNC_6(VAR_45, VAR_3, 0);
   for (VAR_52 = 0; VAR_52 <= VAR_53; VAR_52++) {
    if (VAR_52 == 0x20)
     VAR_54 = FUNC_6(VAR_45, VAR_2, 0);
    if (VAR_54 & 1) {
     if (VAR_55->use && VAR_55->interrupt != ((void*)0)) {
      VAR_55->interrupt(VAR_45, VAR_55);
      FUNC_7(VAR_45, VAR_52);
     } else {
      FUNC_8(VAR_45, VAR_52);
     }
    }
    VAR_54 >>= 1;
    VAR_55++;
   }
   VAR_46 &= ~VAR_27;
  }
  VAR_46 &= ~VAR_28;
  if (VAR_46 & (VAR_22|VAR_23)) {
   if (VAR_45->capture_interrupt)
    VAR_45->capture_interrupt(VAR_45, VAR_46);
   else
    FUNC_5(VAR_45, VAR_5);
   VAR_46 &= ~(VAR_22|VAR_23);
  }
  if (VAR_46 & (VAR_34|VAR_35)) {
   if (VAR_45->capture_mic_interrupt)
    VAR_45->capture_mic_interrupt(VAR_45, VAR_46);
   else
    FUNC_5(VAR_45, VAR_13);
   VAR_46 &= ~(VAR_34|VAR_35);
  }
  if (VAR_46 & (VAR_29|VAR_30)) {
   if (VAR_45->capture_efx_interrupt)
    VAR_45->capture_efx_interrupt(VAR_45, VAR_46);
   else
    FUNC_5(VAR_45, VAR_9);
   VAR_46 &= ~(VAR_29|VAR_30);
  }
  if (VAR_46 & (VAR_37|VAR_36)) {
   if (VAR_45->midi.interrupt)
    VAR_45->midi.interrupt(VAR_45, VAR_46);
   else
    FUNC_5(VAR_45, VAR_15|VAR_14);
   VAR_46 &= ~(VAR_37|VAR_36);
  }
  if (VAR_46 & (VAR_25|VAR_24)) {
   if (VAR_45->midi2.interrupt)
    VAR_45->midi2.interrupt(VAR_45, VAR_46);
   else
    FUNC_5(VAR_45, VAR_7|VAR_6);
   VAR_46 &= ~(VAR_25|VAR_24);
  }
  if (VAR_46 & VAR_33) {
   if (VAR_45->timer)
    FUNC_12(VAR_45->timer, VAR_45->timer->sticks);
   else
    FUNC_5(VAR_45, VAR_12);
   VAR_46 &= ~VAR_33;
  }
  if (VAR_46 & (VAR_32|VAR_26)) {
   if (VAR_45->spdif_interrupt)
    VAR_45->spdif_interrupt(VAR_45, VAR_46);
   else
    FUNC_5(VAR_45, VAR_11|VAR_8);
   VAR_46 &= ~(VAR_32|VAR_26);
  }
  if (VAR_46 & VAR_31) {
   if (VAR_45->dsp_interrupt)
    VAR_45->dsp_interrupt(VAR_45);
   else
    FUNC_5(VAR_45, VAR_10);
   VAR_46 &= ~VAR_31;
  }
  if (VAR_46 & VAR_39) {
   while ((VAR_47 = FUNC_3(VAR_45->port + VAR_21)) != 0) {
    u32 VAR_56 = VAR_4;
    struct snd_emu10k1_voice *VAR_57 = &(VAR_45->p16v_voices[0]);
    struct snd_emu10k1_voice *VAR_58 = &(VAR_45->p16v_capture_voice);


    VAR_49 = VAR_47;
    if(VAR_47 & VAR_56) {
     if(VAR_57->use) {
      FUNC_11(VAR_57->epcm->substream);
     } else {
      FUNC_1(VAR_45->card->dev,
       "p16v: status: 0x%08x, mask=0x%08x, pvoice=%p, use=%d\n",
       VAR_47, VAR_56, VAR_57,
       VAR_57->use);
     }
    }
    if(VAR_47 & 0x110000) {

     if(VAR_58->use) {

      FUNC_11(VAR_58->epcm->substream);
     }
    }
    FUNC_4(VAR_49, VAR_45->port + VAR_21);
   }
   VAR_46 &= ~VAR_39;
  }

  if (VAR_46) {
   unsigned int VAR_59;
   FUNC_1(VAR_45->card->dev,
    "unhandled interrupt: 0x%08x\n", VAR_46);

   VAR_59 = VAR_10 |
    VAR_17 |
    VAR_19 |
    VAR_18 |
    VAR_16 |
    VAR_13 |
    VAR_5 |
    VAR_9 |
    VAR_11 |
    VAR_8 |
    VAR_12 |
    VAR_15 |
    VAR_14;
   if (VAR_45->audigy)
    VAR_59 |= VAR_7 | VAR_6;
   FUNC_5(VAR_45, VAR_59);
  }
  FUNC_4(VAR_48, VAR_45->port + VAR_20);
 }
 if (VAR_51 == 1000)
  FUNC_2(VAR_45->card->dev, "emu10k1 irq routine failure\n");

 return FUNC_0(VAR_50);
}
