
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8731_priv {int supplies; int regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_6, struct wm8731_priv *VAR_7)
{
 int VAR_8 = 0;

 VAR_8 = FUNC_6(VAR_7->regmap);
 if (VAR_8 < 0) {
  FUNC_1(VAR_6, "Failed to issue reset: %d\n", VAR_8);
  goto err_regulator_enable;
 }


 FUNC_4(VAR_7->regmap, VAR_3, 0x7f);


 FUNC_3(VAR_7->regmap, VAR_2, 0x100, 0);
 FUNC_3(VAR_7->regmap, VAR_5, 0x100, 0);
 FUNC_3(VAR_7->regmap, VAR_1, 0x100, 0);
 FUNC_3(VAR_7->regmap, VAR_4, 0x100, 0);


 FUNC_3(VAR_7->regmap, VAR_0, 0x8, 0);

 FUNC_2(VAR_7->regmap);

err_regulator_enable:

 FUNC_5(FUNC_0(VAR_7->supplies), VAR_7->supplies);

 return VAR_8;
}
