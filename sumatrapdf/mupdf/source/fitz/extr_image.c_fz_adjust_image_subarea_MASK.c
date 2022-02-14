
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x0; int x1; int y0; int y1; } ;
typedef TYPE_1__ fz_irect ;
struct TYPE_6__ {int bpc; int n; int w; int h; } ;
typedef TYPE_2__ fz_image ;
typedef int fz_context ;



__attribute__((used)) static void FUNC_0(fz_context *VAR_0, fz_image *VAR_1, fz_irect *VAR_2, int VAR_3)
{
 int VAR_4 = 1<<VAR_3;
 int VAR_5 = VAR_1->bpc * VAR_1->n;
 int VAR_6;

 switch (VAR_5)
 {
 case 1: VAR_6 = 8*VAR_4; break;
 case 2: VAR_6 = 4*VAR_4; break;
 case 4: VAR_6 = 2*VAR_4; break;
 default: VAR_6 = (VAR_5 & 7) == 0 ? VAR_4 : 0; break;
 }

 if (VAR_6 != 0)
 {
  VAR_2->x0 &= ~(VAR_6 - 1);
  VAR_2->x1 = (VAR_2->x1 + VAR_6 - 1) & ~(VAR_6 - 1);
 }
 else
 {

  VAR_6 = VAR_5*VAR_4;
  switch (VAR_5)
  {
  case 3:
  case 5:
  case 7:
  case 9:
  case 11:
  case 13:
  case 15:
  default:
   VAR_6 *= 8;
   break;
  case 6:
  case 10:
  case 14:
   VAR_6 *= 4;
   break;
  case 12:
   VAR_6 *= 2;
   break;
  }
  VAR_2->x0 = (VAR_2->x0 / VAR_6) * VAR_6;
  VAR_2->x1 = ((VAR_2->x1 + VAR_6 - 1) / VAR_6) * VAR_6;
 }

 VAR_2->y0 &= ~(VAR_4 - 1);
 if (VAR_2->x1 > VAR_1->w)
  VAR_2->x1 = VAR_1->w;
 VAR_2->y1 = (VAR_2->y1 + VAR_4 - 1) & ~(VAR_4 - 1);
 if (VAR_2->y1 > VAR_1->h)
  VAR_2->y1 = VAR_1->h;
}
