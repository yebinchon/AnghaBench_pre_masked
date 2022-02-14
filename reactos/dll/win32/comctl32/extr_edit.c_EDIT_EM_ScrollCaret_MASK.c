
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ right; scalar_t__ left; } ;
struct TYPE_12__ {int style; scalar_t__ char_width; scalar_t__ selection_end; int flags; scalar_t__ y_offset; scalar_t__ line_count; scalar_t__ x_offset; scalar_t__ text_width; TYPE_1__ format_rect; } ;
typedef scalar_t__ INT ;
typedef TYPE_2__ EDITSTATE ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(EDITSTATE *VAR_6)
{
 if (VAR_6->style & VAR_2) {
  INT VAR_7;
  INT VAR_8;
  INT VAR_9;
  INT VAR_10 = VAR_6->char_width;
  INT VAR_11;
  INT VAR_12 = 0;
  INT VAR_13 = 0;

  VAR_7 = FUNC_0(VAR_6, VAR_6->selection_end);
  VAR_11 = (short)FUNC_5(FUNC_2(VAR_6, VAR_6->selection_end, VAR_6->flags & VAR_0));
  VAR_8 = FUNC_7(VAR_6);
  if (VAR_7 >= VAR_6->y_offset + VAR_8)
   VAR_12 = VAR_7 - VAR_8 + 1 - VAR_6->y_offset;
  if (VAR_7 < VAR_6->y_offset)
   VAR_12 = VAR_7 - VAR_6->y_offset;
  VAR_9 = VAR_6->format_rect.right - VAR_6->format_rect.left;
  if (VAR_11 < VAR_6->format_rect.left)
   VAR_13 = VAR_11 - VAR_6->format_rect.left - VAR_9 / VAR_4 / VAR_10 * VAR_10;
  if (VAR_11 > VAR_6->format_rect.right)
   VAR_13 = VAR_11 - VAR_6->format_rect.left - (VAR_4 - 1) * VAR_9 / VAR_4 / VAR_10 * VAR_10;
  if (VAR_12 || VAR_13 || (VAR_6->y_offset && (VAR_6->line_count - VAR_6->y_offset < VAR_8)))
  {

      if(VAR_6->x_offset + VAR_13 + VAR_9 > VAR_6->text_width)
   VAR_13 = VAR_6->text_width - VAR_9 - VAR_6->x_offset;
      if(VAR_13 || VAR_12 || (VAR_6->y_offset && (VAR_6->line_count - VAR_6->y_offset < VAR_8)))
   FUNC_1(VAR_6, VAR_13, VAR_12);
  }
 } else {
  INT VAR_14;
  INT VAR_15;
  INT VAR_16;

  VAR_14 = (short)FUNC_5(FUNC_2(VAR_6, VAR_6->selection_end, VAR_3));
  VAR_16 = VAR_6->format_rect.right - VAR_6->format_rect.left;
  if (VAR_14 < VAR_6->format_rect.left) {
   VAR_15 = VAR_6->format_rect.left + VAR_16 / VAR_4;
   do {
    VAR_6->x_offset--;
    VAR_14 = (short)FUNC_5(FUNC_2(VAR_6, VAR_6->selection_end, VAR_3));
   } while ((VAR_14 < VAR_15) && VAR_6->x_offset);

   FUNC_4(VAR_6, ((void*)0), VAR_5);
  } else if (VAR_14 > VAR_6->format_rect.right) {
   INT VAR_17;
   INT VAR_18 = FUNC_6(VAR_6);
   VAR_15 = VAR_6->format_rect.right - VAR_16 / VAR_4;
   do {
    VAR_6->x_offset++;
    VAR_14 = (short)FUNC_5(FUNC_2(VAR_6, VAR_6->selection_end, VAR_3));
    VAR_17 = (short)FUNC_5(FUNC_2(VAR_6, VAR_18, VAR_3));
   } while ((VAR_14 > VAR_15) && (VAR_17 > VAR_6->format_rect.right));

   FUNC_4(VAR_6, ((void*)0), VAR_5);
  }
 }

    if(VAR_6->flags & VAR_1)
 FUNC_3(VAR_6, VAR_6->selection_end, VAR_6->flags & VAR_0);
}
