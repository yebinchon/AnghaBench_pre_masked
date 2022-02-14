
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct aic3x_priv {int power; int supplies; int regmap; int gpio_reset; } ;
struct TYPE_2__ {unsigned int def; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 struct aic3x_priv* FUNC_9 (struct snd_soc_component*) ;
 unsigned int FUNC_10 (struct snd_soc_component*,size_t) ;
 int FUNC_11 (struct snd_soc_component*,size_t,unsigned int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_5, int VAR_6)
{
 struct aic3x_priv *VAR_7 = FUNC_9(VAR_5);
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 if (VAR_6) {
  VAR_10 = FUNC_8(FUNC_0(VAR_7->supplies),
         VAR_7->supplies);
  if (VAR_10)
   goto out;
  VAR_7->power = 1;

  if (FUNC_1(VAR_7->gpio_reset)) {
   FUNC_12(1);
   FUNC_2(VAR_7->gpio_reset, 1);
  }


  FUNC_4(VAR_7->regmap, 0);
  FUNC_6(VAR_7->regmap);





  VAR_8 = FUNC_10(VAR_5, VAR_0);
  VAR_9 = FUNC_10(VAR_5, VAR_1);
  if (VAR_8 == VAR_4[VAR_0].def ||
   VAR_9 == VAR_4[VAR_1].def) {
   FUNC_11(VAR_5, VAR_0, VAR_8);
   FUNC_11(VAR_5, VAR_1, VAR_9);
  }





  FUNC_3(50);
 } else {





  FUNC_11(VAR_5, VAR_2, VAR_3);
  FUNC_5(VAR_7->regmap);
  VAR_7->power = 0;

  FUNC_4(VAR_7->regmap, 1);
  VAR_10 = FUNC_7(FUNC_0(VAR_7->supplies),
          VAR_7->supplies);
 }
out:
 return VAR_10;
}
