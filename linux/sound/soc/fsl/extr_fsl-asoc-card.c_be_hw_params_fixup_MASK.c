
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int dummy; } ;
struct snd_interval {int min; int max; } ;
struct fsl_asoc_card_priv {int asrc_format; int asrc_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_mask*) ;
 int FUNC_3 (struct snd_mask*,int ) ;
 struct fsl_asoc_card_priv* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_2,
         struct snd_pcm_hw_params *VAR_3)
{
 struct fsl_asoc_card_priv *VAR_4 = FUNC_4(VAR_2->card);
 struct snd_interval *VAR_5;
 struct snd_mask *VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_1);
 VAR_5->max = VAR_5->min = VAR_4->asrc_rate;

 VAR_6 = FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_6);
 FUNC_3(VAR_6, VAR_4->asrc_format);

 return 0;
}
