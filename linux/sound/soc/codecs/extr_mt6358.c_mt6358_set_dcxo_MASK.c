
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt6358_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct mt6358_priv *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_2->regmap, VAR_0,
      0x1 << VAR_1,
      (VAR_3 ? 1 : 0) << VAR_1);
 return 0;
}
