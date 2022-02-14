
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_i2s_clk_div {int div; int val; } ;
struct sun4i_i2s {TYPE_1__* variant; } ;
struct TYPE_2__ {int num_bclk_dividers; struct sun4i_i2s_clk_div* bclk_dividers; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct sun4i_i2s *VAR_1,
      unsigned long VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4,
      unsigned int VAR_5)
{
 const struct sun4i_i2s_clk_div *VAR_6 = VAR_1->variant->bclk_dividers;
 int VAR_7 = VAR_2 / VAR_3 / VAR_5 / VAR_4;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1->variant->num_bclk_dividers; VAR_8++) {
  const struct sun4i_i2s_clk_div *VAR_9 = &VAR_6[VAR_8];

  if (VAR_9->div == VAR_7)
   return VAR_9->val;
 }

 return -VAR_0;
}
