
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct dw_i2s_dev* private_data; } ;
struct dw_i2s_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 struct dw_i2s_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct dw_i2s_dev *VAR_5 = FUNC_1(VAR_4->cpu_dai);

 FUNC_2(VAR_2, &VAR_1);
 FUNC_0(VAR_3, VAR_0);
 VAR_3->private_data = VAR_5;

 return 0;
}
