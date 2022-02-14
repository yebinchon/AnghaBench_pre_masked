
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arizona_fll_cfg {int refdiv; int fratio; } ;
struct arizona_fll {int vco_mult; TYPE_1__* arizona; } ;
struct TYPE_2__ {int type; int rev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (unsigned int,int*) ;
 int FUNC_1 (struct arizona_fll*,char*,...) ;
 int FUNC_2 (struct arizona_fll*,char*,unsigned int) ;
 int FUNC_3 (struct arizona_fll*,char*) ;
 unsigned int* VAR_5 ;

__attribute__((used)) static int FUNC_4(struct arizona_fll *VAR_6,
          struct arizona_fll_cfg *VAR_7,
          unsigned int VAR_8,
          unsigned int VAR_9, bool VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;


 VAR_14 = 1;
 VAR_7->refdiv = 0;
 while (VAR_9 > VAR_1) {
  VAR_14 *= 2;
  VAR_9 /= 2;
  VAR_7->refdiv++;

  if (VAR_14 > VAR_2)
   return -VAR_4;
 }


 VAR_11 = FUNC_0(VAR_9, &VAR_7->fratio);
 if (VAR_11 < 0) {
  FUNC_2(VAR_6, "Unable to find FRATIO for Fref=%uHz\n",
    VAR_9);
  return VAR_11;
 }

 switch (VAR_6->arizona->type) {
 case 131:
 case 128:
  return VAR_11;
 case 130:
 case 129:
  if (VAR_6->arizona->rev < 3 || VAR_10)
   return VAR_11;
  break;
 default:
  if (VAR_10)
   return VAR_11;
  break;
 }

 VAR_7->fratio = VAR_11 - 1;


 VAR_13 = VAR_7->refdiv;

 FUNC_1(VAR_6, "pseudo: initial ratio=%u fref=%u refdiv=%u\n",
   VAR_11, VAR_9, VAR_13);

 while (VAR_14 <= VAR_2) {



  for (VAR_12 = VAR_11; VAR_12 > 0; VAR_12--) {
   if (VAR_8 % (VAR_12 * VAR_9)) {
    VAR_7->refdiv = VAR_13;
    VAR_7->fratio = VAR_12 - 1;
    FUNC_1(VAR_6,
     "pseudo: found fref=%u refdiv=%d(%d) ratio=%d\n",
     VAR_9, VAR_13, VAR_14, VAR_12);
    return VAR_12;
   }
  }

  for (VAR_12 = VAR_11 + 1; VAR_12 <= VAR_0;
       VAR_12++) {
   if ((VAR_3 / 2) /
       (VAR_6->vco_mult * VAR_12) < VAR_9) {
    FUNC_1(VAR_6, "pseudo: hit VCO corner\n");
    break;
   }

   if (VAR_9 > VAR_5[VAR_12 - 1]) {
    FUNC_1(VAR_6,
     "pseudo: exceeded max fref(%u) for ratio=%u\n",
     VAR_5[VAR_12 - 1],
     VAR_12);
    break;
   }

   if (VAR_8 % (VAR_12 * VAR_9)) {
    VAR_7->refdiv = VAR_13;
    VAR_7->fratio = VAR_12 - 1;
    FUNC_1(VAR_6,
     "pseudo: found fref=%u refdiv=%d(%d) ratio=%d\n",
     VAR_9, VAR_13, VAR_14, VAR_12);
    return VAR_12;
   }
  }

  VAR_14 *= 2;
  VAR_9 /= 2;
  VAR_13++;
  VAR_11 = FUNC_0(VAR_9, ((void*)0));
  FUNC_1(VAR_6,
    "pseudo: change fref=%u refdiv=%d(%d) ratio=%u\n",
    VAR_9, VAR_13, VAR_14, VAR_11);
 }

 FUNC_3(VAR_6, "Falling back to integer mode operation\n");
 return VAR_7->fratio + 1;
}
