
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt1305_priv {unsigned int sysclk; int sysclk_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct rt1305_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_9,
  int VAR_10, int VAR_11, unsigned int VAR_12, int VAR_13)
{
 struct rt1305_priv *VAR_14 = FUNC_2(VAR_9);
 unsigned int VAR_15 = 0;

 if (VAR_12 == VAR_14->sysclk && VAR_10 == VAR_14->sysclk_src)
  return 0;

 switch (VAR_10) {
 case 130:
  VAR_15 |= VAR_6;
  FUNC_3(VAR_9,
   VAR_2, VAR_3,
   VAR_4);
  break;
 case 129:
  VAR_15 |= VAR_7;
  break;
 case 128:
  VAR_15 |= VAR_8;
  break;
 default:
  FUNC_1(VAR_9->dev, "Invalid clock id (%d)\n", VAR_10);
  return -VAR_0;
 }
 FUNC_3(VAR_9, VAR_1,
  VAR_5, VAR_15);
 VAR_14->sysclk = VAR_12;
 VAR_14->sysclk_src = VAR_10;

 FUNC_0(VAR_9->dev, "Sysclk is %dHz and clock id is %d\n",
  VAR_12, VAR_10);

 return 0;
}
