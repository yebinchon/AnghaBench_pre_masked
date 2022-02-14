
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct TYPE_2__ {int dma2; } ;
struct snd_gus_card {int c_pos; int c_dma_size; int c_period_size; TYPE_1__ gf1; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 struct snd_gus_card* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_gus_card *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = FUNC_1(VAR_1->gf1.dma2, VAR_1->c_period_size);
 VAR_2 = FUNC_0(VAR_0->runtime, (VAR_1->c_pos + VAR_2) % VAR_1->c_dma_size);
 return VAR_2;
}
