
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct es8328_priv {int mclkdiv2; int * mclk_ratios; int * sysclk_constraints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 struct es8328_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_5,
  int VAR_6, unsigned int VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_5->component;
 struct es8328_priv *VAR_10 = FUNC_0(VAR_9);
 int VAR_11 = 0;

 switch (VAR_7) {
 case 0:
  VAR_10->sysclk_constraints = ((void*)0);
  VAR_10->mclk_ratios = ((void*)0);
  break;
 case 22579200:
  VAR_11 = 1;

 case 11289600:
  VAR_10->sysclk_constraints = &VAR_1;
  VAR_10->mclk_ratios = VAR_3;
  break;
 case 24576000:
  VAR_11 = 1;

 case 12288000:
  VAR_10->sysclk_constraints = &VAR_2;
  VAR_10->mclk_ratios = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_10->mclkdiv2 = VAR_11;
 return 0;
}
