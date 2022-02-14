
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_5__* first_block; } ;
typedef TYPE_3__ fz_stext_page ;
struct TYPE_18__ {scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; scalar_t__ y1; } ;
struct TYPE_16__ {TYPE_6__ bbox; struct TYPE_16__* next; } ;
typedef TYPE_4__ fz_stext_line ;
struct TYPE_13__ {TYPE_4__* first_line; } ;
struct TYPE_14__ {TYPE_1__ t; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_2__ u; struct TYPE_17__* next; } ;
typedef TYPE_5__ fz_stext_block ;
typedef TYPE_6__ fz_rect ;
struct TYPE_19__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_7__ fz_point ;


 scalar_t__ VAR_0 ;
 float FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int,TYPE_7__) ;
 float FUNC_2 (float,float) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(fz_stext_page *VAR_1, fz_point VAR_2)
{
 fz_stext_block *VAR_3;
 fz_stext_line *VAR_4;
 fz_stext_line *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 float VAR_7 = 1e30f;
 float VAR_8;
 int VAR_9 = 0;

 for (VAR_3 = VAR_1->first_block; VAR_3; VAR_3 = VAR_3->next)
 {
  if (VAR_3->type != VAR_0)
   continue;
  for (VAR_4 = VAR_3->u.t.first_line; VAR_4; VAR_4 = VAR_4->next)
  {
   fz_rect VAR_10 = VAR_4->bbox;
   if (VAR_2.x >= VAR_10.x0 && VAR_2.x <= VAR_10.x1)
   {
    if (VAR_2.y < VAR_10.y0)
     VAR_8 = FUNC_0(VAR_10.y0 - VAR_2.y, 0);
    else if (VAR_2.y > VAR_10.y1)
     VAR_8 = FUNC_0(VAR_2.y - VAR_10.y1, 0);
    else
     VAR_8 = 0;
   }
   else if (VAR_2.y >= VAR_10.y0 && VAR_2.y <= VAR_10.y1)
   {
    if (VAR_2.x < VAR_10.x0)
     VAR_8 = FUNC_0(VAR_10.x0 - VAR_2.x, 0);
    else if (VAR_2.x > VAR_10.x1)
     VAR_8 = FUNC_0(VAR_2.x - VAR_10.x1, 0);
    else
     VAR_8 = 0;
   }
   else
   {
    float VAR_11 = FUNC_0(VAR_2.x - VAR_10.x0, VAR_2.y - VAR_10.y0);
    float VAR_12 = FUNC_0(VAR_2.x - VAR_10.x1, VAR_2.y - VAR_10.y0);
    float VAR_13 = FUNC_0(VAR_2.x - VAR_10.x0, VAR_2.y - VAR_10.y1);
    float VAR_14 = FUNC_0(VAR_2.x - VAR_10.x1, VAR_2.y - VAR_10.y1);
    VAR_8 = FUNC_2(FUNC_2(VAR_11, VAR_12), FUNC_2(VAR_13, VAR_14));
   }
   if (VAR_8 < VAR_7)
   {
    VAR_7 = VAR_8;
    VAR_5 = VAR_4;
    VAR_6 = VAR_9;
   }
   VAR_9 += FUNC_3(VAR_4);
  }
 }

 if (VAR_5)
  return FUNC_1(VAR_5, VAR_6, VAR_2);
 return 0;
}
