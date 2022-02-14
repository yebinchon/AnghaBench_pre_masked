
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct arizona_fll_cfg {unsigned int outdiv; int refdiv; unsigned int n; unsigned int theta; int lambda; unsigned int gain; int fratio; } ;
struct arizona_fll {int fout; unsigned int vco_mult; } ;
struct TYPE_3__ {unsigned int min; unsigned int max; unsigned int gain; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (struct arizona_fll*,struct arizona_fll_cfg*,unsigned int,unsigned int,int) ;
 int FUNC_2 (struct arizona_fll*,char*,unsigned int,...) ;
 int FUNC_3 (struct arizona_fll*,char*,unsigned int) ;
 TYPE_1__* VAR_4 ;
 unsigned int FUNC_4 (unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct arizona_fll *VAR_5,
       struct arizona_fll_cfg *VAR_6,
       unsigned int VAR_7, bool VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;

 FUNC_2(VAR_5, "Fref=%u Fout=%u\n", VAR_7, VAR_5->fout);


 VAR_10 = VAR_2;
 while (VAR_5->fout * VAR_10 < VAR_1 * VAR_5->vco_mult) {
  VAR_10++;
  if (VAR_10 > VAR_0)
   return -VAR_3;
 }
 VAR_9 = VAR_5->fout * VAR_10 / VAR_5->vco_mult;
 VAR_6->outdiv = VAR_10;

 FUNC_2(VAR_5, "Fvco=%dHz\n", VAR_9);


 VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_9, VAR_7, VAR_8);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_7 = VAR_7 / (1 << VAR_6->refdiv);

 VAR_6->n = VAR_9 / (VAR_13 * VAR_7);

 if (VAR_9 % (VAR_13 * VAR_7)) {
  VAR_11 = FUNC_4(VAR_9, VAR_13 * VAR_7);
  FUNC_2(VAR_5, "GCD=%u\n", VAR_11);

  VAR_6->theta = (VAR_9 - (VAR_6->n * VAR_13 * VAR_7))
   / VAR_11;
  VAR_6->lambda = (VAR_13 * VAR_7) / VAR_11;
 } else {
  VAR_6->theta = 0;
  VAR_6->lambda = 0;
 }





 while (VAR_6->lambda >= (1 << 16)) {
  VAR_6->theta >>= 1;
  VAR_6->lambda >>= 1;
 }

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_4); VAR_12++) {
  if (VAR_4[VAR_12].min <= VAR_7 && VAR_7 <= VAR_4[VAR_12].max) {
   VAR_6->gain = VAR_4[VAR_12].gain;
   break;
  }
 }
 if (VAR_12 == FUNC_0(VAR_4)) {
  FUNC_3(VAR_5, "Unable to find gain for Fref=%uHz\n",
    VAR_7);
  return -VAR_3;
 }

 FUNC_2(VAR_5, "N=%d THETA=%d LAMBDA=%d\n",
   VAR_6->n, VAR_6->theta, VAR_6->lambda);
 FUNC_2(VAR_5, "FRATIO=0x%x(%d) OUTDIV=%d REFCLK_DIV=0x%x(%d)\n",
   VAR_6->fratio, VAR_13, VAR_6->outdiv,
   VAR_6->refdiv, 1 << VAR_6->refdiv);
 FUNC_2(VAR_5, "GAIN=0x%x(%d)\n", VAR_6->gain, 1 << VAR_6->gain);

 return 0;
}
