
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {float x1; float y1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_matrix ;
struct TYPE_12__ {int glyph_count; TYPE_1__ bbox; TYPE_1__* bbox_table; scalar_t__ t3lists; scalar_t__ ft_face; } ;
typedef TYPE_2__ fz_font ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;
 scalar_t__ FUNC_3 (TYPE_1__) ;
 TYPE_1__ FUNC_4 (TYPE_1__,int ) ;

fz_rect
FUNC_5(fz_context *VAR_0, fz_font *VAR_1, int VAR_2, fz_matrix VAR_3)
{
 fz_rect VAR_4;
 if (VAR_1->bbox_table && VAR_2 < VAR_1->glyph_count)
 {

  if (FUNC_3(VAR_1->bbox_table[VAR_2]) || FUNC_2(VAR_1->bbox_table[VAR_2]))
  {

   if (VAR_1->ft_face)
    FUNC_0(VAR_0, VAR_1, VAR_2);
   else if (VAR_1->t3lists)
    FUNC_1(VAR_0, VAR_1, VAR_2);
   else


    VAR_1->bbox_table[VAR_2] = VAR_1->bbox;



   if (FUNC_2(VAR_1->bbox_table[VAR_2]))
   {
    VAR_1->bbox_table[VAR_2].x0 = 0;
    VAR_1->bbox_table[VAR_2].y0 = 0;
    VAR_1->bbox_table[VAR_2].x1 = 0.0000001f;
    VAR_1->bbox_table[VAR_2].y1 = 0.0000001f;
   }
  }
  VAR_4 = VAR_1->bbox_table[VAR_2];
 }
 else
 {

  VAR_4 = VAR_1->bbox;
 }
 return FUNC_4(VAR_4, VAR_3);
}
