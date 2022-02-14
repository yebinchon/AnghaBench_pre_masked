
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2602_priv {unsigned int sysclk; unsigned int clk_out_pwr; int regmap; int * sysclk_constraints; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct ssm2602_priv* FUNC_1 (struct snd_soc_component*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_8,
  int VAR_9, unsigned int VAR_10, int VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_8->component;
 struct ssm2602_priv *VAR_13 = FUNC_1(VAR_12);

 if (VAR_11 == VAR_3) {
  if (VAR_9 != VAR_5)
   return -VAR_0;

  switch (VAR_10) {
  case 12288000:
  case 18432000:
   VAR_13->sysclk_constraints = &VAR_7;
   break;
  case 11289600:
  case 16934400:
   VAR_13->sysclk_constraints = &VAR_6;
   break;
  case 12000000:
   VAR_13->sysclk_constraints = ((void*)0);
   break;
  default:
   return -VAR_0;
  }
  VAR_13->sysclk = VAR_10;
 } else {
  unsigned int VAR_14;

  switch (VAR_9) {
  case 129:
   VAR_14 = VAR_1;
   break;
  case 128:
   VAR_14 = VAR_2;
   break;
  default:
   return -VAR_0;
  }

  if (VAR_10 == 0)
   VAR_13->clk_out_pwr |= VAR_14;
  else
   VAR_13->clk_out_pwr &= ~VAR_14;

  FUNC_0(VAR_13->regmap, VAR_4,
   VAR_1 | VAR_2, VAR_13->clk_out_pwr);
 }

 return 0;
}
