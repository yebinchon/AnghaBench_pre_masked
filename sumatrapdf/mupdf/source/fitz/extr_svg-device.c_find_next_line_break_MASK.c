
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int len; scalar_t__ wmode; TYPE_1__* items; } ;
typedef TYPE_2__ fz_text_span ;
struct TYPE_9__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_3__ fz_point ;
typedef int fz_matrix ;
typedef int fz_context ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ y; scalar_t__ ucs; } ;


 TYPE_3__ FUNC_0 (TYPE_3__,int ) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_0, const fz_text_span *VAR_1, fz_matrix VAR_2, int VAR_3)
{
 fz_point VAR_4, VAR_5;

 VAR_5.x = VAR_1->items[VAR_3].x;
 VAR_5.y = VAR_1->items[VAR_3].y;
 VAR_5 = FUNC_0(VAR_5, VAR_2);

 for (++VAR_3; VAR_3 < VAR_1->len; ++VAR_3)
 {
  if (VAR_1->items[VAR_3].ucs >= 0)
  {
   VAR_4.x = VAR_1->items[VAR_3].x;
   VAR_4.y = VAR_1->items[VAR_3].y;
   VAR_4 = FUNC_0(VAR_4, VAR_2);
   if (VAR_1->wmode == 0)
   {
    if (VAR_4.y != VAR_5.y)
     return VAR_3;
   }
   else
   {
    if (VAR_4.x != VAR_5.x)
     return VAR_3;
   }
   VAR_5 = VAR_4;
  }
 }

 return VAR_3;
}
