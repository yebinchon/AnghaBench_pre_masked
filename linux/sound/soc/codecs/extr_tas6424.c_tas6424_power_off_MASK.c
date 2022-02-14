
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas6424_data {int supplies; int regmap; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct tas6424_data* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_2)
{
 struct tas6424_data *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 FUNC_6(VAR_2, VAR_1, VAR_0);

 FUNC_2(VAR_3->regmap, 1);
 FUNC_3(VAR_3->regmap);

 VAR_4 = FUNC_4(FUNC_0(VAR_3->supplies),
         VAR_3->supplies);
 if (VAR_4 < 0) {
  FUNC_1(VAR_2->dev, "failed to disable supplies: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
