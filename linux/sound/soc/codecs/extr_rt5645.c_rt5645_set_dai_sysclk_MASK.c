
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5645_priv {unsigned int sysclk; int sysclk_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;



 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct rt5645_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_6,
  int VAR_7, unsigned int VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_6->component;
 struct rt5645_priv *VAR_11 = FUNC_2(VAR_10);
 unsigned int VAR_12 = 0;

 if (VAR_8 == VAR_11->sysclk && VAR_7 == VAR_11->sysclk_src)
  return 0;

 switch (VAR_7) {
 case 130:
  VAR_12 |= VAR_3;
  break;
 case 129:
  VAR_12 |= VAR_4;
  break;
 case 128:
  VAR_12 |= VAR_5;
  break;
 default:
  FUNC_1(VAR_10->dev, "Invalid clock id (%d)\n", VAR_7);
  return -VAR_0;
 }
 FUNC_3(VAR_10, VAR_1,
  VAR_2, VAR_12);
 VAR_11->sysclk = VAR_8;
 VAR_11->sysclk_src = VAR_7;

 FUNC_0(VAR_6->dev, "Sysclk is %dHz and clock id is %d\n", VAR_8, VAR_7);

 return 0;
}
