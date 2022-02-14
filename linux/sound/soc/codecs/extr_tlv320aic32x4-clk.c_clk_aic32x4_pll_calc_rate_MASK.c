
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clk_aic32x4_pll_muldiv {int r; int j; int d; int p; } ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static unsigned long FUNC_1(
   struct clk_aic32x4_pll_muldiv *VAR_0,
   unsigned long VAR_1)
{
 u64 VAR_2;




 VAR_2 = (u64) VAR_1 * VAR_0->r *
    ((VAR_0->j * 10000) + VAR_0->d);

 return (unsigned long) FUNC_0(VAR_2, VAR_0->p * 10000);
}
