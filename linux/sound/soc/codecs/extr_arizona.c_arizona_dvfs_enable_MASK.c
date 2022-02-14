
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct arizona_priv {struct arizona* arizona; } ;
struct arizona {int dcvdd; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 struct arizona_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2)
{
 const struct arizona_priv *VAR_3 = FUNC_3(VAR_2);
 struct arizona *VAR_4 = VAR_3->arizona;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4->dcvdd, 1800000, 1800000);
 if (VAR_5) {
  FUNC_0(VAR_2->dev, "Failed to boost DCVDD: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_4->regmap,
     VAR_0,
     VAR_1,
     VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_2->dev, "Failed to enable subsys max: %d\n", VAR_5);
  FUNC_2(VAR_4->dcvdd, 1200000, 1800000);
  return VAR_5;
 }

 return 0;
}
