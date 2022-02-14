
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {short left; short right; scalar_t__ top; } ;
struct TYPE_11__ {int style; int y_offset; int line_height; int line_count; int selection_end; TYPE_1__ format_rect; scalar_t__ ssa; TYPE_3__* first_line_def; } ;
struct TYPE_10__ {int length; scalar_t__ ssa; struct TYPE_10__* next; } ;
struct TYPE_9__ {int right; int left; scalar_t__ top; scalar_t__ bottom; } ;
typedef scalar_t__ SCRIPT_STRING_ANALYSIS ;
typedef TYPE_2__* LPRECT ;
typedef TYPE_3__ LINEDEF ;
typedef int INT ;
typedef TYPE_4__ EDITSTATE ;


 int FUNC_0 (TYPE_4__*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int,int ,int*) ;
 int VAR_2 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(EDITSTATE *VAR_3, INT VAR_4, INT VAR_5, INT VAR_6, LPRECT VAR_7)
{
 SCRIPT_STRING_ANALYSIS VAR_8;
 INT VAR_9 = 0;
 INT VAR_10, VAR_11, VAR_12;

 if (VAR_3->style & VAR_0)
 {
  const LINEDEF *VAR_13 = ((void*)0);
  VAR_7->top = VAR_3->format_rect.top + (VAR_4 - VAR_3->y_offset) * VAR_3->line_height;
  if (VAR_4 >= VAR_3->line_count)
   return;

  VAR_13 = VAR_3->first_line_def;
  if (VAR_4 == -1) {
   INT VAR_14 = VAR_3->selection_end - VAR_13->length;
   while ((VAR_14 >= 0) && VAR_13->next) {
    VAR_9 += VAR_13->length;
    VAR_13 = VAR_13->next;
    VAR_14 -= VAR_13->length;
   }
  } else {
   while (VAR_4 > 0) {
    VAR_9 += VAR_13->length;
    VAR_13 = VAR_13->next;
    VAR_4--;
   }
  }
  VAR_8 = VAR_13->ssa;
 }
 else
 {
  VAR_9 = 0;
  VAR_7->top = VAR_3->format_rect.top;
  VAR_8 = VAR_3->ssa;
 }

 VAR_7->bottom = VAR_7->top + VAR_3->line_height;
 VAR_10 = (VAR_5 == 0) ? VAR_3->format_rect.left : (short)FUNC_1(FUNC_0(VAR_3, VAR_9 + VAR_5, VAR_2));
 VAR_11 = (VAR_6 == -1) ? VAR_3->format_rect.right : (short)FUNC_1(FUNC_0(VAR_3, VAR_9 + VAR_6, VAR_2));
 if (VAR_8)
 {
  FUNC_2(VAR_8, VAR_5, VAR_1, &VAR_12);
  VAR_12+=VAR_3->format_rect.left;
 }
 else VAR_12 = VAR_10;
 VAR_7->right = FUNC_3(FUNC_3(VAR_10 , VAR_11),VAR_12);
 VAR_7->left = FUNC_4(FUNC_4(VAR_10, VAR_11),VAR_12);
}
