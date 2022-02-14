
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci_pcm {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ymfpci_pcm* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;
 int FUNC_3 (struct snd_ymfpci_pcm*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
      struct snd_pcm_hw_params *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_ymfpci_pcm *VAR_3 = VAR_2->private_data;
 int VAR_4;

 if ((VAR_4 = FUNC_2(VAR_0, FUNC_0(VAR_1))) < 0)
  return VAR_4;
 if ((VAR_4 = FUNC_3(VAR_3, FUNC_1(VAR_1))) < 0)
  return VAR_4;
 return 0;
}
