
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; int runtime; } ;
struct kirkwood_dma_data {scalar_t__ io; } ;
typedef int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct kirkwood_dma_data* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream
      *VAR_3)
{
 struct kirkwood_dma_data *VAR_4 = FUNC_1(VAR_3);
 snd_pcm_uframes_t VAR_5;

 if (VAR_3->stream == VAR_2)
  VAR_5 = FUNC_0(VAR_3->runtime,
   FUNC_2(VAR_4->io + VAR_0));
 else
  VAR_5 = FUNC_0(VAR_3->runtime,
   FUNC_2(VAR_4->io + VAR_1));

 return VAR_5;
}
