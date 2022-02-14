
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct da7219_priv {struct da7219_aad_priv* aad; } ;
struct da7219_aad_priv {int micbias_resume_enable; scalar_t__ jack_inserted; scalar_t__ jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 struct da7219_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;

void FUNC_5(struct snd_soc_component *VAR_2)
{
 struct da7219_priv *VAR_3 = FUNC_1(VAR_2);
 struct da7219_aad_priv *VAR_4 = VAR_3->aad;
 struct snd_soc_dapm_context *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->jack) {

  if (VAR_4->jack_inserted &&
      VAR_4->micbias_resume_enable) {
   FUNC_3(VAR_5, "Mic Bias");
   FUNC_4(VAR_5);
   VAR_4->micbias_resume_enable = 0;
  }


  FUNC_2(VAR_2, VAR_0,
        VAR_1,
        VAR_1);
 }
}
