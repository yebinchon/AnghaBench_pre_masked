
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident_voice {unsigned int stimer; unsigned int spurious_threshold; unsigned int isync_max; unsigned int isync_mark; int isync_ESO; unsigned int ESO; int * substream; int number; struct snd_trident_voice* extra; scalar_t__ isync2; int isync3; scalar_t__ isync; int pcm; } ;
struct TYPE_3__ {struct snd_trident_voice* voices; } ;
struct snd_trident {unsigned int spurious_irq_max_delta; int bDMAStart; TYPE_2__* rmidi; int reg_lock; int spurious_irq_count; TYPE_1__ synth; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int private_data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct snd_trident*,int ) ;
 int FUNC_8 (struct snd_trident*,int ) ;
 int FUNC_9 (struct snd_trident*,struct snd_trident_voice*,unsigned int) ;
 int FUNC_10 (struct snd_trident*,struct snd_trident_voice*,unsigned int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_12, void *VAR_13)
{
 struct snd_trident *VAR_14 = VAR_13;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;
 struct snd_trident_voice *VAR_22;

 VAR_15 = FUNC_2(FUNC_0(VAR_14, VAR_7));
 if ((VAR_15 & (VAR_0|VAR_3)) == 0)
  return VAR_2;
 if (VAR_15 & VAR_0) {

  FUNC_11(&VAR_14->reg_lock);
  VAR_17 = FUNC_2(FUNC_0(VAR_14, VAR_10)) & 0x00ffffff;
  VAR_16 = FUNC_2(FUNC_0(VAR_14, VAR_5));
  if (VAR_16 == 0)
   goto __skip1;
  FUNC_4(VAR_16, FUNC_0(VAR_14, VAR_5));
       __skip1:
  VAR_16 = FUNC_2(FUNC_0(VAR_14, VAR_6));
  if (VAR_16 == 0)
   goto __skip2;
  for (VAR_18 = 63; VAR_18 >= 32; VAR_18--) {
   VAR_19 = 1 << (VAR_18&0x1f);
   if ((VAR_16 & VAR_19) == 0)
    continue;
   VAR_22 = &VAR_14->synth.voices[VAR_18];
   if (!VAR_22->pcm || VAR_22->substream == ((void*)0)) {
    FUNC_4(VAR_19, FUNC_0(VAR_14, VAR_11));
    continue;
   }
   VAR_21 = (int)VAR_17 - (int)VAR_22->stimer;
   if (VAR_21 < 0)
    VAR_21 = -VAR_21;
   if ((unsigned int)VAR_21 < VAR_22->spurious_threshold) {

    VAR_14->spurious_irq_count++;
    if (VAR_14->spurious_irq_max_delta < (unsigned int)VAR_21)
     VAR_14->spurious_irq_max_delta = VAR_21;
    continue;
   }
   VAR_22->stimer = VAR_17;
   if (VAR_22->isync) {
    if (!VAR_22->isync3) {
     VAR_20 = FUNC_3(FUNC_0(VAR_14, VAR_9));
     if (VAR_14->bDMAStart & 0x40)
      VAR_20 >>= 1;
     if (VAR_20 > 0)
      VAR_20 = VAR_22->isync_max - VAR_20;
    } else {
     VAR_20 = FUNC_2(FUNC_0(VAR_14, VAR_4)) & 0x00ffffff;
    }
    if (VAR_20 < VAR_22->isync_mark) {
     if (VAR_20 > 0x10)
      VAR_20 = VAR_22->isync_ESO - 7;
     else
      VAR_20 = VAR_22->isync_ESO + 2;

     FUNC_8(VAR_14, VAR_22->number);
     FUNC_10(VAR_14, VAR_22, VAR_20);
     FUNC_7(VAR_14, VAR_22->number);
    }
   } else if (VAR_22->isync2) {
    VAR_22->isync2 = 0;

    FUNC_8(VAR_14, VAR_22->number);
    FUNC_9(VAR_14, VAR_22, VAR_22->isync_mark);
    FUNC_10(VAR_14, VAR_22, VAR_22->ESO);
    FUNC_7(VAR_14, VAR_22->number);
   }
   FUNC_12(&VAR_14->reg_lock);
   FUNC_6(VAR_22->substream);
   FUNC_11(&VAR_14->reg_lock);
  }
  FUNC_4(VAR_16, FUNC_0(VAR_14, VAR_6));
       __skip2:
  FUNC_12(&VAR_14->reg_lock);
 }
 if (VAR_15 & VAR_3) {
  if (VAR_14->rmidi) {
   FUNC_5(VAR_12, VAR_14->rmidi->private_data);
  } else {
   FUNC_1(FUNC_0(VAR_14, VAR_8));
  }
 }

 return VAR_1;
}
