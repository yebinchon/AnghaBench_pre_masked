
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* pstr; } ;
struct psc_dma_stream {int ac97_slot_bits; } ;
struct psc_dma {int slots; TYPE_2__* psc_regs; int dev; } ;
struct TYPE_4__ {int ac97_slots; } ;
struct TYPE_3__ {int stream; } ;




 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 struct psc_dma* FUNC_2 (struct snd_soc_dai*) ;
 struct psc_dma_stream* FUNC_3 (struct snd_pcm_substream*,struct psc_dma*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0, int VAR_1,
       struct snd_soc_dai *VAR_2)
{
 struct psc_dma *VAR_3 = FUNC_2(VAR_2);
 struct psc_dma_stream *VAR_4 = FUNC_3(VAR_0, VAR_3);

 switch (VAR_1) {
 case 129:
  FUNC_0(VAR_3->dev, "AC97 START: stream=%i\n",
   VAR_0->pstr->stream);


  VAR_3->slots |= VAR_4->ac97_slot_bits;
  FUNC_1(&VAR_3->psc_regs->ac97_slots, VAR_3->slots);
  break;

 case 128:
  FUNC_0(VAR_3->dev, "AC97 STOP: stream=%i\n",
   VAR_0->pstr->stream);


  VAR_3->slots &= ~(VAR_4->ac97_slot_bits);
  FUNC_1(&VAR_3->psc_regs->ac97_slots, VAR_3->slots);
  break;
 }
 return 0;
}
