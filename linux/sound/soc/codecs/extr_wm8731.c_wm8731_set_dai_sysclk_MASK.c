
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8731_priv {int sysclk_type; unsigned int sysclk; int * constraints; int mclk; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int ,unsigned int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct wm8731_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_4,
  int VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_4->component;
 struct snd_soc_dapm_context *VAR_9 = FUNC_1(VAR_8);
 struct wm8731_priv *VAR_10 = FUNC_2(VAR_8);

 switch (VAR_5) {
 case 128:
 case 129:
  if (VAR_10->mclk && FUNC_0(VAR_10->mclk, VAR_6))
   return -VAR_0;
  VAR_10->sysclk_type = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_6) {
 case 0:
  VAR_10->constraints = ((void*)0);
  break;
 case 12000000:
  VAR_10->constraints = &VAR_2;
  break;
 case 12288000:
 case 18432000:
  VAR_10->constraints = &VAR_3;
  break;
 case 16934400:
 case 11289600:
  VAR_10->constraints = &VAR_1;
  break;
 default:
  return -VAR_0;
 }

 VAR_10->sysclk = VAR_6;

 FUNC_3(VAR_9);

 return 0;
}
