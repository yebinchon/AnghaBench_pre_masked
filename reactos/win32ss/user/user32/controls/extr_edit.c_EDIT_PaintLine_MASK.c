
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int right; int left; } ;
struct TYPE_12__ {int style; scalar_t__ y_offset; scalar_t__ line_count; scalar_t__ x_offset; scalar_t__ selection_start; scalar_t__ selection_end; int flags; TYPE_4__ format_rect; TYPE_1__* first_line_def; } ;
struct TYPE_11__ {int width; struct TYPE_11__* next; } ;
typedef scalar_t__ SCRIPT_STRING_ANALYSIS ;
typedef int LRESULT ;
typedef TYPE_1__ LINEDEF ;
typedef scalar_t__ INT ;
typedef int HDC ;
typedef TYPE_2__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,int ,TYPE_4__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (char*,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_12(EDITSTATE *VAR_7, HDC VAR_8, INT VAR_9, BOOL VAR_10)
{
 INT VAR_11 = 0;
 INT VAR_12 = 0;
 INT VAR_13 = 0;
 INT VAR_14 = 0;
 INT VAR_15;
 INT VAR_16;
 LRESULT VAR_17;
 SCRIPT_STRING_ANALYSIS VAR_18;

 if (VAR_7->style & VAR_2) {
  INT VAR_19 = FUNC_9(VAR_7);

  if ((VAR_9 < VAR_7->y_offset) || (VAR_9 > VAR_7->y_offset + VAR_19) || (VAR_9 >= VAR_7->line_count))
   return;
 } else if (VAR_9)
  return;

 FUNC_8("line=%d\n", VAR_9);

 VAR_18 = FUNC_4(VAR_7, VAR_8, VAR_9);
 VAR_17 = FUNC_2(VAR_7, FUNC_0(VAR_7, VAR_9), VAR_5);
 VAR_15 = (short)FUNC_6(VAR_17);
 VAR_16 = (short)FUNC_5(VAR_17);

 if (VAR_7->style & VAR_2)
 {
  int VAR_20 = VAR_9;
  VAR_15 = -VAR_7->x_offset;
  if (VAR_7->style & VAR_4 || VAR_7->style & VAR_1)
  {
   LINEDEF *VAR_21 = VAR_7->first_line_def;
   int VAR_22, VAR_23;

   while (VAR_21 && VAR_20)
   {
    VAR_21 = VAR_21->next;
    VAR_20--;
   }
   VAR_22 = VAR_7->format_rect.right - VAR_7->format_rect.left;
   VAR_23 = VAR_21->width;

   if (VAR_7->style & VAR_4)
    VAR_15 = VAR_22 - (VAR_23 - VAR_15);
   else if (VAR_7->style & VAR_1)
    VAR_15 += (VAR_22 - VAR_23) / 2;
  }
  VAR_15 += VAR_7->format_rect.left;
 }

 if (VAR_10)
 {
  VAR_13 = FUNC_0(VAR_7, VAR_9);
  VAR_14 = FUNC_1(VAR_7, VAR_13);
  VAR_11 = FUNC_11(VAR_7->selection_start, VAR_7->selection_end);
  VAR_12 = FUNC_10(VAR_7->selection_start, VAR_7->selection_end);
  VAR_11 = FUNC_11(VAR_13 + VAR_14, FUNC_10(VAR_13, VAR_11));
  VAR_12 = FUNC_11(VAR_13 + VAR_14, FUNC_10(VAR_13, VAR_12));
 }

 if (VAR_18)
  FUNC_7(VAR_18, VAR_15, VAR_16, 0, &VAR_7->format_rect, VAR_11 - VAR_13, VAR_12 - VAR_13, VAR_5);
 else if (VAR_10 && (VAR_11 != VAR_12) &&
   ((VAR_7->flags & VAR_0) || (VAR_7->style & VAR_3))) {
  VAR_15 += FUNC_3(VAR_7, VAR_8, VAR_15, VAR_16, VAR_9, 0, VAR_11 - VAR_13, VAR_5);
  VAR_15 += FUNC_3(VAR_7, VAR_8, VAR_15, VAR_16, VAR_9, VAR_11 - VAR_13, VAR_12 - VAR_11, VAR_6);
  VAR_15 += FUNC_3(VAR_7, VAR_8, VAR_15, VAR_16, VAR_9, VAR_12 - VAR_13, VAR_13 + VAR_14 - VAR_12, VAR_5);
 } else
  VAR_15 += FUNC_3(VAR_7, VAR_8, VAR_15, VAR_16, VAR_9, 0, VAR_14, VAR_5);
}
