
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct arizona_priv {struct arizona* arizona; } ;
struct TYPE_2__ {scalar_t__* out_mono; } ;
struct arizona {TYPE_1__ pdata; } ;


 int VAR_0 ;
 int * VAR_1 ;
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 struct arizona_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_dapm_context*,int *,int) ;

int FUNC_3(struct snd_soc_component *VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = FUNC_0(VAR_2);
 struct arizona_priv *VAR_4 = FUNC_1(VAR_2);
 struct arizona *VAR_5 = VAR_4->arizona;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  if (VAR_5->pdata.out_mono[VAR_6])
   FUNC_2(VAR_3,
      &VAR_1[VAR_6], 1);
 }

 return 0;
}
