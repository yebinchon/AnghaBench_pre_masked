
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct adav80x {unsigned int sysclk; int clk_src; int* sysclk_pd; int regmap; } ;
 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int VAR_1 ;
 unsigned int FUNC_3 (int) ;
 int VAR_2 ;
 unsigned int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 struct snd_soc_dapm_context* FUNC_7 (struct snd_soc_component*) ;
 struct adav80x* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_10 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_11 (struct snd_soc_dapm_context*) ;
 int FUNC_12 (struct snd_soc_dapm_context*) ;
 int FUNC_13 (struct snd_soc_dapm_context*) ;
 int FUNC_14 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_15(struct snd_soc_component *VAR_5,
         int VAR_6, int VAR_7,
         unsigned int VAR_8, int VAR_9)
{
 struct adav80x *VAR_10 = FUNC_8(VAR_5);
 struct snd_soc_dapm_context *VAR_11 = FUNC_7(VAR_5);

 if (VAR_9 == VAR_4) {
  switch (VAR_6) {
  case 129:
  case 128:
  case 135:
  case 134:
  case 133:
   break;
  default:
   return -VAR_3;
  }

  VAR_10->sysclk = VAR_8;

  if (VAR_10->clk_src != VAR_6) {
   unsigned int VAR_12, VAR_13;

   VAR_10->clk_src = VAR_6;
   if (VAR_6 == 128)
    VAR_6 = 129;

   VAR_12 = FUNC_1(VAR_6) |
     FUNC_0(VAR_6) |
     FUNC_2(VAR_6);
   VAR_13 = FUNC_3(VAR_6);

   FUNC_6(VAR_10->regmap, VAR_0,
    VAR_12);
   FUNC_6(VAR_10->regmap, VAR_1,
    VAR_13);

   FUNC_13(VAR_11);
  }
 } else {
  unsigned int VAR_14;

  switch (VAR_6) {
  case 132:
  case 131:
  case 130:
   break;
  default:
   return -VAR_3;
  }

  VAR_6 -= 132;
  VAR_14 = FUNC_4(VAR_6);

  if (VAR_8 == 0) {
   FUNC_5(VAR_10->regmap, VAR_2,
    VAR_14, VAR_14);
   VAR_10->sysclk_pd[VAR_6] = 1;
  } else {
   FUNC_5(VAR_10->regmap, VAR_2,
    VAR_14, 0);
   VAR_10->sysclk_pd[VAR_6] = 0;
  }

  FUNC_11(VAR_11);

  if (VAR_10->sysclk_pd[0])
   FUNC_9(VAR_11, "PLL1");
  else
   FUNC_10(VAR_11, "PLL1");

  if (VAR_10->sysclk_pd[1] || VAR_10->sysclk_pd[2])
   FUNC_9(VAR_11, "PLL2");
  else
   FUNC_10(VAR_11, "PLL2");

  FUNC_14(VAR_11);

  FUNC_12(VAR_11);
 }

 return 0;
}
