
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szTestDescription ;
typedef int szResult ;
typedef int szError ;
typedef int szCaption ;
typedef int WCHAR ;
typedef int INT ;
typedef int HWND ;
typedef int HINSTANCE ;
typedef int BOOL ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int *,int *,int *,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ) ;
 int VAR_11 ;

BOOL FUNC_5(HWND VAR_12, HINSTANCE VAR_13, INT VAR_14, INT VAR_15, INT VAR_16)
{
    WCHAR VAR_17[256];
    WCHAR VAR_18[256];
    WCHAR VAR_19[256];
    WCHAR VAR_20[256];
    BOOL VAR_21;

    FUNC_2(VAR_13, VAR_3, VAR_18, sizeof(VAR_18) / sizeof(WCHAR));
    FUNC_2(VAR_13, VAR_2, VAR_20, sizeof(VAR_20) / sizeof(WCHAR));
    FUNC_2(VAR_13, VAR_14, VAR_17, sizeof(VAR_17) / sizeof(WCHAR));
    FUNC_2(VAR_13, VAR_15, VAR_19, sizeof(VAR_19) / sizeof(WCHAR));

    if(FUNC_3(((void*)0), VAR_17, VAR_18, VAR_8 | VAR_6) == VAR_1)
        return VAR_0;

    FUNC_4(VAR_12, VAR_10);

    switch(VAR_16){
        case 1:
            VAR_21 = FUNC_1(VAR_12);
            break;
        case 2:
            VAR_21 = FUNC_0(VAR_12, VAR_0);
            break;
        case 3:
            VAR_21 = FUNC_0(VAR_12, VAR_11);
            break;
        default:
            VAR_21 = VAR_0;
    }

    FUNC_4(VAR_12, VAR_9);

    if(!VAR_21)
    {
        FUNC_3(((void*)0), VAR_20, VAR_18, VAR_7 | VAR_5);
        return VAR_0;
    }

    if(FUNC_3(((void*)0), VAR_19, VAR_18, VAR_8 | VAR_6) == VAR_4)
        return VAR_11;

    return VAR_0;
}
