
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra30_i2s {int clk_i2s; int playback_fifo_cif; int playback_i2s_cif; int capture_fifo_cif; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct tegra30_i2s* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct tegra30_i2s *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_2(&VAR_0->dev);
 if (!FUNC_3(&VAR_0->dev))
  FUNC_8(&VAR_0->dev);

 FUNC_9(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 FUNC_7(VAR_1->capture_fifo_cif);
 FUNC_5(VAR_1->capture_fifo_cif);

 FUNC_7(VAR_1->playback_i2s_cif);
 FUNC_6(VAR_1->playback_fifo_cif);

 FUNC_0(VAR_1->clk_i2s);

 return 0;
}
