
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5514_dsp {int dma_lock; scalar_t__ dma_offset; struct snd_pcm_substream* substream; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct rt5514_dsp*) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct rt5514_dsp* FUNC_6 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_7 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_3,
          struct snd_pcm_hw_params *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct snd_soc_component *VAR_6 = FUNC_7(VAR_5, VAR_0);
 struct rt5514_dsp *VAR_7 =
  FUNC_6(VAR_6);
 int VAR_8;
 u8 VAR_9[8];

 FUNC_0(&VAR_7->dma_lock);
 VAR_8 = FUNC_5(VAR_3,
   FUNC_2(VAR_4));
 VAR_7->substream = VAR_3;
 VAR_7->dma_offset = 0;


 FUNC_4(VAR_1, (u8 *)&VAR_9, sizeof(VAR_9));
 if (VAR_9[0] & VAR_2)
  FUNC_3(VAR_7);

 FUNC_1(&VAR_7->dma_lock);

 return VAR_8;
}
