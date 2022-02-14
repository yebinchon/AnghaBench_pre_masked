
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gdRectPtr ;
struct TYPE_8__ {double x; double y; } ;
typedef TYPE_2__ gdPointF ;
struct TYPE_7__ {int width; int height; int x; int y; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*,double const*) ;

int FUNC_2(gdRectPtr VAR_2, const double VAR_3[6], gdRectPtr VAR_4)
{
 gdPointF VAR_5[4], VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_5[0].x=0.0;
 VAR_5[0].y=0.0;
 VAR_5[1].x=(double) VAR_2->width;
 VAR_5[1].y=0.0;
 VAR_5[2].x=(double) VAR_2->width;
 VAR_5[2].y=(double) VAR_2->height;
 VAR_5[3].x=0.0;
 VAR_5[3].y=(double) VAR_2->height;

 for (VAR_9=0; VAR_9 < 4; VAR_9++) {
  VAR_8=VAR_5[VAR_9];
  if (FUNC_1(&VAR_5[VAR_9], &VAR_8, VAR_3) != VAR_1) {
   return VAR_0;
  }
 }
 VAR_6=VAR_5[0];
 VAR_7=VAR_5[0];

 for (VAR_9=1; VAR_9 < 4; VAR_9++) {
  if (VAR_6.x > VAR_5[VAR_9].x)
   VAR_6.x=VAR_5[VAR_9].x;
  if (VAR_6.y > VAR_5[VAR_9].y)
   VAR_6.y=VAR_5[VAR_9].y;
  if (VAR_7.x < VAR_5[VAR_9].x)
   VAR_7.x=VAR_5[VAR_9].x;
  if (VAR_7.y < VAR_5[VAR_9].y)
   VAR_7.y=VAR_5[VAR_9].y;
 }
 VAR_4->x = (int) VAR_6.x;
 VAR_4->y = (int) VAR_6.y;
 VAR_4->width = (int) FUNC_0(VAR_7.x - VAR_6.x) - 1;
 VAR_4->height = (int) FUNC_0(VAR_7.y - VAR_6.y);
 return VAR_1;
}
