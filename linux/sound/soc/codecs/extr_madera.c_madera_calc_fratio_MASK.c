
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct madera_fll_cfg {int refdiv; int fratio; } ;
struct madera_fll {int fout; TYPE_1__* madera; } ;
struct TYPE_2__ {int type; int rev; } ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (struct madera_fll*,unsigned int,int,int*) ;
 int FUNC_1 (struct madera_fll*,char*,unsigned int) ;
 int FUNC_2 (struct madera_fll*,char*) ;
 unsigned int* VAR_6 ;

__attribute__((used)) static int FUNC_3(struct madera_fll *VAR_7,
         struct madera_fll_cfg *VAR_8,
         unsigned int VAR_9, bool VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;


 VAR_14 = 1;
 VAR_8->refdiv = 0;
 while (VAR_9 > VAR_2) {
  VAR_14 *= 2;
  VAR_9 /= 2;
  VAR_8->refdiv++;

  if (VAR_14 > VAR_3)
   return -VAR_0;
 }


 VAR_11 = FUNC_0(VAR_7, VAR_9, VAR_10, &VAR_8->fratio);
 if (VAR_11 < 0) {
  FUNC_1(VAR_7, "Unable to find FRATIO for fref=%uHz\n",
          VAR_9);
  return VAR_11;
 }

 if (!VAR_10)
  VAR_8->fratio = VAR_11 - 1;

 switch (VAR_7->madera->type) {
 case 130:
  switch (VAR_7->madera->rev) {
  case 0:
   if (VAR_10)
    return VAR_11;
   break;
  default:
   return VAR_11;
  }
  break;
 case 129:
 case 128:
  if (VAR_10)
   return VAR_11;
  break;
 default:
  return VAR_11;
 }





 VAR_13 = VAR_8->refdiv;

 while (VAR_14 <= VAR_3) {




  for (VAR_12 = VAR_11; VAR_12 > 0; VAR_12--) {
   if (VAR_7->fout % (VAR_12 * VAR_9)) {
    VAR_8->refdiv = VAR_13;
    VAR_8->fratio = VAR_12 - 1;
    return VAR_12;
   }
  }

  for (VAR_12 = VAR_11 + 1; VAR_12 <= VAR_1;
       VAR_12++) {
   if ((VAR_4 / 2) /
       (VAR_5 * VAR_12) < VAR_9)
    break;

   if (VAR_9 > VAR_6[VAR_12 - 1])
    break;

   if (VAR_7->fout % (VAR_12 * VAR_9)) {
    VAR_8->refdiv = VAR_13;
    VAR_8->fratio = VAR_12 - 1;
    return VAR_12;
   }
  }

  VAR_14 *= 2;
  VAR_9 /= 2;
  VAR_13++;
  VAR_11 = FUNC_0(VAR_7, VAR_9, VAR_10, ((void*)0));
 }

 FUNC_2(VAR_7, "Falling back to integer mode operation\n");

 return VAR_8->fratio + 1;
}
