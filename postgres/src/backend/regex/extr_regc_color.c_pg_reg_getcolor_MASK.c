
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct colormap {int numcmranges; int hiarraycols; int * hicolormap; TYPE_1__* cmranges; } ;
struct TYPE_2__ {scalar_t__ cmin; scalar_t__ cmax; int rownum; } ;
typedef TYPE_1__ colormaprange ;
typedef int color ;
typedef scalar_t__ chr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct colormap*,scalar_t__) ;

color
FUNC_2(struct colormap *VAR_1, chr VAR_2)
{
 int VAR_3,
    VAR_4,
    VAR_5,
    VAR_6;


 FUNC_0(VAR_2 > VAR_0);





 VAR_3 = 0;
 VAR_5 = 0;
 VAR_6 = VAR_1->numcmranges;
 while (VAR_5 < VAR_6)
 {
  int VAR_7 = VAR_5 + (VAR_6 - VAR_5) / 2;
  const colormaprange *VAR_8 = &VAR_1->cmranges[VAR_7];

  if (VAR_2 < VAR_8->cmin)
   VAR_6 = VAR_7;
  else if (VAR_2 > VAR_8->cmax)
   VAR_5 = VAR_7 + 1;
  else
  {
   VAR_3 = VAR_8->rownum;
   break;
  }
 }




 if (VAR_1->hiarraycols > 1)
 {
  VAR_4 = FUNC_1(VAR_1, VAR_2);
  return VAR_1->hicolormap[VAR_3 * VAR_1->hiarraycols + VAR_4];
 }
 else
 {

  return VAR_1->hicolormap[VAR_3];
 }
}
