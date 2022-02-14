
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs4271_private {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct cs4271_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5, int VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_5->component;
 struct cs4271_private *VAR_9 = FUNC_1(VAR_8);
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_7 != VAR_4)
  return 0;

 if (VAR_6) {
  VAR_11 = VAR_1;
  VAR_12 = VAR_3;
 }

 VAR_10 = FUNC_0(VAR_9->regmap, VAR_0,
     VAR_1, VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_9->regmap, VAR_2,
     VAR_3, VAR_12);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
