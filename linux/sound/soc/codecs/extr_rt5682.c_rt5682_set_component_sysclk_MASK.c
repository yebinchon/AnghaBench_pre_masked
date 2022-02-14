
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5682_priv {unsigned int sysclk; int sysclk_src; scalar_t__* master; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;




 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct rt5682_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_15,
  int VAR_16, int VAR_17, unsigned int VAR_18, int VAR_19)
{
 struct rt5682_priv *VAR_20 = FUNC_2(VAR_15);
 unsigned int VAR_21 = 0, VAR_22 = 0;

 if (VAR_18 == VAR_20->sysclk && VAR_16 == VAR_20->sysclk_src)
  return 0;

 switch (VAR_16) {
 case 131:
  VAR_21 |= VAR_11;
  VAR_22 = VAR_2;
  break;
 case 130:
  VAR_21 |= VAR_12;
  VAR_22 = VAR_3;
  break;
 case 129:
  VAR_21 |= VAR_13;
  VAR_22 = VAR_4;
  break;
 case 128:
  VAR_21 |= VAR_14;
  VAR_22 = VAR_5;
  break;
 default:
  FUNC_1(VAR_15->dev, "Invalid clock id (%d)\n", VAR_16);
  return -VAR_0;
 }
 FUNC_3(VAR_15, VAR_6,
  VAR_10, VAR_21);

 if (VAR_20->master[VAR_1]) {
  FUNC_3(VAR_15,
   VAR_9, VAR_7,
   VAR_22 << VAR_8);
 }

 VAR_20->sysclk = VAR_18;
 VAR_20->sysclk_src = VAR_16;

 FUNC_0(VAR_15->dev, "Sysclk is %dHz and clock id is %d\n",
  VAR_18, VAR_16);

 return 0;
}
