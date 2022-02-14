
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5616_priv {unsigned int sysclk; int sysclk_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;


 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct rt5616_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_5,
     int VAR_6, unsigned int VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_5->component;
 struct rt5616_priv *VAR_10 = FUNC_2(VAR_9);
 unsigned int VAR_11 = 0;

 if (VAR_7 == VAR_10->sysclk && VAR_6 == VAR_10->sysclk_src)
  return 0;

 switch (VAR_6) {
 case 129:
  VAR_11 |= VAR_3;
  break;
 case 128:
  VAR_11 |= VAR_4;
  break;
 default:
  FUNC_1(VAR_9->dev, "Invalid clock id (%d)\n", VAR_6);
  return -VAR_0;
 }

 FUNC_3(VAR_9, VAR_1,
       VAR_2, VAR_11);
 VAR_10->sysclk = VAR_7;
 VAR_10->sysclk_src = VAR_6;

 FUNC_0(VAR_5->dev, "Sysclk is %dHz and clock id is %d\n", VAR_7, VAR_6);

 return 0;
}
