
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct wm8962_priv *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->regmap, VAR_1, 0x6243);
 if (VAR_3 != 0)
  return VAR_3;

 return FUNC_0(VAR_2->regmap, VAR_0, 0);
}
