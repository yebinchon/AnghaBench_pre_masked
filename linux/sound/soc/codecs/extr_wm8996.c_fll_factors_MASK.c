
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _fll_div {unsigned int fll_refclk_div; int fll_loop_gain; int fll_ref_freq; unsigned int fll_outdiv; unsigned int fll_fratio; unsigned int n; unsigned int theta; unsigned int lambda; } ;
struct TYPE_3__ {unsigned int min; unsigned int max; unsigned int fll_fratio; unsigned int ratio; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned int,...) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct _fll_div *VAR_2, unsigned int VAR_3,
         unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9;


 VAR_6 = 1;
 VAR_2->fll_refclk_div = 0;
 while ((VAR_3 / VAR_6) > 13500000) {
  VAR_6 *= 2;
  VAR_2->fll_refclk_div++;

  if (VAR_6 > 8) {
   FUNC_3("Can't scale %dMHz input down to <=13.5MHz\n",
          VAR_3);
   return -VAR_0;
  }
 }

 FUNC_2("FLL Fref=%u Fout=%u\n", VAR_3, VAR_4);


 VAR_3 /= VAR_6;

 if (VAR_3 >= 3000000)
  VAR_2->fll_loop_gain = 5;
 else
  VAR_2->fll_loop_gain = 0;

 if (VAR_3 >= 48000)
  VAR_2->fll_ref_freq = 0;
 else
  VAR_2->fll_ref_freq = 1;


 VAR_6 = 2;
 while (VAR_4 * VAR_6 < 90000000) {
  VAR_6++;
  if (VAR_6 > 64) {
   FUNC_3("Unable to find FLL_OUTDIV for Fout=%uHz\n",
          VAR_4);
   return -VAR_0;
  }
 }
 VAR_5 = VAR_4 * VAR_6;
 VAR_2->fll_outdiv = VAR_6 - 1;

 FUNC_2("FLL Fvco=%dHz\n", VAR_5);


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); VAR_9++) {
  if (VAR_1[VAR_9].min <= VAR_3 && VAR_3 <= VAR_1[VAR_9].max) {
   VAR_2->fll_fratio = VAR_1[VAR_9].fll_fratio;
   VAR_7 = VAR_1[VAR_9].ratio;
   break;
  }
 }
 if (VAR_9 == FUNC_0(VAR_1)) {
  FUNC_3("Unable to find FLL_FRATIO for Fref=%uHz\n", VAR_3);
  return -VAR_0;
 }

 VAR_2->n = VAR_5 / (VAR_7 * VAR_3);

 if (VAR_5 % VAR_3 == 0) {
  VAR_2->theta = 0;
  VAR_2->lambda = 0;
 } else {
  VAR_8 = FUNC_1(VAR_5, VAR_7 * VAR_3);

  VAR_2->theta = (VAR_5 - (VAR_2->n * VAR_7 * VAR_3))
   / VAR_8;
  VAR_2->lambda = (VAR_7 * VAR_3) / VAR_8;
 }

 FUNC_2("FLL N=%x THETA=%x LAMBDA=%x\n",
   VAR_2->n, VAR_2->theta, VAR_2->lambda);
 FUNC_2("FLL_FRATIO=%x FLL_OUTDIV=%x FLL_REFCLK_DIV=%x\n",
   VAR_2->fll_fratio, VAR_2->fll_outdiv,
   VAR_2->fll_refclk_div);

 return 0;
}
