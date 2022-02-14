
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skl_clk_data {size_t avail_clk_cnt; TYPE_1__** clk; } ;
struct TYPE_2__ {int lookup; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct skl_clk_data *VAR_0)
{
 while (VAR_0->avail_clk_cnt--)
  FUNC_0(VAR_0->clk[VAR_0->avail_clk_cnt]->lookup);
}
