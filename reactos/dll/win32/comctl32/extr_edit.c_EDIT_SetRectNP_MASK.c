
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_6__ {scalar_t__ line_height; int style; scalar_t__ right_margin; TYPE_2__ format_rect; scalar_t__ left_margin; int hwndSelf; } ;
typedef int RECT ;
typedef int LONG_PTR ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(EDITSTATE *VAR_5, const RECT *VAR_6)
{
 LONG_PTR VAR_7;
 INT VAR_8, VAR_9;
 VAR_7 = FUNC_3(VAR_5->hwndSelf, VAR_0);

 FUNC_0(&VAR_5->format_rect, VAR_6);

 if (VAR_7 & VAR_4) {
  VAR_5->format_rect.left++;
  VAR_5->format_rect.right--;

  if (VAR_5->format_rect.bottom - VAR_5->format_rect.top
      >= VAR_5->line_height + 2)
  {
   VAR_5->format_rect.top++;
   VAR_5->format_rect.bottom--;
  }
 }
 else if (VAR_5->style & VAR_3) {
  VAR_8 = FUNC_2(VAR_1) + 1;
  VAR_9 = FUNC_2(VAR_2) + 1;
                FUNC_4(&VAR_5->format_rect, -VAR_8, 0);
                if (VAR_5->format_rect.bottom - VAR_5->format_rect.top >= VAR_5->line_height + 2 * VAR_9)
                    FUNC_4(&VAR_5->format_rect, 0, -VAR_9);
 }

 VAR_5->format_rect.left += VAR_5->left_margin;
 VAR_5->format_rect.right -= VAR_5->right_margin;
 FUNC_1(VAR_5);
}
