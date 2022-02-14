
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ right; scalar_t__ left; scalar_t__ top; } ;
struct TYPE_14__ {int style; scalar_t__ y_offset; scalar_t__ line_height; scalar_t__ x_offset; int char_width; scalar_t__ text_width; TYPE_1__ format_rect; scalar_t__ ssa; TYPE_3__* first_line_def; } ;
struct TYPE_13__ {scalar_t__ ending; scalar_t__ index; scalar_t__ width; scalar_t__ ssa; struct TYPE_13__* next; } ;
struct TYPE_12__ {scalar_t__ cx; } ;
typedef TYPE_2__ SIZE ;
typedef int LRESULT ;
typedef TYPE_3__ LINEDEF ;
typedef int INT16 ;
typedef scalar_t__ INT ;
typedef TYPE_4__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ,scalar_t__*) ;
 TYPE_2__* FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_8(EDITSTATE *VAR_6, INT VAR_7, BOOL VAR_8)
{
 INT VAR_9 = FUNC_6(VAR_6);
 INT VAR_10;
 INT VAR_11;
 INT VAR_12 = 0;
 INT VAR_13 = 0;
 INT VAR_14;
 INT VAR_15;
 LINEDEF *VAR_16;

 VAR_7 = FUNC_7(VAR_7, VAR_9);
 if (VAR_6->style & VAR_2) {
  VAR_10 = FUNC_0(VAR_6, VAR_7);
  FUNC_2(VAR_6, ((void*)0), VAR_10);

  VAR_13 = (VAR_10 - VAR_6->y_offset) * VAR_6->line_height;
  VAR_11 = FUNC_1(VAR_6, VAR_10);
  if (VAR_8 && (VAR_11 == VAR_7) && VAR_10) {
   INT VAR_17 = VAR_10 - 1;
   VAR_16 = VAR_6->first_line_def;
   while (VAR_17) {
    VAR_16 = VAR_16->next;
    VAR_17--;
   }
   if (VAR_16->ending == VAR_0) {
    VAR_10--;
    VAR_13 -= VAR_6->line_height;
    VAR_11 = FUNC_1(VAR_6, VAR_10);
   }
  }

  VAR_16 = VAR_6->first_line_def;
  while (VAR_16->index != VAR_11)
   VAR_16 = VAR_16->next;

  VAR_15 = VAR_16->width;
  VAR_14 = VAR_6->format_rect.right - VAR_6->format_rect.left;
  if (VAR_16->ssa)
  {
   FUNC_4(VAR_16->ssa, (VAR_7 - 1) - VAR_11, VAR_5, &VAR_12);
   VAR_12 -= VAR_6->x_offset;
  }
  else



   VAR_12 = VAR_6->x_offset;


  if (VAR_6->style & VAR_3)
   VAR_12 = VAR_14 - (VAR_15 - VAR_12);
  else if (VAR_6->style & VAR_1)
   VAR_12 += (VAR_14 - VAR_15) / 2;
 } else {
  INT VAR_18 = 0;
  INT VAR_19 = 0;
  FUNC_2(VAR_6, ((void*)0), 0);
  if (VAR_6->x_offset)
  {
   if (VAR_6->ssa)
   {
    if (VAR_6->x_offset >= FUNC_6(VAR_6))
    {
     int VAR_20 = VAR_6->x_offset - FUNC_6(VAR_6);
     if (VAR_6->ssa)
     {
      const SIZE *VAR_21;
      VAR_21 = FUNC_5(VAR_6->ssa);
      VAR_18 = VAR_21->cx;
     }
     else
      VAR_18 = 0;
     VAR_18 += VAR_6->char_width * VAR_20;
    }
    else
     FUNC_4(VAR_6->ssa, VAR_6->x_offset, VAR_4, &VAR_18);
   }
   else
    VAR_18 = 0;
  }
  if (VAR_7)
  {
   if (VAR_7 >= FUNC_6(VAR_6))
   {
    if (VAR_6->ssa)
    {
     const SIZE *VAR_22;
     VAR_22 = FUNC_5(VAR_6->ssa);
     VAR_19 = VAR_22->cx;
    }
    else
     VAR_19 = 0;
   }
   else if (VAR_6->ssa)
    FUNC_4(VAR_6->ssa, VAR_7, VAR_4, &VAR_19);
   else
    VAR_19 = 0;
  }
  VAR_12 = VAR_19 - VAR_18;

  if (VAR_7 >= VAR_6->x_offset) {
   if (!VAR_6->x_offset && (VAR_6->style & (VAR_3 | VAR_1)))
   {
    VAR_14 = VAR_6->format_rect.right - VAR_6->format_rect.left;
    if (VAR_14 > VAR_6->text_width)
    {
     if (VAR_6->style & VAR_3)
      VAR_12 += VAR_14 - VAR_6->text_width;
     else if (VAR_6->style & VAR_1)
      VAR_12 += (VAR_14 - VAR_6->text_width) / 2;
    }
   }
  }
  VAR_13 = 0;
 }
 VAR_12 += VAR_6->format_rect.left;
 VAR_13 += VAR_6->format_rect.top;
 return FUNC_3((INT16)VAR_12, (INT16)VAR_13);
}
