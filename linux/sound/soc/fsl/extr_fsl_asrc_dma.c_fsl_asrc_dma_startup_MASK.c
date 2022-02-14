
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {struct fsl_asrc_pair* private_data; } ;
struct fsl_asrc_pair {struct fsl_asrc* asrc_priv; } ;
struct fsl_asrc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fsl_asrc* FUNC_0 (struct device*) ;
 struct fsl_asrc_pair* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_4 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_5->private_data;
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 struct snd_soc_component *VAR_8 = FUNC_3(VAR_6, VAR_0);
 struct device *VAR_9 = VAR_8->dev;
 struct fsl_asrc *VAR_10 = FUNC_0(VAR_9);
 struct fsl_asrc_pair *VAR_11;

 VAR_11 = FUNC_1(sizeof(struct fsl_asrc_pair), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->asrc_priv = VAR_10;

 VAR_7->private_data = VAR_11;

 FUNC_2(VAR_5->runtime,
          VAR_3);
 FUNC_4(VAR_5, &VAR_4);

 return 0;
}
