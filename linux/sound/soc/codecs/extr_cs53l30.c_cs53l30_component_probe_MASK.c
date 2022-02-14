
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct cs53l30_private {scalar_t__ use_sdout2; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct cs53l30_private* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2)
{
 struct cs53l30_private *VAR_3 = FUNC_2(VAR_2);
 struct snd_soc_dapm_context *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3->use_sdout2)
  FUNC_3(VAR_4, VAR_1,
     FUNC_0(VAR_1));
 else
  FUNC_3(VAR_4, VAR_0,
     FUNC_0(VAR_0));

 return 0;
}
