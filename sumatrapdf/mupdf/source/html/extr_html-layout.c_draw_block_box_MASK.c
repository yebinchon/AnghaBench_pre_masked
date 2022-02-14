
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hb_buffer_t ;
typedef int fz_matrix ;
struct TYPE_8__ {float* border; float* padding; float x; float y; float w; float b; struct TYPE_8__* next; struct TYPE_8__* down; scalar_t__ list_item; TYPE_1__* style; } ;
typedef TYPE_2__ fz_html_box ;
typedef int fz_device ;
typedef int fz_context ;
struct TYPE_7__ {scalar_t__ visibility; int * border_color; int background_color; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*,float,float,int *,int ,int *) ;
 int FUNC_2 (int *,TYPE_2__*,float,float,int *,int ,scalar_t__) ;
 int FUNC_3 (int *,int *,int ,float,int ,float,float,float,float) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(fz_context *VAR_5, fz_html_box *VAR_6, float VAR_7, float VAR_8, fz_device *VAR_9, fz_matrix VAR_10, hb_buffer_t *VAR_11)
{
 float VAR_12, VAR_13, VAR_14, VAR_15;

 float *VAR_16 = VAR_6->border;
 float *VAR_17 = VAR_6->padding;

 FUNC_0(FUNC_4(VAR_6));
 VAR_12 = VAR_6->x - VAR_17[VAR_1];
 VAR_13 = VAR_6->y - VAR_17[VAR_3];
 VAR_14 = VAR_6->x + VAR_6->w + VAR_17[VAR_2];
 VAR_15 = VAR_6->b + VAR_17[VAR_0];

 if (VAR_13 > VAR_8 || VAR_15 < VAR_7)
  return;

 if (VAR_6->style->visibility == VAR_4)
 {
  FUNC_3(VAR_5, VAR_9, VAR_10, VAR_7, VAR_6->style->background_color, VAR_12, VAR_13, VAR_14, VAR_15);

  if (VAR_16[VAR_3] > 0)
   FUNC_3(VAR_5, VAR_9, VAR_10, VAR_7, VAR_6->style->border_color[VAR_3], VAR_12 - VAR_16[VAR_1], VAR_13 - VAR_16[VAR_3], VAR_14 + VAR_16[VAR_2], VAR_13);
  if (VAR_16[VAR_0] > 0)
   FUNC_3(VAR_5, VAR_9, VAR_10, VAR_7, VAR_6->style->border_color[VAR_0], VAR_12 - VAR_16[VAR_1], VAR_15, VAR_14 + VAR_16[VAR_2], VAR_15 + VAR_16[VAR_0]);
  if (VAR_16[VAR_1] > 0)
   FUNC_3(VAR_5, VAR_9, VAR_10, VAR_7, VAR_6->style->border_color[VAR_1], VAR_12 - VAR_16[VAR_1], VAR_13 - VAR_16[VAR_3], VAR_12, VAR_15 + VAR_16[VAR_0]);
  if (VAR_16[VAR_2] > 0)
   FUNC_3(VAR_5, VAR_9, VAR_10, VAR_7, VAR_6->style->border_color[VAR_2], VAR_14, VAR_13 - VAR_16[VAR_3], VAR_14 + VAR_16[VAR_2], VAR_15 + VAR_16[VAR_0]);

  if (VAR_6->list_item)
   FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_6->list_item);
 }

 for (VAR_6 = VAR_6->down; VAR_6; VAR_6 = VAR_6->next)
  FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}
