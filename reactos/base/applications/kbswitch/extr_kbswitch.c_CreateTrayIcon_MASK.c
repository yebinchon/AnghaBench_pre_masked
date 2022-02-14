
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fIcon; void* hbmMask; void* hbmColor; } ;
struct TYPE_6__ {int right; int bottom; scalar_t__ top; scalar_t__ left; } ;
typedef int TCHAR ;
typedef TYPE_1__ RECT ;
typedef int LPTSTR ;
typedef scalar_t__ LANGID ;
typedef TYPE_2__ ICONINFO ;
typedef int * HICON ;
typedef void* HFONT ;
typedef scalar_t__ HDC ;
typedef void* HBITMAP ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int,int,int,int,int *) ;
 void* FUNC_2 (scalar_t__,int,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int * FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (scalar_t__,int ,int,TYPE_1__*,int) ;
 int VAR_9 ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,int ,TYPE_1__*,int ,int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int *,int ) ;
 int FUNC_12 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (scalar_t__,int ,int ,int,int,int ) ;
 int FUNC_14 (int *,scalar_t__) ;
 void* FUNC_15 (scalar_t__,void*) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (int *,int ,int ) ;
 int VAR_15 ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (int ,int *,int) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static HICON
FUNC_22(LPTSTR VAR_16)
{
    LANGID VAR_17;
    TCHAR VAR_18[3];
    HDC VAR_19, VAR_20;
    HBITMAP VAR_21, VAR_22, VAR_23;
    RECT VAR_24;
    HFONT VAR_25, VAR_26 = ((void*)0);
    ICONINFO VAR_27;
    HICON VAR_28 = ((void*)0);

    VAR_17 = (LANGID)FUNC_20(VAR_16, ((void*)0), 16);
    if (FUNC_11(VAR_17,
                      VAR_13,
                      VAR_18,
                      FUNC_0(VAR_18)) == 0)
    {
        FUNC_18(VAR_18, FUNC_0(VAR_18), FUNC_19("??"));
    }

    VAR_20 = FUNC_10(((void*)0));
    VAR_19 = FUNC_3(VAR_20);
    VAR_21 = FUNC_2(VAR_20, 16, 16);
    FUNC_14(((void*)0), VAR_20);

    if (VAR_19 && VAR_21)
    {
        VAR_22 = FUNC_1(16, 16, 1, 1, ((void*)0));
        if (VAR_22)
        {
            VAR_23 = FUNC_15(VAR_19, VAR_21);
            VAR_24.right = 16;
            VAR_24.left = 0;
            VAR_24.bottom = 16;
            VAR_24.top = 0;

            FUNC_16(VAR_19, FUNC_12(VAR_3));
            FUNC_17(VAR_19, FUNC_12(VAR_4));

            FUNC_9(VAR_19, VAR_24.left, VAR_24.top, VAR_9, &VAR_24, FUNC_19(""), 0, ((void*)0));

            VAR_26 = FUNC_4(-11, 0, 0, 0, VAR_12, VAR_10, VAR_10, VAR_10, VAR_0,
                               VAR_14, VAR_2,
                               VAR_5, VAR_11, FUNC_19("Tahoma"));

            VAR_25 = FUNC_15(VAR_19, VAR_26);
            FUNC_8(VAR_19, FUNC_21(VAR_18), 2, &VAR_24, VAR_7|VAR_6|VAR_8);
            FUNC_15(VAR_19, VAR_22);
            FUNC_13(VAR_19, 0, 0, 16, 16, VAR_1);
            FUNC_15(VAR_19, VAR_23);
            FUNC_15(VAR_19, VAR_25);

            VAR_27.hbmColor = VAR_21;
            VAR_27.hbmMask = VAR_22;
            VAR_27.fIcon = VAR_15;

            VAR_28 = FUNC_5(&VAR_27);

            FUNC_7(VAR_22);
            FUNC_7(VAR_23);
            FUNC_7(VAR_26);
        }
    }

    FUNC_6(VAR_19);
    FUNC_7(VAR_21);

    return VAR_28;
}
