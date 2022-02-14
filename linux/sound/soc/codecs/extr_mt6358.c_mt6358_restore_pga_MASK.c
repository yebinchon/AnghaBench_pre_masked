
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt6358_priv {unsigned int* ana_gain; int regmap; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct mt6358_priv *VAR_8)
{
 unsigned int VAR_9, VAR_10;

 VAR_9 = VAR_8->ana_gain[VAR_0];
 VAR_10 = VAR_8->ana_gain[VAR_1];

 FUNC_0(VAR_8->regmap, VAR_2,
      VAR_4,
      VAR_9 << VAR_5);
 FUNC_0(VAR_8->regmap, VAR_3,
      VAR_6,
      VAR_10 << VAR_7);
}
