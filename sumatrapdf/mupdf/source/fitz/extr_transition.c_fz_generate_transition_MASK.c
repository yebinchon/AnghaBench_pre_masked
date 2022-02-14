
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int direction; int vertical; } ;
typedef TYPE_1__ fz_transition ;
typedef int fz_pixmap ;
typedef int fz_context ;





 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (int *,int *,int *,int) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int *,int *,int *,int) ;
 int FUNC_4 (int *,int *,int *,int) ;

int FUNC_5(fz_context *VAR_0, fz_pixmap *VAR_1, fz_pixmap *VAR_2, fz_pixmap *VAR_3, int VAR_4, fz_transition *VAR_5)
{
 switch (VAR_5->type)
 {
 default:
 case 129:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 case 130:
  if (VAR_5->vertical)
   return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  else
   return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 case 128:
  switch (((VAR_5->direction + 45 + 360) % 360) / 90)
  {
  default:
  case 0: return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
  case 1: return FUNC_4(VAR_1, VAR_3, VAR_2, 256-VAR_4);
  case 2: return FUNC_3(VAR_1, VAR_3, VAR_2, 256-VAR_4);
  case 3: return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  }
 }
}
