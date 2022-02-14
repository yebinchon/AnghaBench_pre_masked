
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct ak4104_private {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;


 unsigned int VAR_6 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 struct ak4104_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_7,
         unsigned int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_7->component;
 struct ak4104_private *VAR_10 = FUNC_2(VAR_9);
 int VAR_11 = 0;
 int VAR_12;


 switch (VAR_8 & VAR_5) {
 case 128:
  break;
 case 129:
  VAR_11 |= VAR_0;
  break;
 case 130:
  VAR_11 |= VAR_0 | VAR_1;
  break;
 default:
  FUNC_0(VAR_9->dev, "invalid dai format\n");
  return -VAR_3;
 }


 if ((VAR_8 & VAR_6) != VAR_4)
  return -VAR_3;

 VAR_12 = FUNC_1(VAR_10->regmap, VAR_2,
     VAR_0 | VAR_1,
     VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
