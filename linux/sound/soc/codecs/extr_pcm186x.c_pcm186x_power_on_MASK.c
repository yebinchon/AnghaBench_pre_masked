
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct pcm186x_priv {int supplies; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 struct pcm186x_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_2)
{
 struct pcm186x_priv *VAR_3 = FUNC_6(VAR_2);
 int VAR_4 = 0;

 VAR_4 = FUNC_5(FUNC_0(VAR_3->supplies),
        VAR_3->supplies);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_3->regmap, 0);
 VAR_4 = FUNC_3(VAR_3->regmap);
 if (VAR_4) {
  FUNC_1(VAR_2->dev, "Failed to restore cache\n");
  FUNC_2(VAR_3->regmap, 1);
  FUNC_4(FUNC_0(VAR_3->supplies),
           VAR_3->supplies);
  return VAR_4;
 }

 FUNC_7(VAR_2, VAR_0,
       VAR_1, 0);

 return 0;
}
