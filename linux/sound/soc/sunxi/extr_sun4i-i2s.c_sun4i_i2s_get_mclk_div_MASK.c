
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_i2s_clk_div {int div; int val; } ;
struct sun4i_i2s {TYPE_1__* variant; } ;
struct TYPE_2__ {int num_mclk_dividers; struct sun4i_i2s_clk_div* mclk_dividers; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct sun4i_i2s *VAR_1,
      unsigned long VAR_2,
      unsigned long VAR_3)
{
 const struct sun4i_i2s_clk_div *VAR_4 = VAR_1->variant->mclk_dividers;
 int VAR_5 = VAR_2 / VAR_3;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->variant->num_mclk_dividers; VAR_6++) {
  const struct sun4i_i2s_clk_div *VAR_7 = &VAR_4[VAR_6];

  if (VAR_7->div == VAR_5)
   return VAR_7->val;
 }

 return -VAR_0;
}
