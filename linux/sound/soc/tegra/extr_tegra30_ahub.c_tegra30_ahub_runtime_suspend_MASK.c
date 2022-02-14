
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int clk_d_audio; int clk_apbif; int regmap_ahub; int regmap_apbif; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1)
{
 FUNC_1(VAR_0->regmap_apbif, 1);
 FUNC_1(VAR_0->regmap_ahub, 1);

 FUNC_0(VAR_0->clk_apbif);
 FUNC_0(VAR_0->clk_d_audio);

 return 0;
}
