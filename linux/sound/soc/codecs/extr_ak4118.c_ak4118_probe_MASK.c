
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct ak4118_priv {int regmap; int reset; struct snd_soc_component* component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ) ;
 struct ak4118_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_3)
{
 struct ak4118_priv *VAR_4 = FUNC_5(VAR_3);
 int VAR_5 = 0;

 VAR_4->component = VAR_3;


 FUNC_2(VAR_4->reset, 0);


 VAR_5 = FUNC_3(VAR_4->regmap, VAR_0, 0x00);
 if (VAR_5 < 0) {
  FUNC_1(VAR_3->dev,
   "failed to write regmap 0x%x 0x%x: %d\n",
   VAR_0, 0x00, VAR_5);
  return VAR_5;
 }


 VAR_5 = FUNC_3(VAR_4->regmap, VAR_1, 0xff);
 if (VAR_5 < 0) {
  FUNC_1(VAR_3->dev,
   "failed to write regmap 0x%x 0x%x: %d\n",
   VAR_1, 0xff, VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_3, VAR_2,
      FUNC_0(VAR_2));
 if (VAR_5) {
  FUNC_1(VAR_3->dev,
   "failed to add component kcontrols: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
