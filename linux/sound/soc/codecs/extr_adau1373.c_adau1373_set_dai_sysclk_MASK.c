
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int component; } ;
struct adau1373_dai {unsigned int sysclk; int clk_src; } ;
struct adau1373 {int regmap; struct adau1373_dai* dais; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct adau1373* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2,
 int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct adau1373 *VAR_6 = FUNC_2(VAR_2->component);
 struct adau1373_dai *VAR_7 = &VAR_6->dais[VAR_2->id];

 switch (VAR_3) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_1;
 }

 VAR_7->sysclk = VAR_4;
 VAR_7->clk_src = VAR_3;

 FUNC_1(VAR_6->regmap, FUNC_0(VAR_2->id),
  VAR_0, VAR_3 << 5);

 return 0;
}
