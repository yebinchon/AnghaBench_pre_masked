
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_6)
{

 FUNC_0(VAR_6->regmap, VAR_5, 0x0001, 0x0);

 FUNC_0(VAR_6->regmap, VAR_3,
      0x1000, 0x1000);

 FUNC_0(VAR_6->regmap, VAR_4,
      0x3800, 0x3800);

 FUNC_0(VAR_6->regmap, VAR_1,
      0xe000, 0xe000);

 FUNC_0(VAR_6->regmap, VAR_2,
      0x20, 0x20);

 FUNC_0(VAR_6->regmap, VAR_0,
      0x8000, 0x8000);
 return 0;
}
