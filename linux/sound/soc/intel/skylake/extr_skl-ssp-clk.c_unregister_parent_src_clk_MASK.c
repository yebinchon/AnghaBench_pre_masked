
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_clk_parent {int hw; int lookup; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct skl_clk_parent *VAR_0,
     unsigned int VAR_1)
{
 while (VAR_1--) {
  FUNC_1(VAR_0[VAR_1].lookup);
  FUNC_0(VAR_0[VAR_1].hw);
 }
}
