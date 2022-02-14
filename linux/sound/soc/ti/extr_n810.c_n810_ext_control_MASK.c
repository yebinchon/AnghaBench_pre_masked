
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_1 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_2 (struct snd_soc_dapm_context*) ;
 int FUNC_3 (struct snd_soc_dapm_context*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_dapm_context *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;

 switch (VAR_1) {
 case 129:
  VAR_5 = 1;

 case 130:
  VAR_4 = 1;
  break;
 case 128:
  VAR_5 = 1;
  break;
 }

 FUNC_2(VAR_3);

 if (VAR_2)
  FUNC_1(VAR_3, "Ext Spk");
 else
  FUNC_0(VAR_3, "Ext Spk");

 if (VAR_4)
  FUNC_1(VAR_3, "Headphone Jack");
 else
  FUNC_0(VAR_3, "Headphone Jack");
 if (VAR_5)
  FUNC_1(VAR_3, "HS Mic");
 else
  FUNC_0(VAR_3, "HS Mic");

 if (VAR_0)
  FUNC_1(VAR_3, "DMic");
 else
  FUNC_0(VAR_3, "DMic");

 FUNC_4(VAR_3);

 FUNC_3(VAR_3);
}
