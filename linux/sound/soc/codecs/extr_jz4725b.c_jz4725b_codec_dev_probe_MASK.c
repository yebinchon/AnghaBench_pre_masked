
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct regmap {int dummy; } ;
struct jz_icdc {int clk; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct regmap*,int ,int) ;
 struct jz_icdc* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_4)
{
 struct jz_icdc *VAR_5 = FUNC_2(VAR_4);
 struct regmap *VAR_6 = VAR_5->regmap;

 FUNC_0(VAR_5->clk);




 FUNC_1(VAR_6, VAR_0,
       0xf << VAR_2);
 FUNC_1(VAR_6, VAR_1,
       0x0 << VAR_3);

 return 0;
}
