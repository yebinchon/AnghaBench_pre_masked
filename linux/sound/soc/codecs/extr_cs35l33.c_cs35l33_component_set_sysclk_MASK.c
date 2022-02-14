
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs35l33_private {unsigned int mclk_int; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct cs35l33_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_3,
  int VAR_4, int VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct cs35l33_private *VAR_8 = FUNC_2(VAR_3);

 switch (VAR_6) {
 case 130:
 case 129:
 case 128:
  FUNC_1(VAR_8->regmap, VAR_0,
   VAR_1, 0);
  VAR_8->mclk_int = VAR_6;
  break;
 case 133:
 case 132:
 case 131:
  FUNC_1(VAR_8->regmap, VAR_0,
   VAR_1, VAR_1);
  VAR_8->mclk_int = VAR_6/2;
  break;
 default:
  VAR_8->mclk_int = 0;
  return -VAR_2;
 }

 FUNC_0(VAR_3->dev, "external mclk freq=%d, internal mclk freq=%d\n",
  VAR_6, VAR_8->mclk_int);

 return 0;
}
