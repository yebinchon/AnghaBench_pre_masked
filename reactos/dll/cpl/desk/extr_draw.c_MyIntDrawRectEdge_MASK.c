
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_11__ {int * crColor; } ;
struct TYPE_10__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef TYPE_1__* LPRECT ;
typedef scalar_t__ HPEN ;
typedef int HDC ;
typedef int HBRUSH ;
typedef TYPE_4__ COLOR_SCHEME ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (int ) ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 char* VAR_14 ;
 char* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 size_t VAR_18 ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,TYPE_2__*) ;
 int VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int VAR_22 ;

__attribute__((used)) static BOOL
FUNC_8(HDC VAR_23, LPRECT VAR_24, UINT VAR_25, UINT VAR_26, COLOR_SCHEME *VAR_27)
{
    signed char VAR_28, VAR_29;
    signed char VAR_30, VAR_31;
    HPEN VAR_32, VAR_33;
    HPEN VAR_34, VAR_35;
    RECT VAR_36 = *VAR_24;
    POINT VAR_37;
    HPEN VAR_38;
    int VAR_39 = 0;
    int VAR_40 = 0;
    int VAR_41 = 0;
    int VAR_42 = 0;
    HBRUSH VAR_43;


    VAR_32 = VAR_33 = VAR_34 = VAR_35 = (HPEN)FUNC_3(VAR_19);
    VAR_38 = (HPEN)FUNC_6(VAR_23, VAR_32);


    VAR_28 = VAR_14[VAR_25 & (VAR_0|VAR_1)];
    VAR_29 = VAR_15[VAR_25 & (VAR_0|VAR_1)];
    VAR_30 = VAR_20[VAR_25 & (VAR_0|VAR_1)];
    VAR_31 = VAR_21[VAR_25 & (VAR_0|VAR_1)];

    if ((VAR_26 & VAR_4) == VAR_4)
        VAR_39 = 1;
    if ((VAR_26 & VAR_10) == VAR_10)
        VAR_41 = 1;
    if ((VAR_26 & VAR_5) == VAR_5)
        VAR_42 = 1;
    if ((VAR_26 & VAR_9) == VAR_9)
        VAR_40 = 1;

    if ((VAR_26 & VAR_18))
        VAR_43 = FUNC_0(VAR_27->crColor[VAR_11]);
    else
        VAR_43 = FUNC_0(VAR_27->crColor[VAR_12]);

    FUNC_2(VAR_23, &VAR_36, VAR_43);
    FUNC_1(VAR_43);

    FUNC_5(VAR_23, 0, 0, &VAR_37);


    if (VAR_29 != -1)
    {
        VAR_33 = FUNC_3(VAR_13);
        FUNC_6(VAR_23, VAR_33);
        FUNC_7(VAR_23, VAR_27->crColor[VAR_29]);
        if (VAR_26 & VAR_8)
        {
            FUNC_5(VAR_23, VAR_36.left, VAR_36.top, ((void*)0));
            FUNC_4(VAR_23, VAR_36.right, VAR_36.top);
        }
        if (VAR_26 & VAR_6)
        {
            FUNC_5(VAR_23, VAR_36.left, VAR_36.top, ((void*)0));
            FUNC_4(VAR_23, VAR_36.left, VAR_36.bottom);
        }
    }

    if (VAR_31 != -1)
    {
        VAR_35 = FUNC_3(VAR_13);
        FUNC_6(VAR_23, VAR_35);
        FUNC_7(VAR_23, VAR_27->crColor[VAR_31]);
        if (VAR_26 & VAR_3)
        {
            FUNC_5(VAR_23, VAR_36.left, VAR_36.bottom-1, ((void*)0));
            FUNC_4(VAR_23, VAR_36.right, VAR_36.bottom-1);
        }
        if (VAR_26 & VAR_7)
        {
            FUNC_5(VAR_23, VAR_36.right-1, VAR_36.top, ((void*)0));
            FUNC_4(VAR_23, VAR_36.right-1, VAR_36.bottom);
        }
    }


    if (VAR_28 != -1)
    {
        VAR_32 = FUNC_3(VAR_13);
        FUNC_6(VAR_23, VAR_32);
        FUNC_7(VAR_23, VAR_27->crColor[VAR_28]);
        if (VAR_26 & VAR_8)
        {
            FUNC_5(VAR_23, VAR_36.left+VAR_40, VAR_36.top+1, ((void*)0));
            FUNC_4(VAR_23, VAR_36.right-VAR_41, VAR_36.top+1);
        }
        if (VAR_26 & VAR_6)
        {
            FUNC_5(VAR_23, VAR_36.left+1, VAR_36.top+VAR_40, ((void*)0));
            FUNC_4(VAR_23, VAR_36.left+1, VAR_36.bottom-VAR_39);
        }
    }

    if (VAR_30 != -1)
    {
        VAR_34 = FUNC_3(VAR_13);
        FUNC_6(VAR_23, VAR_34);
        FUNC_7(VAR_23, VAR_27->crColor[VAR_30]);
        if (VAR_26 & VAR_3)
        {
            FUNC_5(VAR_23, VAR_36.left+VAR_39, VAR_36.bottom-2, ((void*)0));
            FUNC_4(VAR_23, VAR_36.right-VAR_42, VAR_36.bottom-2);
        }
        if (VAR_26 & VAR_7)
        {
            FUNC_5(VAR_23, VAR_36.right-2, VAR_36.top+VAR_41, ((void*)0));
            FUNC_4(VAR_23, VAR_36.right-2, VAR_36.bottom-VAR_42);
        }
    }

    if (VAR_26 & VAR_2)
    {
        int VAR_44 = (VAR_16[VAR_25 & (VAR_0|VAR_1)] != -1 ? 1 : 0)
                      + (VAR_17[VAR_25 & (VAR_0|VAR_1)] != -1 ? 1 : 0);

        if (VAR_26 & VAR_6)
            VAR_36.left += VAR_44;
        if (VAR_26 & VAR_7)
            VAR_36.right -= VAR_44;
        if (VAR_26 & VAR_8)
            VAR_36.top += VAR_44;
        if (VAR_26 & VAR_3)
            VAR_36.bottom -= VAR_44;

        if (VAR_26 & VAR_2)
            *VAR_24 = VAR_36;
    }


    FUNC_6(VAR_23, VAR_38);
    FUNC_5(VAR_23, VAR_37.x, VAR_37.y, ((void*)0));
    return VAR_22;
}
