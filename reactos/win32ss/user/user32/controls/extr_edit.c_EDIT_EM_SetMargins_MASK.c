
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_11__ {int left; int right; } ;
struct TYPE_14__ {int left_margin; int right_margin; TYPE_1__ format_rect; int hwndSelf; scalar_t__ font; } ;
struct TYPE_13__ {int right; int left; } ;
struct TYPE_12__ {int tmPitchAndFamily; int tmCharSet; } ;
typedef TYPE_2__ TEXTMETRICW ;
typedef TYPE_3__ RECT ;
typedef int LONG ;
typedef int INT ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef TYPE_4__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int *,int ) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*,int,int) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(EDITSTATE *VAR_6, INT VAR_7,
          WORD VAR_8, WORD VAR_9, BOOL VAR_10)
{
 TEXTMETRICW VAR_11;
 INT VAR_12 = 0;
 INT VAR_13 = 0;


        if (VAR_6->font && (VAR_8 == VAR_2 || VAR_9 == VAR_2)) {
            HDC VAR_14 = FUNC_4(VAR_6->hwndSelf);
            HFONT VAR_15 = FUNC_7(VAR_14, VAR_6->font);
            LONG VAR_16 = FUNC_2(VAR_14, &VAR_11, ((void*)0));
            RECT VAR_17;


            if (VAR_11.tmPitchAndFamily & ( VAR_4 | VAR_3 )) {
                if (!FUNC_9(VAR_11.tmCharSet)) {
                    VAR_12 = VAR_16 / 2;
                    VAR_13 = VAR_16 / 2;

                    FUNC_3(VAR_6->hwndSelf, &VAR_17);
                    if (VAR_17.right - VAR_17.left < (VAR_16 / 2 + VAR_16) * 2 &&
                        (VAR_16 >= 28 || !FUNC_5(&VAR_17)) ) {
                        VAR_12 = VAR_6->left_margin;
                        VAR_13 = VAR_6->right_margin;
                    }
                } else {

                    VAR_12 = VAR_16 / 2;
                    VAR_13 = VAR_16 / 2;
                }
            }
            FUNC_7(VAR_14, VAR_15);
            FUNC_6(VAR_6->hwndSelf, VAR_14);
        }

 if (VAR_7 & VAR_0) {
  VAR_6->format_rect.left -= VAR_6->left_margin;
  if (VAR_8 != VAR_2)
   VAR_6->left_margin = VAR_8;
  else
   VAR_6->left_margin = VAR_12;
  VAR_6->format_rect.left += VAR_6->left_margin;
 }

 if (VAR_7 & VAR_1) {
  VAR_6->format_rect.right += VAR_6->right_margin;
  if (VAR_9 != VAR_2)
    VAR_6->right_margin = VAR_9;
  else
   VAR_6->right_margin = VAR_13;
  VAR_6->format_rect.right -= VAR_6->right_margin;
 }

 if (VAR_7 & (VAR_0 | VAR_1)) {
  FUNC_0(VAR_6);
  if (VAR_10) FUNC_1(VAR_6, ((void*)0), VAR_5);
 }

 FUNC_8("left=%d, right=%d\n", VAR_6->left_margin, VAR_6->right_margin);
}
