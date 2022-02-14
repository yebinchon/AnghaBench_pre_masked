
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct adau {unsigned int pll_freq; int pll_regs; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,unsigned int,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct adau* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_2, int VAR_3,
 int VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_2->component;
 struct adau *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;

 if (VAR_5 < 8000000 || VAR_5 > 27000000)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_8->pll_regs);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_2(VAR_8->regmap, VAR_0,
   VAR_8->pll_regs, FUNC_0(VAR_8->pll_regs));
 if (VAR_9)
  return VAR_9;

 VAR_8->pll_freq = VAR_6;

 return 0;
}
