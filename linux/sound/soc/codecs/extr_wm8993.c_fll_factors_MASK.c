
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct _fll_div {unsigned int fll_outdiv; unsigned int n; unsigned int k; scalar_t__ fll_clk_ref_div; int fll_fratio; } ;
struct TYPE_3__ {unsigned int min; unsigned int max; unsigned int ratio; int fll_fratio; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 long long VAR_1 ;
 int FUNC_1 (int,unsigned int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,unsigned int,...) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct _fll_div *VAR_3, unsigned int VAR_4,
         unsigned int VAR_5)
{
 u64 VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;
 int VAR_12;


 VAR_11 = 1;
 VAR_3->fll_clk_ref_div = 0;
 while ((VAR_4 / VAR_11) > 13500000) {
  VAR_11 *= 2;
  VAR_3->fll_clk_ref_div++;

  if (VAR_11 > 8) {
   FUNC_3("Can't scale %dMHz input down to <=13.5MHz\n",
          VAR_4);
   return -VAR_0;
  }
 }

 FUNC_2("Fref=%u Fout=%u\n", VAR_4, VAR_5);


 VAR_4 /= VAR_11;


 VAR_11 = 0;
 VAR_10 = VAR_5 * 2;
 while (VAR_10 < 90000000) {
  VAR_11++;
  VAR_10 *= 2;
  if (VAR_11 > 7) {
   FUNC_3("Unable to find FLL_OUTDIV for Fout=%uHz\n",
          VAR_5);
   return -VAR_0;
  }
 }
 VAR_3->fll_outdiv = VAR_11;

 FUNC_2("Fvco=%dHz\n", VAR_10);


 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_2); VAR_12++) {
  if (VAR_2[VAR_12].min <= VAR_4 && VAR_4 <= VAR_2[VAR_12].max) {
   VAR_3->fll_fratio = VAR_2[VAR_12].fll_fratio;
   VAR_10 /= VAR_2[VAR_12].ratio;
   break;
  }
 }
 if (VAR_12 == FUNC_0(VAR_2)) {
  FUNC_3("Unable to find FLL_FRATIO for Fref=%uHz\n", VAR_4);
  return -VAR_0;
 }


 VAR_8 = VAR_10 / VAR_4;

 VAR_3->n = VAR_8;
 VAR_9 = VAR_10 % VAR_4;
 FUNC_2("Nmod=%d\n", VAR_9);


 VAR_6 = VAR_1 * (long long)VAR_9;

 FUNC_1(VAR_6, VAR_4);

 VAR_7 = VAR_6 & 0xFFFFFFFF;

 if ((VAR_7 % 10) >= 5)
  VAR_7 += 5;


 VAR_3->k = VAR_7 / 10;

 FUNC_2("N=%x K=%x FLL_FRATIO=%x FLL_OUTDIV=%x FLL_CLK_REF_DIV=%x\n",
   VAR_3->n, VAR_3->k,
   VAR_3->fll_fratio, VAR_3->fll_outdiv,
   VAR_3->fll_clk_ref_div);

 return 0;
}
