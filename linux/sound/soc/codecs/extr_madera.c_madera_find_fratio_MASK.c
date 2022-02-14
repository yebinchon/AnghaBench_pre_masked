
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct madera_fll {int fout; TYPE_1__* madera; } ;
struct TYPE_2__ {int type; int rev; } ;





 int FUNC_0 (unsigned int,int ,int*) ;
 int FUNC_1 (unsigned int,int*) ;

__attribute__((used)) static int FUNC_2(struct madera_fll *VAR_0, unsigned int VAR_1,
         bool VAR_2, int *VAR_3)
{
 switch (VAR_0->madera->type) {
 case 130:
  switch (VAR_0->madera->rev) {
  case 0:

   return FUNC_1(VAR_1, VAR_3);
  default:
   if (VAR_2)
    return FUNC_1(VAR_1, VAR_3);
   else
    return FUNC_0(VAR_1,
              VAR_0->fout,
              VAR_3);
  }
  break;
 case 129:
 case 128:

  return FUNC_1(VAR_1, VAR_3);
 default:
  if (VAR_2)
   return FUNC_1(VAR_1, VAR_3);
  else
   return FUNC_0(VAR_1, VAR_0->fout, VAR_3);
 }
}
