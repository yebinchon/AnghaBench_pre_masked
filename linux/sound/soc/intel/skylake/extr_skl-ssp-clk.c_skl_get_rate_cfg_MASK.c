
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_clk_rate_cfg_table {unsigned long rate; } ;


 int VAR_0 ;

__attribute__((used)) static struct skl_clk_rate_cfg_table *FUNC_0(
  struct skl_clk_rate_cfg_table *VAR_1,
    unsigned long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; (VAR_3 < VAR_0) && VAR_1[VAR_3].rate; VAR_3++) {
  if (VAR_1[VAR_3].rate == VAR_2)
   return &VAR_1[VAR_3];
 }

 return ((void*)0);
}
