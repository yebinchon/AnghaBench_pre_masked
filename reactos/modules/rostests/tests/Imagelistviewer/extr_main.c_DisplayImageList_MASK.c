
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int mask; scalar_t__ iImage; int pszText; scalar_t__ iSubItem; scalar_t__ iItem; } ;
struct TYPE_5__ {int cbSize; int ImageList; } ;
typedef int TCHAR ;
typedef TYPE_1__ SP_CLASSIMAGELIST_DATA ;
typedef int (* SH_GIL_PROC ) (int *,int *) ;
typedef TYPE_2__ LV_ITEM ;
typedef int LPCSTR ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int * HMODULE ;
typedef int HIMAGELIST ;
typedef int (* FII_PROC ) (int ) ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,int *,int) ;

BOOL
FUNC_11(HWND VAR_8,
                 UINT VAR_9)
{
    HWND VAR_10;
    SP_CLASSIMAGELIST_DATA VAR_11;
    LV_ITEM VAR_12;
    TCHAR VAR_13[6];
    INT VAR_14 = -1;
    INT VAR_15 = 0;

    VAR_10 = FUNC_1(VAR_8, VAR_2);
    (void)FUNC_4(VAR_10);

    if (VAR_9 == VAR_3)
    {
        HIMAGELIST VAR_16, VAR_17;
        HMODULE VAR_18;
        SH_GIL_PROC VAR_19;
        FII_PROC VAR_20;

        VAR_18 = FUNC_7(FUNC_9("shell32.dll"));
        if(VAR_18 == ((void*)0))
            return VAR_0;

        VAR_19 = (SH_GIL_PROC)FUNC_2(VAR_18, (LPCSTR)71);
        VAR_20 = (FII_PROC)FUNC_2(VAR_18, (LPCSTR)660);

        if(VAR_19 == ((void*)0) || VAR_20 == ((void*)0))
        {
            FUNC_0(VAR_18);
            return VAR_0;
        }

        VAR_20(VAR_7);

        VAR_19(&VAR_16, &VAR_17);

        VAR_14 = FUNC_3(VAR_17);

        (void)FUNC_6(VAR_10,
                                    VAR_17,
                                    VAR_6);

        FUNC_0(VAR_18);
    }
    else if (VAR_9 == VAR_1)
    {
        VAR_11.cbSize = sizeof(SP_CLASSIMAGELIST_DATA);
        FUNC_8(&VAR_11);

        VAR_14 = FUNC_3(VAR_11.ImageList);

        (void)FUNC_6(VAR_10,
                                    VAR_11.ImageList,
                                    VAR_6);
    }
    else
        return VAR_0;

    VAR_12.mask = VAR_5 | VAR_4;

    while (VAR_15 <= VAR_14)
    {
        VAR_12.iItem = VAR_15;
        VAR_12.iSubItem = 0;
        VAR_12.pszText = FUNC_10(VAR_15, VAR_13, 10);
        VAR_12.iImage = VAR_15;

        (void)FUNC_5(VAR_10, &VAR_12);

        VAR_15++;
    }

    return VAR_7;
}
