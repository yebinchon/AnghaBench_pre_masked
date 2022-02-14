
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int mylogfont ;
typedef int WPARAM ;
typedef int WCHAR ;
struct TYPE_13__ {int selected; int NtfUnicode; scalar_t__ hwndCombo; scalar_t__ hwndEdit; void* font; void* defaultFont; scalar_t__ hwndNotify; int unicode; scalar_t__ hwndSelf; } ;
struct TYPE_12__ {int style; int cy; int cx; int x; int y; scalar_t__ hwndParent; } ;
struct TYPE_11__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int LRESULT ;
typedef int LOGFONTW ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;
typedef int HMENU ;
typedef int HINSTANCE ;
typedef void* HFONT ;
typedef int DWORD_PTR ;
typedef TYPE_2__ CREATESTRUCTA ;
typedef TYPE_3__ COMBOEX_INFO ;


 TYPE_3__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_6 ;
 void* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int const*,int,int ,int ,int ,int ,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int const*,int,int ,int ,int ,int ,scalar_t__,int ,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int ,int ) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_14 (scalar_t__,int ,int ,int ) ;
 int FUNC_15 (int ,int,int *,int ) ;
 int FUNC_16 (char*,int ,...) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (char*,scalar_t__) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_19 (TYPE_1__*) ;

__attribute__((used)) static LRESULT FUNC_20 (HWND VAR_34, CREATESTRUCTA const *VAR_35)
{
    static const WCHAR VAR_36[] = { 0 };
    COMBOEX_INFO *VAR_37;
    LOGFONTW VAR_38;
    RECT VAR_39;
    INT VAR_40;


    VAR_37 = FUNC_0 (sizeof(COMBOEX_INFO));
    if (!VAR_37) return -1;




    VAR_37->hwndSelf = VAR_34;
    VAR_37->selected = -1;

    VAR_37->unicode = FUNC_10 (VAR_34);
    VAR_37->hwndNotify = VAR_35->hwndParent;

    VAR_40 = FUNC_11(VAR_37->hwndNotify, VAR_26, (WPARAM)VAR_34, VAR_17);
    if ((VAR_40 != VAR_15) && (VAR_40 != VAR_16)) {
 FUNC_18("wrong response to WM_NOTIFYFORMAT (%d), assuming ANSI\n", VAR_40);
 VAR_40 = VAR_15;
    }
    VAR_37->NtfUnicode = (VAR_40 == VAR_16);

    FUNC_12 (VAR_34, 0, (DWORD_PTR)VAR_37);

    if (FUNC_17(VAR_33)) {
 RECT VAR_41, VAR_42;
 FUNC_9(VAR_34, &VAR_42);
 FUNC_6(VAR_34, &VAR_41);
 FUNC_16("EX window=(%s), client=(%s)\n",
  FUNC_19(&VAR_42), FUNC_19(&VAR_41));
    }
    VAR_37->hwndCombo = FUNC_5 (VAR_23, VAR_36,
                         VAR_30 | VAR_29 | VAR_32 |
                         VAR_2 | VAR_1 |
    VAR_28 | VAR_31 | VAR_3 |
    FUNC_8 (VAR_34, VAR_13),
    VAR_35->y, VAR_35->x, VAR_35->cx, VAR_35->cy, VAR_34,
    (HMENU) FUNC_7 (VAR_34, VAR_12),
    (HINSTANCE)FUNC_7 (VAR_34, VAR_11), ((void*)0));

    FUNC_14(VAR_37->hwndCombo, VAR_4, VAR_6,
                      (DWORD_PTR)VAR_34);
    VAR_37->font = (HFONT)FUNC_11 (VAR_37->hwndCombo, VAR_25, 0, 0);





    if ((VAR_35->style & VAR_1) == VAR_0) {
 VAR_37->hwndEdit = FUNC_4 (0, VAR_24, VAR_36,
      VAR_28 | VAR_31 | VAR_30 | VAR_10,
      0, 0, 0, 0,
      VAR_37->hwndCombo,
      (HMENU) FUNC_7 (VAR_34, VAR_12),
      (HINSTANCE)FUNC_7 (VAR_34, VAR_11), ((void*)0));

 FUNC_14(VAR_37->hwndEdit, VAR_5, VAR_8,
                   (DWORD_PTR)VAR_34);

 VAR_37->font = (HFONT)FUNC_11(VAR_37->hwndCombo, VAR_25, 0, 0);
    }





    if (!VAR_37->font) {
 FUNC_15 (VAR_18, sizeof(VAR_38),
          &VAR_38, 0);
 VAR_37->font = VAR_37->defaultFont = FUNC_3 (&VAR_38);
    }
    FUNC_11 (VAR_37->hwndCombo, VAR_27, (WPARAM)VAR_37->font, 0);
    if (VAR_37->hwndEdit) {
 FUNC_11 (VAR_37->hwndEdit, VAR_27, (WPARAM)VAR_37->font, 0);
       FUNC_11 (VAR_37->hwndEdit, VAR_9, VAR_7, 0);
    }

    FUNC_2 (VAR_37);



    FUNC_9(VAR_34, &VAR_39);

    if (FUNC_17(VAR_33)) {
 RECT VAR_43, VAR_44;
 FUNC_6(VAR_34, &VAR_43);
 FUNC_9(VAR_37->hwndCombo, &VAR_44);
 FUNC_16("EX window=(%s) client=(%s) CB wnd=(%s)\n",
  FUNC_19(&VAR_39), FUNC_19(&VAR_43),
  FUNC_19(&VAR_44));
    }
    FUNC_13(VAR_37->hwndCombo, VAR_14, 0, 0,
   VAR_39.right - VAR_39.left, VAR_39.bottom - VAR_39.top,
   VAR_19 | VAR_21);

    FUNC_9(VAR_37->hwndCombo, &VAR_39);
    FUNC_16("CB window=(%s)\n", FUNC_19(&VAR_39));
    FUNC_13(VAR_34, VAR_14, 0, 0,
   VAR_39.right - VAR_39.left, VAR_39.bottom - VAR_39.top,
   VAR_19 | VAR_22 | VAR_20);

    FUNC_1 (VAR_37);

    return 0;
}
