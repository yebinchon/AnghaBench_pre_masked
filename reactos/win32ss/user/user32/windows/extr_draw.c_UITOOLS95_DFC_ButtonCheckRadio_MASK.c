
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {int lfQuality; int lfFaceName; int lfCharSet; scalar_t__ lfHeight; } ;
struct TYPE_11__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_10__ {int bottom; int right; int top; int left; } ;
typedef char TCHAR ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* LPRECT ;
typedef TYPE_3__ LOGFONTW ;
typedef scalar_t__ INT ;
typedef scalar_t__ HGDIOBJ ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int COLORREF ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_9 (int,int,int) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_16 (int ,scalar_t__,scalar_t__,char*,int) ;
 int VAR_21 ;
 int FUNC_17 (TYPE_3__*,int) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_19(HDC VAR_22, LPRECT VAR_23, UINT VAR_24, BOOL VAR_25)
{
    LOGFONTW VAR_26;
    HFONT VAR_27, VAR_28;
    int VAR_29;
    TCHAR VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    INT VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    INT VAR_40 = FUNC_4(VAR_22);
    COLORREF VAR_41 = FUNC_7(VAR_22);

    VAR_37 = VAR_23->right - VAR_23->left;
    VAR_38 = VAR_23->bottom - VAR_23->top;
    VAR_39 = (VAR_37 < VAR_38) ? VAR_37 : VAR_38;
    VAR_35 = VAR_23->left + (VAR_37 - VAR_39) / 2;
    VAR_36 = VAR_23->top + (VAR_38 - VAR_39) / 2;

    if (VAR_25)
    {
        VAR_30 = 'j';
        VAR_31 = 'k';
        VAR_32 = 'l';
        VAR_33 = 'm';
        VAR_34 = 'n';
    }
    else
    {
        VAR_30 = 'c';
        VAR_31 = 'd';
        VAR_32 = 'e';
        VAR_33 = 'f';
        VAR_34 = 'g';
    }

    FUNC_17(&VAR_26, sizeof(LOGFONTW));
    VAR_26.lfHeight = VAR_39;
    VAR_26.lfCharSet = VAR_9;
    FUNC_18(VAR_26.lfFaceName, FUNC_15("Marlett"));
    if (VAR_25 && ((VAR_24 & 0xFF) == VAR_10))
    {
        VAR_26.lfQuality = VAR_16;
    }
    VAR_27 = FUNC_0(&VAR_26);
    VAR_28 = FUNC_10(VAR_22, VAR_27);

    if (VAR_25 && ((VAR_24 & 0xFF) == VAR_10))
    {


        RECT VAR_42;
        HGDIOBJ VAR_43, VAR_44;
        FUNC_3(VAR_22, VAR_23, (HBRUSH)FUNC_5(VAR_21));
        FUNC_13(&VAR_42, VAR_35, VAR_36, VAR_35 + VAR_39, VAR_36 + VAR_39);
        FUNC_8(&VAR_42, -(VAR_39 * 8) / 54, -(VAR_39 * 8) / 54);
        VAR_43 = FUNC_10(VAR_22, FUNC_5(VAR_0));
        VAR_44 = FUNC_10(VAR_22, FUNC_5(VAR_17));
        FUNC_2(VAR_22, VAR_42.left, VAR_42.top, VAR_42.right, VAR_42.bottom);
        FUNC_10(VAR_22, VAR_43);
        FUNC_10(VAR_22, VAR_44);
    }
    else
    {
        FUNC_12(VAR_22, VAR_19);


        if ((VAR_24 & (VAR_13 | VAR_15)))
            VAR_29 = VAR_3;
        else
            VAR_29 = VAR_6;
        FUNC_14(VAR_22, FUNC_6(VAR_29));
        FUNC_16(VAR_22, VAR_35, VAR_36, &VAR_34, 1);

        if (VAR_24 & (VAR_12 | VAR_14))
        {
            FUNC_14(VAR_22, FUNC_6(VAR_7));
            FUNC_16(VAR_22, VAR_35, VAR_36, &VAR_30, 1);
            FUNC_16(VAR_22, VAR_35, VAR_36, &VAR_31, 1);
            FUNC_16(VAR_22, VAR_35, VAR_36, &VAR_32, 1);
            FUNC_16(VAR_22, VAR_35, VAR_36, &VAR_33, 1);
        }
        else
        {
            FUNC_14(VAR_22, FUNC_6(VAR_5));
            FUNC_16(VAR_22, VAR_35, VAR_36, &VAR_30, 1);
            FUNC_14(VAR_22, FUNC_6(VAR_4));
            FUNC_16(VAR_22, VAR_35, VAR_36, &VAR_31, 1);
            FUNC_14(VAR_22, FUNC_6(VAR_1));
            FUNC_16(VAR_22, VAR_35, VAR_36, &VAR_32, 1);
            FUNC_14(VAR_22, FUNC_6(VAR_2));
            FUNC_16(VAR_22, VAR_35, VAR_36, &VAR_33, 1);
        }

        if (VAR_24 & VAR_11)
        {
            TCHAR VAR_45 = (VAR_25) ? 'i' : 'b';

            FUNC_14(VAR_22, FUNC_6(VAR_8));
            FUNC_16(VAR_22, VAR_35, VAR_36, &VAR_45, 1);
        }
    }

    FUNC_10(VAR_22, VAR_28);
    FUNC_1(VAR_27);

    FUNC_14(VAR_22, VAR_41);
    FUNC_12(VAR_22, VAR_40);

    return VAR_20;
}
