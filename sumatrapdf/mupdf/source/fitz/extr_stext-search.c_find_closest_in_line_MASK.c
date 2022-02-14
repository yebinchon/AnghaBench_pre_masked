
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_21__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_15__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
struct TYPE_22__ {TYPE_7__ dir; TYPE_9__* first_char; TYPE_1__ bbox; } ;
typedef TYPE_8__ fz_stext_line ;
struct TYPE_19__ {int x; int y; } ;
struct TYPE_18__ {int x; int y; } ;
struct TYPE_17__ {int x; int y; } ;
struct TYPE_16__ {int x; int y; } ;
struct TYPE_20__ {TYPE_5__ lr; TYPE_4__ ll; TYPE_3__ ur; TYPE_2__ ul; } ;
struct TYPE_23__ {TYPE_6__ quad; struct TYPE_23__* next; } ;
typedef TYPE_9__ fz_stext_char ;
struct TYPE_14__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_10__ fz_point ;


 float FUNC_0 (float,float) ;
 int FUNC_1 (TYPE_8__*) ;

__attribute__((used)) static int FUNC_2(fz_stext_line *VAR_0, int VAR_1, fz_point VAR_2)
{
 fz_stext_char *VAR_3;
 float VAR_4 = 1e30f;
 int VAR_5 = VAR_1;

 if (VAR_0->dir.x > VAR_0->dir.y)
 {
  if (VAR_2.y < VAR_0->bbox.y0)
   return VAR_1;
  if (VAR_2.y > VAR_0->bbox.y1)
   return VAR_1 + FUNC_1(VAR_0);
 }
 else
 {
  if (VAR_2.x < VAR_0->bbox.x0)
   return VAR_1 + FUNC_1(VAR_0);
  if (VAR_2.x > VAR_0->bbox.x1)
   return VAR_1;
 }

 for (VAR_3 = VAR_0->first_char; VAR_3; VAR_3 = VAR_3->next)
 {
  float VAR_6 = (VAR_3->quad.ul.x + VAR_3->quad.ur.x + VAR_3->quad.ll.x + VAR_3->quad.lr.x) / 4;
  float VAR_7 = (VAR_3->quad.ul.y + VAR_3->quad.ur.y + VAR_3->quad.ll.y + VAR_3->quad.lr.y) / 4;
  float VAR_8 = FUNC_0(VAR_2.x - VAR_6, VAR_2.y - VAR_7);
  if (VAR_8 < VAR_4)
  {
   VAR_4 = VAR_8;
   if (VAR_0->dir.x > VAR_0->dir.y)
    VAR_5 = (VAR_2.x < VAR_6) ? VAR_1 : VAR_1+1;
   else
    VAR_5 = (VAR_2.y < VAR_7) ? VAR_1 : VAR_1+1;
  }
  ++VAR_1;
 }
 return VAR_5;
}
