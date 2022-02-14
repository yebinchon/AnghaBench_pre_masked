
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt1308_priv {unsigned int sysclk; int sysclk_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct rt1308_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_10,
  int VAR_11, int VAR_12, unsigned int VAR_13, int VAR_14)
{
 struct rt1308_priv *VAR_15 = FUNC_2(VAR_10);
 unsigned int VAR_16 = 0;

 if (VAR_13 == VAR_15->sysclk && VAR_11 == VAR_15->sysclk_src)
  return 0;

 switch (VAR_11) {
 case 130:
  VAR_16 |= VAR_7;
  FUNC_3(VAR_10,
   VAR_2, VAR_4,
   VAR_3);
  break;
 case 131:
  VAR_16 |= VAR_6;
  break;
 case 129:
  VAR_16 |= VAR_8;
  break;
 case 128:
  VAR_16 |= VAR_9;
  break;
 default:
  FUNC_1(VAR_10->dev, "Invalid clock id (%d)\n", VAR_11);
  return -VAR_0;
 }
 FUNC_3(VAR_10, VAR_1,
  VAR_5, VAR_16);
 VAR_15->sysclk = VAR_13;
 VAR_15->sysclk_src = VAR_11;

 FUNC_0(VAR_10->dev, "Sysclk is %dHz and clock id is %d\n",
  VAR_13, VAR_11);

 return 0;
}
