
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_26__ {int f; int e; } ;
struct TYPE_23__ {int len; TYPE_1__* items; int font; TYPE_5__ trm; struct TYPE_23__* next; } ;
typedef TYPE_2__ fz_text_span ;
struct TYPE_24__ {TYPE_2__* head; } ;
typedef TYPE_3__ fz_text ;
typedef int fz_stroke_state ;
struct TYPE_25__ {int x0; int y0; int x1; int y1; } ;
typedef TYPE_4__ fz_rect ;
typedef TYPE_5__ fz_matrix ;
typedef int fz_context ;
struct TYPE_22__ {scalar_t__ gid; int y; int x; } ;


 TYPE_4__ FUNC_0 (int *,TYPE_4__,int const*,TYPE_5__) ;
 TYPE_4__ FUNC_1 (int *,int ,scalar_t__,TYPE_5__) ;
 TYPE_5__ FUNC_2 (TYPE_5__,TYPE_5__) ;
 TYPE_4__ VAR_0 ;
 int FUNC_3 (TYPE_4__) ;
 TYPE_4__ FUNC_4 (TYPE_4__,TYPE_4__) ;

fz_rect
FUNC_5(fz_context *VAR_1, const fz_text *VAR_2, const fz_stroke_state *VAR_3, fz_matrix VAR_4)
{
 fz_text_span *VAR_5;
 fz_matrix VAR_6, VAR_7;
 fz_rect VAR_8;
 fz_rect VAR_9;
 int VAR_10;

 VAR_9 = VAR_0;

 for (VAR_5 = VAR_2->head; VAR_5; VAR_5 = VAR_5->next)
 {
  if (VAR_5->len > 0)
  {
   VAR_6 = VAR_5->trm;
   for (VAR_10 = 0; VAR_10 < VAR_5->len; VAR_10++)
   {
    if (VAR_5->items[VAR_10].gid >= 0)
    {
     VAR_6.e = VAR_5->items[VAR_10].x;
     VAR_6.f = VAR_5->items[VAR_10].y;
     VAR_7 = FUNC_2(VAR_6, VAR_4);
     VAR_8 = FUNC_1(VAR_1, VAR_5->font, VAR_5->items[VAR_10].gid, VAR_7);
     VAR_9 = FUNC_4(VAR_9, VAR_8);
    }
   }
  }
 }

 if (!FUNC_3(VAR_9))
 {
  if (VAR_3)
   VAR_9 = FUNC_0(VAR_1, VAR_9, VAR_3, VAR_4);


  VAR_9.x0 -= 1;
  VAR_9.y0 -= 1;
  VAR_9.x1 += 1;
  VAR_9.y1 += 1;
 }

 return VAR_9;
}
