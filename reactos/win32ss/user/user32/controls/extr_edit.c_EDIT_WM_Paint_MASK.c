
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ left; scalar_t__ top; scalar_t__ right; scalar_t__ bottom; } ;
struct TYPE_20__ {int flags; int style; scalar_t__ y_offset; scalar_t__ line_count; int hwndSelf; scalar_t__ font; scalar_t__ bEnableState; TYPE_1__ format_rect; } ;
struct TYPE_19__ {scalar_t__ left; scalar_t__ top; scalar_t__ right; scalar_t__ bottom; } ;
typedef TYPE_2__ RECT ;
typedef int PAINTSTRUCT ;
typedef scalar_t__ INT ;
typedef scalar_t__ HFONT ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBRUSH ;
typedef TYPE_3__ EDITSTATE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int ,int,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (scalar_t__,TYPE_2__*,scalar_t__) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (scalar_t__,TYPE_2__*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_18 (TYPE_3__*) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_21(EDITSTATE *VAR_11, HDC VAR_12)
{
 PAINTSTRUCT VAR_13;
 INT VAR_14;
 HDC VAR_15;
 HFONT VAR_16 = 0;
 RECT VAR_17;
 RECT VAR_18;
 RECT VAR_19;
 RECT VAR_20;
 HBRUSH VAR_21;
 HBRUSH VAR_22;
 INT VAR_23, VAR_24;
 BOOL VAR_25 = VAR_11->bEnableState &&
    ((VAR_11->flags & VAR_2) ||
     (VAR_11->style & VAR_4));
        VAR_15 = VAR_12 ? VAR_12 : FUNC_0(VAR_11->hwndSelf, &VAR_13);



 FUNC_2(VAR_11);
 FUNC_8(VAR_11->hwndSelf, &VAR_18);


 VAR_21 = FUNC_3(VAR_11, VAR_15);


 FUNC_13(VAR_15, VAR_18.left, VAR_18.top, VAR_18.right, VAR_18.bottom);

 if(VAR_11->style & VAR_8) {
  VAR_23 = FUNC_12(VAR_6);
  VAR_24 = FUNC_12(VAR_7);
  VAR_17 = VAR_18;
  if(VAR_11->style & VAR_3) {
   if(VAR_11->style & VAR_9) VAR_17.bottom+=VAR_24;
   if(VAR_11->style & VAR_10) VAR_17.right+=VAR_23;
  }


  VAR_22 = FUNC_16(VAR_15, FUNC_11(VAR_1));
  FUNC_15(VAR_15, VAR_17.left, VAR_17.top, VAR_17.right - VAR_17.left, VAR_24, VAR_5);
  FUNC_15(VAR_15, VAR_17.left, VAR_17.top, VAR_23, VAR_17.bottom - VAR_17.top, VAR_5);
  FUNC_15(VAR_15, VAR_17.left, VAR_17.bottom - 1, VAR_17.right - VAR_17.left, -VAR_23, VAR_5);
  FUNC_15(VAR_15, VAR_17.right - 1, VAR_17.top, -VAR_23, VAR_17.bottom - VAR_17.top, VAR_5);
  FUNC_16(VAR_15, VAR_22);


  FUNC_13(VAR_15, VAR_17.left+VAR_23, VAR_17.top+VAR_24,
      FUNC_19(VAR_17.right-VAR_23, VAR_17.left+VAR_23), FUNC_19(VAR_17.bottom-VAR_24, VAR_17.top+VAR_24));
 }

 FUNC_9(VAR_15, &VAR_17);
 FUNC_7(VAR_15, &VAR_17, VAR_21);

 FUNC_13(VAR_15, VAR_11->format_rect.left,
    VAR_11->format_rect.top,
    VAR_11->format_rect.right,
    VAR_11->format_rect.bottom);
 if (VAR_11->style & VAR_3) {
  VAR_17 = VAR_18;
  FUNC_13(VAR_15, VAR_17.left, VAR_17.top, VAR_17.right, VAR_17.bottom);
 }
 if (VAR_11->font)
  VAR_16 = FUNC_16(VAR_15, VAR_11->font);

 if (!VAR_11->bEnableState)
  FUNC_17(VAR_15, FUNC_10(VAR_0));
 FUNC_9(VAR_15, &VAR_20);
 if (VAR_11->style & VAR_3) {
  INT VAR_26 = FUNC_18(VAR_11);
  for (VAR_14 = VAR_11->y_offset ; VAR_14 <= FUNC_20(VAR_11->y_offset + VAR_26, VAR_11->y_offset + VAR_11->line_count - 1) ; VAR_14++) {
   FUNC_5(VAR_11, VAR_15, VAR_14);
   FUNC_1(VAR_11, VAR_14, 0, -1, &VAR_19);
   if (FUNC_14(&VAR_17, &VAR_20, &VAR_19))
    FUNC_4(VAR_11, VAR_15, VAR_14, VAR_25);
  }
 } else {
  FUNC_5(VAR_11, VAR_15, 0);
  FUNC_1(VAR_11, 0, 0, -1, &VAR_19);
  if (FUNC_14(&VAR_17, &VAR_20, &VAR_19))
   FUNC_4(VAR_11, VAR_15, 0, VAR_25);
 }
 if (VAR_11->font)
  FUNC_16(VAR_15, VAR_16);

        if (!VAR_12)
            FUNC_6(VAR_11->hwndSelf, &VAR_13);
}
