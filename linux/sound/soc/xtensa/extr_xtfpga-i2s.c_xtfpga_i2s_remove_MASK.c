
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtfpga_i2s {scalar_t__ regmap; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xtfpga_i2s* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct xtfpga_i2s *VAR_5 = FUNC_1(&VAR_4->dev);

 if (VAR_5->regmap && !FUNC_0(VAR_5->regmap)) {
  FUNC_4(VAR_5->regmap, VAR_0, 0);
  FUNC_4(VAR_5->regmap, VAR_1, 0);
  FUNC_4(VAR_5->regmap, VAR_2,
        VAR_3);
 }
 FUNC_2(&VAR_4->dev);
 if (!FUNC_3(&VAR_4->dev))
  FUNC_5(&VAR_4->dev);
 return 0;
}
