
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int pcm_rcntrl_reg; int dma2; } ;
struct snd_gus_card {TYPE_1__ gf1; scalar_t__ c_pos; int c_period_size; int c_dma_size; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct snd_gus_card* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_0,
      struct snd_pcm_hw_params *VAR_1)
{
 struct snd_gus_card *VAR_2 = FUNC_6(VAR_0);

 VAR_2->c_dma_size = FUNC_0(VAR_1);
 VAR_2->c_period_size = FUNC_3(VAR_1);
 VAR_2->c_pos = 0;
 VAR_2->gf1.pcm_rcntrl_reg = 0x21;
 if (FUNC_1(VAR_1) > 1)
  VAR_2->gf1.pcm_rcntrl_reg |= 2;
 if (VAR_2->gf1.dma2 > 3)
  VAR_2->gf1.pcm_rcntrl_reg |= 4;
 if (FUNC_4(FUNC_2(VAR_1)))
  VAR_2->gf1.pcm_rcntrl_reg |= 0x80;
 return FUNC_5(VAR_0, FUNC_0(VAR_1));
}
