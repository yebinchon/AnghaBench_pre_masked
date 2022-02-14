
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct dmaengine_pcm {int flags; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 struct dmaengine_pcm* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(
 struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_component *VAR_4 =
  FUNC_2(VAR_3, VAR_0);
 struct dmaengine_pcm *VAR_5 = FUNC_3(VAR_4);

 if (VAR_5->flags & VAR_1)
  return FUNC_1(VAR_2);
 else
  return FUNC_0(VAR_2);
}
