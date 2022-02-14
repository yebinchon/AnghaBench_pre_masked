
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int regmap_ahub; int regmap_apbif; int clk_d_audio; int clk_apbif; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->clk_d_audio);
 if (VAR_2) {
  FUNC_2(VAR_1, "clk_enable d_audio failed: %d\n", VAR_2);
  return VAR_2;
 }
 VAR_2 = FUNC_1(VAR_0->clk_apbif);
 if (VAR_2) {
  FUNC_2(VAR_1, "clk_enable apbif failed: %d\n", VAR_2);
  FUNC_0(VAR_0->clk_d_audio);
  return VAR_2;
 }

 FUNC_3(VAR_0->regmap_apbif, 0);
 FUNC_3(VAR_0->regmap_ahub, 0);

 return 0;
}
