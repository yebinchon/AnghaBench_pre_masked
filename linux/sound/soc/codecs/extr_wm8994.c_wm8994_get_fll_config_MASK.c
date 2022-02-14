
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wm8994 {int type; } ;
struct fll_div {int clk_ref_div; int outdiv; int fll_fratio; unsigned int n; unsigned int k; int lambda; } ;


 int VAR_0 ;
 long long VAR_1 ;

 int FUNC_0 (int,int) ;
 unsigned int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct wm8994 *VAR_2, struct fll_div *VAR_3,
     int VAR_4, int VAR_5)
{
 u64 VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_2("FLL input=%dHz, output=%dHz\n", VAR_4, VAR_5);


 VAR_3->clk_ref_div = 0;
 while (VAR_4 > 13500000) {
  VAR_3->clk_ref_div++;
  VAR_4 /= 2;

  if (VAR_3->clk_ref_div > 3)
   return -VAR_0;
 }
 FUNC_2("CLK_REF_DIV=%d, Fref=%dHz\n", VAR_3->clk_ref_div, VAR_4);


 VAR_3->outdiv = 3;
 while (VAR_5 * (VAR_3->outdiv + 1) < 90000000) {
  VAR_3->outdiv++;
  if (VAR_3->outdiv > 63)
   return -VAR_0;
 }
 VAR_5 *= VAR_3->outdiv + 1;
 FUNC_2("OUTDIV=%d, Fvco=%dHz\n", VAR_3->outdiv, VAR_5);

 if (VAR_4 > 1000000) {
  VAR_3->fll_fratio = 0;
 } else if (VAR_4 > 256000) {
  VAR_3->fll_fratio = 1;
  VAR_4 *= 2;
 } else if (VAR_4 > 128000) {
  VAR_3->fll_fratio = 2;
  VAR_4 *= 4;
 } else if (VAR_4 > 64000) {
  VAR_3->fll_fratio = 3;
  VAR_4 *= 8;
 } else {
  VAR_3->fll_fratio = 4;
  VAR_4 *= 16;
 }
 FUNC_2("FLL_FRATIO=%d, Fref=%dHz\n", VAR_3->fll_fratio, VAR_4);


 VAR_8 = VAR_5 / VAR_4;

 VAR_3->n = VAR_8;
 VAR_9 = VAR_5 % VAR_4;
 FUNC_2("Nmod=%d\n", VAR_9);

 switch (VAR_2->type) {
 case 128:

  VAR_6 = VAR_1 * (long long)VAR_9;

  FUNC_0(VAR_6, VAR_4);

  VAR_7 = VAR_6 & 0xFFFFFFFF;

  if ((VAR_7 % 10) >= 5)
   VAR_7 += 5;


  VAR_3->k = VAR_7 / 10;
  VAR_3->lambda = 0;

  FUNC_2("N=%x K=%x\n", VAR_3->n, VAR_3->k);
  break;

 default:
  VAR_10 = FUNC_1(VAR_5, VAR_4);

  VAR_3->k = (VAR_5 - (VAR_4 * VAR_3->n)) / VAR_10;
  VAR_3->lambda = VAR_4 / VAR_10;

 }

 return 0;
}
