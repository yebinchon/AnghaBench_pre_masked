
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_i2s_priv {int clk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct samsung_i2s_priv* FUNC_1 (int *) ;
 int FUNC_2 (struct samsung_i2s_priv*) ;
 int FUNC_3 (struct samsung_i2s_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct samsung_i2s_priv *VAR_1 = FUNC_1(&VAR_0->dev);


 if (!VAR_1)
  return 0;

 FUNC_5(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1->clk);

 FUNC_6(&VAR_0->dev);

 return 0;
}
