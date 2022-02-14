
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5670_priv {unsigned int sysclk; int sysclk_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;



 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct rt5670_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_6, int VAR_7,
       int VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct rt5670_priv *VAR_11 = FUNC_2(VAR_6);
 unsigned int VAR_12 = 0;

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
  FUNC_1(VAR_6->dev, "Invalid clock id (%d)\n", VAR_7);
  return -VAR_0;
 }
 FUNC_3(VAR_6, VAR_1,
  VAR_2, VAR_12);
 VAR_11->sysclk = VAR_9;
 if (VAR_7 != 128)
  VAR_11->sysclk_src = VAR_7;

 FUNC_0(VAR_6->dev, "Sysclk : %dHz clock id : %d\n", VAR_9, VAR_7);

 return 0;
}
