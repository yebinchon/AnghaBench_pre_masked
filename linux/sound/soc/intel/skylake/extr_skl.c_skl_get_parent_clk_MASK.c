
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct skl_clk_parent_src {scalar_t__ clk_id; } ;


 unsigned int FUNC_0 (struct skl_clk_parent_src*) ;
 struct skl_clk_parent_src* VAR_0 ;

struct skl_clk_parent_src *FUNC_1(u8 VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].clk_id == VAR_1)
   return &VAR_0[VAR_2];
 }

 return ((void*)0);
}
