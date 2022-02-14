
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5651_priv {unsigned int sysclk; int sysclk_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;



 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct rt5651_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_8,
  int VAR_9, unsigned int VAR_10, int VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_8->component;
 struct rt5651_priv *VAR_13 = FUNC_2(VAR_12);
 unsigned int VAR_14 = 0;
 unsigned int VAR_15 = 0;

 if (VAR_10 == VAR_13->sysclk && VAR_9 == VAR_13->sysclk_src)
  return 0;

 switch (VAR_9) {
 case 130:
  VAR_14 |= VAR_5;
  break;
 case 129:
  VAR_14 |= VAR_6;
  VAR_15 |= VAR_3;
  break;
 case 128:
  VAR_14 |= VAR_7;
  break;
 default:
  FUNC_1(VAR_12->dev, "Invalid clock id (%d)\n", VAR_9);
  return -VAR_0;
 }
 FUNC_3(VAR_12, VAR_2,
  VAR_3, VAR_15);
 FUNC_3(VAR_12, VAR_1,
  VAR_4, VAR_14);
 VAR_13->sysclk = VAR_10;
 VAR_13->sysclk_src = VAR_9;

 FUNC_0(VAR_8->dev, "Sysclk is %dHz and clock id is %d\n", VAR_10, VAR_9);

 return 0;
}
