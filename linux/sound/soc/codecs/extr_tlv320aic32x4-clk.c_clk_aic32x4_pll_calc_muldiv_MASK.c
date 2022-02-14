
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_aic32x4_pll_muldiv {unsigned long p; int r; int j; int d; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct clk_aic32x4_pll_muldiv *VAR_1,
   unsigned long VAR_2, unsigned long VAR_3)
{
 u64 VAR_4;

 VAR_1->p = VAR_3 / VAR_0 + 1;
 if (VAR_1->p > 8)
  return -1;






 VAR_4 = (u64) VAR_2 * VAR_1->p * 10000;
 FUNC_0(VAR_4, VAR_3);





 VAR_1->r = ((u32) VAR_4 / 640000) + 1;
 if (VAR_1->r > 4)
  return -1;
 FUNC_0(VAR_4, VAR_1->r);




 if (VAR_4 < 10000)
  return -1;


 VAR_1->j = (u32) VAR_4 / 10000;
 VAR_1->d = (u32) VAR_4 % 10000;

 return 0;
}
