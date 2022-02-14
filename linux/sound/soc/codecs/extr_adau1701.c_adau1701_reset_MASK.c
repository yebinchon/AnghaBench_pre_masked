
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct adau1701 {unsigned int pll_clkdiv; int regmap; int sigmadsp; int gpio_nreset; int * gpio_pll_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned int) ;
 struct adau1701* FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_5, unsigned int VAR_6,
 unsigned int VAR_7)
{
 struct adau1701 *VAR_8 = FUNC_9(VAR_5);
 int VAR_9;

 FUNC_7(VAR_8->sigmadsp);

 if (VAR_6 != VAR_4 &&
     FUNC_1(VAR_8->gpio_pll_mode[0]) &&
     FUNC_1(VAR_8->gpio_pll_mode[1])) {
  switch (VAR_6) {
  case 64:
   FUNC_2(VAR_8->gpio_pll_mode[0], 0);
   FUNC_2(VAR_8->gpio_pll_mode[1], 0);
   break;
  case 256:
   FUNC_2(VAR_8->gpio_pll_mode[0], 0);
   FUNC_2(VAR_8->gpio_pll_mode[1], 1);
   break;
  case 384:
   FUNC_2(VAR_8->gpio_pll_mode[0], 1);
   FUNC_2(VAR_8->gpio_pll_mode[1], 0);
   break;
  case 0:
  case 512:
   FUNC_2(VAR_8->gpio_pll_mode[0], 1);
   FUNC_2(VAR_8->gpio_pll_mode[1], 1);
   break;
  }
 }

 VAR_8->pll_clkdiv = VAR_6;

 if (FUNC_1(VAR_8->gpio_nreset)) {
  FUNC_2(VAR_8->gpio_nreset, 0);

  FUNC_10(1);
  FUNC_2(VAR_8->gpio_nreset, 1);

  FUNC_3(85);
 }





 if (VAR_6 != VAR_4) {
  VAR_9 = FUNC_8(VAR_8->sigmadsp, VAR_7);
  if (VAR_9) {
   FUNC_0(VAR_5->dev, "Failed to load firmware\n");
   return VAR_9;
  }
 }

 FUNC_6(VAR_8->regmap, VAR_0, VAR_1);
 FUNC_6(VAR_8->regmap, VAR_2, VAR_3);

 FUNC_4(VAR_8->regmap);
 FUNC_5(VAR_8->regmap);

 return 0;
}
