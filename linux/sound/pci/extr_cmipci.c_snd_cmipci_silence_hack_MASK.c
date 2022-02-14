
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_runtime {int channels; scalar_t__ dma_area; } ;
struct cmipci_pcm {int ch; scalar_t__ needs_silencing; TYPE_1__* substream; } ;
struct cmipci {int ctrl; int reg_lock; scalar_t__ can_96k; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cmipci*,struct cmipci_pcm*,int) ;
 unsigned int FUNC_3 (struct cmipci*,unsigned int) ;
 int FUNC_4 (struct cmipci*,unsigned int,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct cmipci *VAR_13, struct cmipci_pcm *VAR_14)
{
 struct snd_pcm_runtime *VAR_15 = VAR_14->substream->runtime;
 unsigned int VAR_16, VAR_17;

 if (VAR_14->needs_silencing && VAR_15 && VAR_15->dma_area) {

  FUNC_0(VAR_15->dma_area, 0, VAR_12);
  VAR_16 = VAR_14->ch ? VAR_7 : VAR_6;
  VAR_17 = ((VAR_12 / 4) - 1) | (((VAR_12 / 4) / 2 - 1) << 16);
  FUNC_4(VAR_13, VAR_16, VAR_17);


  if (VAR_15->channels > 2)
   FUNC_2(VAR_13, VAR_14, 2);
  FUNC_5(&VAR_13->reg_lock);
  VAR_17 = FUNC_3(VAR_13, VAR_10);
  VAR_17 &= ~(VAR_0 << (VAR_14->ch * 3));
  VAR_17 |= (4 << VAR_1) << (VAR_14->ch * 3);
  FUNC_4(VAR_13, VAR_10, VAR_17);
  VAR_17 = FUNC_3(VAR_13, VAR_8);
  VAR_17 &= ~(VAR_2 << (VAR_14->ch * 2));
  VAR_17 |= (3 << VAR_3) << (VAR_14->ch * 2);
  if (VAR_13->can_96k)
   VAR_17 &= ~(VAR_4 << (VAR_14->ch * 2));
  FUNC_4(VAR_13, VAR_8, VAR_17);


  VAR_13->ctrl |= VAR_5 << VAR_14->ch;
  FUNC_4(VAR_13, VAR_9, VAR_13->ctrl);
  FUNC_6(&VAR_13->reg_lock);

  FUNC_1(1);


  FUNC_5(&VAR_13->reg_lock);
  VAR_13->ctrl &= ~(VAR_5 << VAR_14->ch);
  VAR_17 = VAR_11 << VAR_14->ch;
  FUNC_4(VAR_13, VAR_9, VAR_13->ctrl | VAR_17);
  FUNC_4(VAR_13, VAR_9, VAR_13->ctrl & ~VAR_17);
  FUNC_6(&VAR_13->reg_lock);

  VAR_14->needs_silencing = 0;
 }
}
