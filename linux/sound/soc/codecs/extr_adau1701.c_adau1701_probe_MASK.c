
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct adau1701 {int* pin_config; int supplies; int regmap; int pll_clkdiv; int sigmadsp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct snd_soc_component*) ;
 struct adau1701* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6;
 struct adau1701 *VAR_7 = FUNC_7(VAR_3);

 VAR_5 = FUNC_6(VAR_7->sigmadsp, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(FUNC_0(VAR_7->supplies),
        VAR_7->supplies);
 if (VAR_5 < 0) {
  FUNC_2(VAR_3->dev, "Failed to enable regulators: %d\n", VAR_5);
  return VAR_5;
 }







 VAR_7->pll_clkdiv = VAR_2;


 VAR_5 = FUNC_1(VAR_3, VAR_7->pll_clkdiv, 0);
 if (VAR_5 < 0)
  goto exit_regulators_disable;


 VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  VAR_6 |= VAR_7->pin_config[VAR_4] << (VAR_4 * 4);

 FUNC_3(VAR_7->regmap, VAR_0, VAR_6);

 VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  VAR_6 |= VAR_7->pin_config[VAR_4 + 6] << (VAR_4 * 4);

 FUNC_3(VAR_7->regmap, VAR_1, VAR_6);

 return 0;

exit_regulators_disable:

 FUNC_4(FUNC_0(VAR_7->supplies), VAR_7->supplies);
 return VAR_5;
}
