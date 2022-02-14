
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra20_ac97 {int clk_ac97; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct tegra20_ac97* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct tegra20_ac97 *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_4(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);

 FUNC_0(VAR_1->clk_ac97);

 FUNC_2(((void*)0));

 return 0;
}
