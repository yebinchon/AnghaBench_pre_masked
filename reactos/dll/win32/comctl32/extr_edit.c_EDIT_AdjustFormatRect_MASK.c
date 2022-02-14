
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_13__ {scalar_t__ char_width; int style; scalar_t__ line_height; scalar_t__ text_width; scalar_t__ x_offset; scalar_t__ line_count; scalar_t__ y_offset; int flags; int selection_end; TYPE_1__ format_rect; int hwndSelf; } ;
struct TYPE_12__ {int bottom; } ;
typedef TYPE_2__ RECT ;
typedef scalar_t__ INT ;
typedef TYPE_3__ EDITSTATE ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_8(EDITSTATE *VAR_3)
{
 RECT VAR_4;

 VAR_3->format_rect.right = FUNC_6(VAR_3->format_rect.right, VAR_3->format_rect.left + VAR_3->char_width);
 if (VAR_3->style & VAR_2)
 {
     INT VAR_5, VAR_6, VAR_7, VAR_8;

     VAR_6 = FUNC_5(VAR_3);
     VAR_3->format_rect.bottom = VAR_3->format_rect.top + VAR_6 * VAR_3->line_height;


     VAR_5 = VAR_3->format_rect.right - VAR_3->format_rect.left;
     VAR_7 = VAR_3->text_width - VAR_5;
     if(VAR_7 < 0) VAR_7 = 0;
     if(VAR_3->x_offset > VAR_7)
  VAR_3->x_offset = VAR_7;


     VAR_8 = VAR_3->line_count - VAR_6;
     if(VAR_8 < 0) VAR_8 = 0;
     if(VAR_3->y_offset > VAR_8)
  VAR_3->y_offset = VAR_8;


     FUNC_2(VAR_3);
 }
 else

  VAR_3->format_rect.bottom = VAR_3->format_rect.top + VAR_3->line_height;


 FUNC_3(VAR_3->hwndSelf, &VAR_4);
 VAR_3->format_rect.bottom = FUNC_7(VAR_3->format_rect.bottom, VAR_4.bottom);

 if ((VAR_3->style & VAR_2) && !(VAR_3->style & VAR_1))
  FUNC_0(VAR_3, 0, FUNC_4(VAR_3), 0, ((void*)0));

 FUNC_1(VAR_3, VAR_3->selection_end, VAR_3->flags & VAR_0);
}
