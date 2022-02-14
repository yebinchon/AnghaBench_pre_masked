
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct nau8825 {struct snd_soc_dapm_context* dapm; } ;


 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 struct nau8825* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0)
{
 struct nau8825 *VAR_1 = FUNC_1(VAR_0);
 struct snd_soc_dapm_context *VAR_2 = FUNC_0(VAR_0);

 VAR_1->dapm = VAR_2;

 return 0;
}
