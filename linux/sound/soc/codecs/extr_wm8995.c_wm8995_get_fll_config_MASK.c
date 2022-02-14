
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fll_div {int clk_ref_div; int outdiv; int fll_fratio; unsigned int n; unsigned int k; } ;


 int VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct fll_div *VAR_2,
     int VAR_3, int VAR_4)
{
 u64 VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;

 FUNC_1("FLL input=%dHz, output=%dHz\n", VAR_3, VAR_4);


 VAR_2->clk_ref_div = 0;
 while (VAR_3 > 13500000) {
  VAR_2->clk_ref_div++;
  VAR_3 /= 2;

  if (VAR_2->clk_ref_div > 3)
   return -VAR_0;
 }
 FUNC_1("CLK_REF_DIV=%d, Fref=%dHz\n", VAR_2->clk_ref_div, VAR_3);


 VAR_2->outdiv = 3;
 while (VAR_4 * (VAR_2->outdiv + 1) < 90000000) {
  VAR_2->outdiv++;
  if (VAR_2->outdiv > 63)
   return -VAR_0;
 }
 VAR_4 *= VAR_2->outdiv + 1;
 FUNC_1("OUTDIV=%d, Fvco=%dHz\n", VAR_2->outdiv, VAR_4);

 if (VAR_3 > 1000000) {
  VAR_2->fll_fratio = 0;
 } else if (VAR_3 > 256000) {
  VAR_2->fll_fratio = 1;
  VAR_3 *= 2;
 } else if (VAR_3 > 128000) {
  VAR_2->fll_fratio = 2;
  VAR_3 *= 4;
 } else if (VAR_3 > 64000) {
  VAR_2->fll_fratio = 3;
  VAR_3 *= 8;
 } else {
  VAR_2->fll_fratio = 4;
  VAR_3 *= 16;
 }
 FUNC_1("FLL_FRATIO=%d, Fref=%dHz\n", VAR_2->fll_fratio, VAR_3);


 VAR_7 = VAR_4 / VAR_3;

 VAR_2->n = VAR_7;
 VAR_8 = VAR_4 % VAR_3;
 FUNC_1("Nmod=%d\n", VAR_8);


 VAR_5 = VAR_1 * (long long)VAR_8;

 FUNC_0(VAR_5, VAR_3);

 VAR_6 = VAR_5 & 0xFFFFFFFF;

 if ((VAR_6 % 10) >= 5)
  VAR_6 += 5;


 VAR_2->k = VAR_6 / 10;

 FUNC_1("N=%x K=%x\n", VAR_2->n, VAR_2->k);

 return 0;
}
