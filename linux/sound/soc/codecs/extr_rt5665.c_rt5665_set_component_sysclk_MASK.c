
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5665_priv {unsigned int sysclk; int sysclk_src; scalar_t__* master; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;



 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct rt5665_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_17, int VAR_18,
       int VAR_19, unsigned int VAR_20, int VAR_21)
{
 struct rt5665_priv *VAR_22 = FUNC_2(VAR_17);
 unsigned int VAR_23 = 0, VAR_24 = 0;

 if (VAR_20 == VAR_22->sysclk && VAR_18 == VAR_22->sysclk_src)
  return 0;

 switch (VAR_18) {
 case 130:
  VAR_23 |= VAR_14;
  VAR_24 = VAR_4;
  break;
 case 129:
  VAR_23 |= VAR_15;
  VAR_24 = VAR_5;
  break;
 case 128:
  VAR_23 |= VAR_16;
  VAR_24 = VAR_6;
  break;
 default:
  FUNC_1(VAR_17->dev, "Invalid clock id (%d)\n", VAR_18);
  return -VAR_0;
 }
 FUNC_3(VAR_17, VAR_7,
  VAR_13, VAR_23);

 if (VAR_22->master[VAR_1] || VAR_22->master[VAR_2]) {
  FUNC_3(VAR_17, VAR_12,
   VAR_8, VAR_24 << VAR_9);
 }
 if (VAR_22->master[VAR_3]) {
  FUNC_3(VAR_17, VAR_12,
   VAR_10, VAR_24 << VAR_11);
 }

 VAR_22->sysclk = VAR_20;
 VAR_22->sysclk_src = VAR_18;

 FUNC_0(VAR_17->dev, "Sysclk is %dHz and clock id is %d\n", VAR_20, VAR_18);

 return 0;
}
