
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WCHAR ;
struct TYPE_13__ {int cy; } ;
struct TYPE_12__ {int hInstance; TYPE_6__ spaceSize; scalar_t__ hfont; int hmdiclient; } ;
struct TYPE_11__ {int lStructSize; int Flags; int nSizeMax; scalar_t__ nSizeMin; int nFontType; int * lpszStyle; int hInstance; int * lpTemplateName; int * lpfnHook; scalar_t__ lCustData; int rgbColors; int * lpLogFont; int * hDC; scalar_t__ hwndOwner; } ;
struct TYPE_9__ {int hwnd; } ;
struct TYPE_8__ {int hwnd; } ;
struct TYPE_10__ {TYPE_2__ right; TYPE_1__ left; } ;
typedef int LOGFONTW ;
typedef scalar_t__ HWND ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef TYPE_3__ ChildWnd ;
typedef TYPE_4__ CHOOSEFONTW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int,int *) ;
 int FUNC_7 (int ,int ,int,TYPE_6__*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 TYPE_5__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_10 (int ,int *,int ) ;
 int VAR_14 ;
 int FUNC_11 (int ,int ,int *,int) ;
 int VAR_15 ;
 int FUNC_12 (scalar_t__,int *,int *,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (scalar_t__,int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int ,int ,int,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_17 (int ,scalar_t__) ;
 int VAR_19 ;

__attribute__((used)) static inline void FUNC_18(HWND VAR_20)
{
        WCHAR VAR_21[VAR_0], VAR_22[VAR_0];
        CHOOSEFONTW VAR_23;
        LOGFONTW VAR_24;

        HDC VAR_25 = FUNC_4(VAR_20);

        FUNC_6(VAR_10.hfont, sizeof(LOGFONTW), &VAR_24);

        VAR_23.lStructSize = sizeof(CHOOSEFONTW);
        VAR_23.hwndOwner = VAR_20;
        VAR_23.hDC = ((void*)0);
        VAR_23.lpLogFont = &VAR_24;
        VAR_23.Flags = VAR_6 | VAR_1 | VAR_3 | VAR_4 | VAR_2 | VAR_5;
        VAR_23.rgbColors = FUNC_13(0,0,0);
        VAR_23.lCustData = 0;
        VAR_23.lpfnHook = ((void*)0);
        VAR_23.lpTemplateName = ((void*)0);
        VAR_23.hInstance = VAR_10.hInstance;
        VAR_23.lpszStyle = ((void*)0);
        VAR_23.nFontType = VAR_16;
        VAR_23.nSizeMin = 0;
        VAR_23.nSizeMax = 24;

        if (FUNC_0(&VAR_23)) {
                HWND VAR_26;
                HFONT VAR_27;

                FUNC_3(VAR_10.hfont);
                VAR_10.hfont = FUNC_2(&VAR_24);
                VAR_27 = FUNC_15(VAR_25, VAR_10.hfont);
                FUNC_7(VAR_25, VAR_19, 1, &VAR_10.spaceSize);


                for(VAR_26=FUNC_8(VAR_10.hmdiclient,VAR_8); VAR_26; VAR_26=FUNC_5(VAR_26,VAR_9)) {
                        ChildWnd* VAR_28 = (ChildWnd*) FUNC_9(VAR_26, VAR_7);
                        FUNC_16(VAR_28->left.hwnd, VAR_18, (WPARAM)VAR_10.hfont, VAR_17);
                        FUNC_16(VAR_28->right.hwnd, VAR_18, (WPARAM)VAR_10.hfont, VAR_17);
                        FUNC_16(VAR_28->left.hwnd, VAR_14, 1, FUNC_17(VAR_10.spaceSize.cy,VAR_13+3));
                        FUNC_16(VAR_28->right.hwnd, VAR_14, 1, FUNC_17(VAR_10.spaceSize.cy,VAR_13+3));
                        FUNC_10(VAR_28->left.hwnd, ((void*)0), VAR_17);
                        FUNC_10(VAR_28->right.hwnd, ((void*)0), VAR_17);
                }

                FUNC_15(VAR_25, VAR_27);
        }
        else if (FUNC_1()) {
                FUNC_11(VAR_10.hInstance, VAR_11, VAR_21, VAR_0);
                FUNC_11(VAR_10.hInstance, VAR_12, VAR_22, VAR_0);
                FUNC_12(VAR_20, VAR_22, VAR_21, VAR_15);
        }

        FUNC_14(VAR_20, VAR_25);
}
