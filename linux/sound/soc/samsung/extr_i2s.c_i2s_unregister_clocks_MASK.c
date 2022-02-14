
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clk_num; } ;
struct samsung_i2s_priv {int * clk_table; TYPE_1__ clk_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct samsung_i2s_priv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->clk_data.clk_num; VAR_1++) {
  if (!FUNC_0(VAR_0->clk_table[VAR_1]))
   FUNC_1(VAR_0->clk_table[VAR_1]);
 }
}
