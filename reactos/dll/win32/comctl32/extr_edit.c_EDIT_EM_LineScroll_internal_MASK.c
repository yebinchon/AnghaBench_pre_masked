
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_7__ {scalar_t__ line_height; int style; scalar_t__ x_offset; scalar_t__ text_width; scalar_t__ y_offset; scalar_t__ line_count; scalar_t__ char_width; int flags; int hwndSelf; TYPE_2__ format_rect; } ;
typedef int RECT ;
typedef scalar_t__ INT ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int *,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,int *,int *,int *,int *,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_8(EDITSTATE *VAR_8, INT VAR_9, INT VAR_10)
{
 INT VAR_11;
 INT VAR_12;
 INT VAR_13 = (VAR_8->format_rect.bottom - VAR_8->format_rect.top) /
         VAR_8->line_height;

 if (VAR_8->style & VAR_4)
 {
     VAR_12 = VAR_8->x_offset;
 }
 else
 {
     VAR_10 = 0;
     VAR_12 = (short)FUNC_5(FUNC_0(VAR_8, VAR_8->x_offset, VAR_5));
 }

 if (-VAR_9 > VAR_12)
  VAR_9 = -VAR_12;
 if (VAR_9 > VAR_8->text_width - VAR_12)
  VAR_9 = VAR_8->text_width - VAR_12;
 VAR_11 = FUNC_7(0, VAR_8->y_offset + VAR_10);
 if (VAR_11 >= VAR_8->line_count - VAR_13)
  VAR_11 = FUNC_7(0, VAR_8->line_count - VAR_13);
 VAR_10 = (VAR_8->y_offset - VAR_11) * VAR_8->line_height;
 if (VAR_9 || VAR_10) {
  RECT VAR_14;
  RECT VAR_15;

  VAR_8->y_offset = VAR_11;
  if(VAR_8->style & VAR_4)
      VAR_8->x_offset += VAR_9;
  else
      VAR_8->x_offset += VAR_9 / VAR_8->char_width;

  FUNC_3(VAR_8->hwndSelf, &VAR_14);
  FUNC_4(&VAR_15, &VAR_14, &VAR_8->format_rect);
  FUNC_6(VAR_8->hwndSelf, -VAR_9, VAR_10,
    ((void*)0), &VAR_15, ((void*)0), ((void*)0), VAR_6);

  FUNC_2(VAR_8);
 }
 if (VAR_9 && !(VAR_8->flags & VAR_0))
  FUNC_1(VAR_8, VAR_2);
 if (VAR_10 && !(VAR_8->flags & VAR_1))
  FUNC_1(VAR_8, VAR_3);
 return VAR_7;
}
