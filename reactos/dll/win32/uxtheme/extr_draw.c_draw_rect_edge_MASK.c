
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int x; int y; } ;
struct TYPE_8__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef TYPE_1__* LPRECT ;
typedef int HTHEME ;
typedef scalar_t__ HRESULT ;
typedef int HPEN ;
typedef int HDC ;
typedef int HBRUSH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 char VAR_15 ;
 char VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 char* VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 char* VAR_22 ;
 int* VAR_23 ;
 char* VAR_24 ;
 int* VAR_25 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,TYPE_2__*) ;
 int VAR_26 ;
 char* VAR_27 ;
 char* VAR_28 ;
 char* VAR_29 ;
 char* VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char,int ,int,int) ;
 int FUNC_7 (char,int ,int,int) ;

__attribute__((used)) static HRESULT FUNC_8 (HDC VAR_32, HTHEME VAR_33, int VAR_34, int VAR_35,
                               const RECT* VAR_36, UINT VAR_37,
                               UINT VAR_38, LPRECT VAR_39)
{
    signed char VAR_40, VAR_41;
    signed char VAR_42, VAR_43;
    HPEN VAR_44, VAR_45;
    HPEN VAR_46, VAR_47;
    RECT VAR_48 = *VAR_36;
    POINT VAR_49;
    HPEN VAR_50;
    int VAR_51 = 0;
    int VAR_52 = 0;
    int VAR_53 = 0;
    int VAR_54 = 0;
    HRESULT VAR_55 = (((VAR_37 & VAR_0) == VAR_0
                       || (VAR_37 & VAR_1) == VAR_1)
                      && !(VAR_38 & (VAR_6|VAR_9)) ) ? VAR_17 : VAR_31;


    VAR_44 = VAR_45 = VAR_46 = VAR_47 = FUNC_2(VAR_26);
    VAR_50 = FUNC_5(VAR_32, VAR_44);


    if(VAR_38 & VAR_9)
    {
        VAR_40 = VAR_42 = VAR_23[VAR_37 & (VAR_0|VAR_1)];
        VAR_41 = VAR_43 = VAR_25[VAR_37 & (VAR_0|VAR_1)];
    }
    else if(VAR_38 & VAR_6)
    {
        VAR_40 = VAR_42 = VAR_22[VAR_37 & (VAR_0|VAR_1)];
        VAR_41 = VAR_43 = VAR_24[VAR_37 & (VAR_0|VAR_1)];

        if( VAR_40 != -1 ) VAR_40 = VAR_42 = VAR_15;
    }
    else if(VAR_38 & VAR_11)
    {
        VAR_40 = VAR_19[VAR_37 & (VAR_0|VAR_1)];
        VAR_41 = VAR_21[VAR_37 & (VAR_0|VAR_1)];
        VAR_42 = VAR_28[VAR_37 & (VAR_0|VAR_1)];
        VAR_43 = VAR_30[VAR_37 & (VAR_0|VAR_1)];
    }
    else
    {
        VAR_40 = VAR_18[VAR_37 & (VAR_0|VAR_1)];
        VAR_41 = VAR_20[VAR_37 & (VAR_0|VAR_1)];
        VAR_42 = VAR_27[VAR_37 & (VAR_0|VAR_1)];
        VAR_43 = VAR_29[VAR_37 & (VAR_0|VAR_1)];
    }

    if((VAR_38 & VAR_4) == VAR_4) VAR_51 = 1;
    if((VAR_38 & VAR_14) == VAR_14) VAR_53 = 1;
    if((VAR_38 & VAR_5) == VAR_5) VAR_54 = 1;
    if((VAR_38 & VAR_13) == VAR_13) VAR_52 = 1;

    if(VAR_40 != -1) VAR_44 = FUNC_7 (VAR_40, VAR_33, VAR_34, VAR_35);
    if(VAR_41 != -1) VAR_45 = FUNC_7 (VAR_41, VAR_33, VAR_34, VAR_35);
    if(VAR_42 != -1) VAR_46 = FUNC_7 (VAR_42, VAR_33, VAR_34, VAR_35);
    if(VAR_43 != -1) VAR_47 = FUNC_7 (VAR_43, VAR_33, VAR_34, VAR_35);

    FUNC_4(VAR_32, 0, 0, &VAR_49);


    FUNC_5(VAR_32, VAR_45);
    if(VAR_38 & VAR_12)
    {
        FUNC_4(VAR_32, VAR_48.left, VAR_48.top, ((void*)0));
        FUNC_3(VAR_32, VAR_48.right, VAR_48.top);
    }
    if(VAR_38 & VAR_7)
    {
        FUNC_4(VAR_32, VAR_48.left, VAR_48.top, ((void*)0));
        FUNC_3(VAR_32, VAR_48.left, VAR_48.bottom);
    }
    FUNC_5(VAR_32, VAR_47);
    if(VAR_38 & VAR_3)
    {
        FUNC_4(VAR_32, VAR_48.right-1, VAR_48.bottom-1, ((void*)0));
        FUNC_3(VAR_32, VAR_48.left-1, VAR_48.bottom-1);
    }
    if(VAR_38 & VAR_10)
    {
        FUNC_4(VAR_32, VAR_48.right-1, VAR_48.bottom-1, ((void*)0));
        FUNC_3(VAR_32, VAR_48.right-1, VAR_48.top-1);
    }


    FUNC_5(VAR_32, VAR_44);
    if(VAR_38 & VAR_12)
    {
        FUNC_4(VAR_32, VAR_48.left+VAR_52, VAR_48.top+1, ((void*)0));
        FUNC_3(VAR_32, VAR_48.right-VAR_53, VAR_48.top+1);
    }
    if(VAR_38 & VAR_7)
    {
        FUNC_4(VAR_32, VAR_48.left+1, VAR_48.top+VAR_52, ((void*)0));
        FUNC_3(VAR_32, VAR_48.left+1, VAR_48.bottom-VAR_51);
    }
    FUNC_5(VAR_32, VAR_46);
    if(VAR_38 & VAR_3)
    {
        FUNC_4(VAR_32, VAR_48.right-1-VAR_54, VAR_48.bottom-2, ((void*)0));
        FUNC_3(VAR_32, VAR_48.left-1+VAR_51, VAR_48.bottom-2);
    }
    if(VAR_38 & VAR_10)
    {
        FUNC_4(VAR_32, VAR_48.right-2, VAR_48.bottom-1-VAR_54, ((void*)0));
        FUNC_3(VAR_32, VAR_48.right-2, VAR_48.top-1+VAR_53);
    }

    if( ((VAR_38 & VAR_8) && VAR_55) || (VAR_38 & VAR_2) )
    {
        int VAR_56 = (VAR_23[VAR_37 & (VAR_0|VAR_1)] != -1 ? 1 : 0)
                + (VAR_25[VAR_37 & (VAR_0|VAR_1)] != -1 ? 1 : 0);

        if(VAR_38 & VAR_7) VAR_48.left += VAR_56;
        if(VAR_38 & VAR_10) VAR_48.right -= VAR_56;
        if(VAR_38 & VAR_12) VAR_48.top += VAR_56;
        if(VAR_38 & VAR_3) VAR_48.bottom -= VAR_56;

        if((VAR_38 & VAR_8) && VAR_55)
        {
            HBRUSH VAR_57 = FUNC_6 ((VAR_38 & VAR_9) ? VAR_16 : VAR_15,
                VAR_33, VAR_34, VAR_35);
            FUNC_1(VAR_32, &VAR_48, VAR_57);
            FUNC_0 (VAR_57);
        }

        if(VAR_38 & VAR_2)
            *VAR_39 = VAR_48;
    }


    FUNC_5(VAR_32, VAR_50);
    FUNC_4(VAR_32, VAR_49.x, VAR_49.y, ((void*)0));
    if(VAR_40 != -1) FUNC_0 (VAR_44);
    if(VAR_41 != -1) FUNC_0 (VAR_45);
    if(VAR_42 != -1) FUNC_0 (VAR_46);
    if(VAR_43 != -1) FUNC_0 (VAR_47);
    return VAR_55;
}
