
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct da7219_priv {struct da7219_aad_priv* aad; } ;
struct da7219_aad_priv {int micbias_resume_enable; scalar_t__ jack_inserted; scalar_t__ jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 struct da7219_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_4 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;

void FUNC_6(struct snd_soc_component *VAR_4)
{
 struct da7219_priv *VAR_5 = FUNC_1(VAR_4);
 struct da7219_aad_priv *VAR_6 = VAR_5->aad;
 struct snd_soc_dapm_context *VAR_7 = FUNC_0(VAR_4);
 u8 VAR_8;

 if (VAR_6->jack) {

  FUNC_3(VAR_4, VAR_0,
        VAR_1, 0);







  if (VAR_6->jack_inserted) {
   VAR_8 = FUNC_2(VAR_4, VAR_3);
   if (VAR_8 & VAR_2) {
    FUNC_4(VAR_7, "Mic Bias");
    FUNC_5(VAR_7);
    VAR_6->micbias_resume_enable = 1;
   }
  }
 }
}
