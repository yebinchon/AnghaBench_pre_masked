
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ top; scalar_t__ left; int right; } ;
struct TYPE_12__ {int style; scalar_t__ line_height; scalar_t__ y_offset; scalar_t__ x_offset; scalar_t__ text_width; scalar_t__ ssa; TYPE_1__ format_rect; TYPE_3__* first_line_def; } ;
struct TYPE_11__ {scalar_t__ length; int width; scalar_t__ ending; scalar_t__ net_length; scalar_t__ ssa; struct TYPE_11__* next; } ;
struct TYPE_10__ {scalar_t__ cx; } ;
typedef TYPE_2__ SIZE ;
typedef int* LPBOOL ;
typedef TYPE_3__ LINEDEF ;
typedef scalar_t__ INT ;
typedef TYPE_4__ EDITSTATE ;


 int FUNC_0 (TYPE_4__*,int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__,int,scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__*,...) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static INT FUNC_5(EDITSTATE *VAR_5, INT VAR_6, INT VAR_7, LPBOOL VAR_8)
{
 INT VAR_9;

 if (VAR_5->style & VAR_2) {
  int VAR_10;
  INT VAR_11 = (VAR_7 - VAR_5->format_rect.top) / VAR_5->line_height + VAR_5->y_offset;
  INT VAR_12 = 0;
  LINEDEF *VAR_13 = VAR_5->first_line_def;
  FUNC_0(VAR_5, ((void*)0), VAR_11);
  while ((VAR_11 > 0) && VAR_13->next) {
   VAR_12 += VAR_13->length;
   VAR_13 = VAR_13->next;
   VAR_11--;
  }

  VAR_6 += VAR_5->x_offset - VAR_5->format_rect.left;
  if (VAR_5->style & VAR_3)
   VAR_6 -= (VAR_5->format_rect.right - VAR_5->format_rect.left) - VAR_13->width;
  else if (VAR_5->style & VAR_1)
   VAR_6 -= ((VAR_5->format_rect.right - VAR_5->format_rect.left) - VAR_13->width) / 2;
  if (VAR_6 >= VAR_13->width) {
   if (VAR_8)
    *VAR_8 = (VAR_13->ending == VAR_0);
   return VAR_12 + VAR_13->net_length;
  }
  if (VAR_6 <= 0 || !VAR_13->ssa) {
   if (VAR_8)
    *VAR_8 = VAR_4;
   return VAR_12;
  }

  FUNC_2(VAR_13->ssa, VAR_6 , &VAR_9, &VAR_10);
  if (VAR_10) VAR_9++;
  VAR_9 += VAR_12;
  if (VAR_8)
   *VAR_8 = ((VAR_9 == VAR_12 + VAR_13->net_length) &&
       (VAR_13->ending == VAR_0));
 } else {
  INT VAR_14 = 0;
  INT VAR_15;
  if (VAR_8)
   *VAR_8 = VAR_4;
  VAR_6 -= VAR_5->format_rect.left;
  if (!VAR_6)
   return VAR_5->x_offset;

  if (!VAR_5->x_offset)
  {
   INT VAR_16 = (VAR_5->format_rect.right - VAR_5->format_rect.left) - VAR_5->text_width;
   if (VAR_5->style & VAR_3)
    VAR_6 -= VAR_16;
   else if (VAR_5->style & VAR_1)
    VAR_6 -= VAR_16 / 2;
  }

  FUNC_0(VAR_5, ((void*)0), 0);
  if (VAR_5->x_offset)
  {
   if (VAR_5->ssa)
   {
    if (VAR_5->x_offset>= FUNC_4(VAR_5))
    {
     const SIZE *VAR_17;
     VAR_17 = FUNC_3(VAR_5->ssa);
     VAR_14 = VAR_17->cx;
    }
    FUNC_1(VAR_5->ssa, VAR_5->x_offset, VAR_4, &VAR_14);
   }
   else
    VAR_14 = 0;
  }
  if (VAR_6 < 0)
  {
   if (VAR_6 + VAR_14 > 0 || !VAR_5->ssa)
   {
    FUNC_2(VAR_5->ssa, VAR_6+VAR_14, &VAR_9, &VAR_15);
    if (VAR_15) VAR_9++;
   }
   else
    VAR_9 = 0;
  }
  else
  {
   if (VAR_6)
   {
    const SIZE *VAR_18 = ((void*)0);
    if (VAR_5->ssa)
     VAR_18 = FUNC_3(VAR_5->ssa);
    if (!VAR_18)
     VAR_9 = 0;
    else if (VAR_6 > VAR_18->cx)
     VAR_9 = FUNC_4(VAR_5);
    else if (VAR_5->ssa)
    {
     FUNC_2(VAR_5->ssa, VAR_6+VAR_14, &VAR_9, &VAR_15);
     if (VAR_15) VAR_9++;
    }
    else
     VAR_9 = 0;
   }
   else
    VAR_9 = VAR_5->x_offset;
  }
 }
 return VAR_9;
}
