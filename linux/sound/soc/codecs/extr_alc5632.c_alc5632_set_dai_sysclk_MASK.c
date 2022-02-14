
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct alc5632_priv {unsigned int sysclk; } ;


 int VAR_0 ;
 struct alc5632_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1,
  int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct alc5632_priv *VAR_6 = FUNC_0(VAR_5);

 switch (VAR_3) {
 case 4096000:
 case 8192000:
 case 11289600:
 case 12288000:
 case 16384000:
 case 16934400:
 case 18432000:
 case 22579200:
 case 24576000:
  VAR_6->sysclk = VAR_3;
  return 0;
 }
 return -VAR_0;
}
