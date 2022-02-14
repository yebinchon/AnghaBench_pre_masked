
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs35l33_private {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,int ,int) ;
 struct cs35l33_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2, unsigned int VAR_3)
{
 struct cs35l33_private *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = 0, VAR_6 = 0;


 if (VAR_3 > 3600000 || VAR_3 < 1850000) {
  FUNC_0(VAR_2->dev, "Invalid boost current %d\n", VAR_3);
  VAR_5 = -VAR_1;
  goto err;
 }

 if (VAR_3 % 15625) {
  FUNC_0(VAR_2->dev, "Current not a multiple of 15625uA (%d)\n",
   VAR_3);
  VAR_5 = -VAR_1;
  goto err;
 }

 while (VAR_3 > 1850000) {
  VAR_3 -= 15625;
  VAR_6++;
 }

 FUNC_1(VAR_4->regmap, VAR_0,
  VAR_6+0x70);

err:
 return VAR_5;
}
