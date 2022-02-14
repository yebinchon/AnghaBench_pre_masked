
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct madera_fll_gains {int dummy; } ;
struct madera_fll_cfg {int refdiv; int n; int theta; int lambda; int gain; int fratio; } ;
struct madera_fll {int fout; TYPE_1__* madera; } ;
struct TYPE_2__ {int type; int rev; } ;


 int FUNC_0 (struct madera_fll_gains*) ;


 int VAR_0 ;

 unsigned int FUNC_1 (int,int) ;
 int FUNC_2 (struct madera_fll*,struct madera_fll_cfg*,unsigned int,int) ;
 int FUNC_3 (struct madera_fll*,struct madera_fll_cfg*,unsigned int,struct madera_fll_gains const*,int) ;
 int FUNC_4 (struct madera_fll*,char*,int,...) ;
 struct madera_fll_gains* VAR_1 ;
 struct madera_fll_gains* VAR_2 ;

__attribute__((used)) static int FUNC_5(struct madera_fll *VAR_3,
      struct madera_fll_cfg *VAR_4,
      unsigned int VAR_5, bool VAR_6)
{
 unsigned int VAR_7;
 const struct madera_fll_gains *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;

 FUNC_4(VAR_3, "fref=%u Fout=%u fvco=%u\n",
         VAR_5, VAR_3->fout, VAR_3->fout * VAR_0);


 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_5 = VAR_5 / (1 << VAR_4->refdiv);

 VAR_4->n = VAR_3->fout / (VAR_10 * VAR_5);

 if (VAR_3->fout % (VAR_10 * VAR_5)) {
  VAR_7 = FUNC_1(VAR_3->fout, VAR_10 * VAR_5);
  FUNC_4(VAR_3, "GCD=%u\n", VAR_7);

  VAR_4->theta = (VAR_3->fout - (VAR_4->n * VAR_10 * VAR_5))
   / VAR_7;
  VAR_4->lambda = (VAR_10 * VAR_5) / VAR_7;
 } else {
  VAR_4->theta = 0;
  VAR_4->lambda = 0;
 }






 while (VAR_4->lambda >= (1 << 16)) {
  VAR_4->theta >>= 1;
  VAR_4->lambda >>= 1;
 }

 switch (VAR_3->madera->type) {
 case 130:
  switch (VAR_3->madera->rev) {
  case 0:

   VAR_8 = VAR_2;
   VAR_9 = FUNC_0(VAR_2);
   break;
  default:
   if (VAR_6) {
    VAR_8 = VAR_2;
    VAR_9 = FUNC_0(VAR_2);
   } else {
    VAR_8 = VAR_1;
    VAR_9 = FUNC_0(VAR_1);
   }
   break;
  }
  break;
 case 129:
 case 128:

  VAR_8 = VAR_2;
  VAR_9 = FUNC_0(VAR_2);
  break;
 default:
  if (VAR_6) {
   VAR_8 = VAR_2;
   VAR_9 = FUNC_0(VAR_2);
  } else {
   VAR_8 = VAR_1;
   VAR_9 = FUNC_0(VAR_1);
  }
  break;
 }

 VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_8, VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_4(VAR_3, "N=%d THETA=%d LAMBDA=%d\n",
         VAR_4->n, VAR_4->theta, VAR_4->lambda);
 FUNC_4(VAR_3, "FRATIO=0x%x(%d) REFCLK_DIV=0x%x(%d)\n",
         VAR_4->fratio, VAR_10, VAR_4->refdiv, 1 << VAR_4->refdiv);
 FUNC_4(VAR_3, "GAIN=0x%x(%d)\n", VAR_4->gain, 1 << VAR_4->gain);

 return 0;
}
