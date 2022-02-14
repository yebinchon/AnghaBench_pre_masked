
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int column ;
typedef int WCHAR ;
typedef int VOID ;
struct TYPE_4__ {int mask; int iSubItem; int cx; int * pszText; int fmt; } ;
typedef TYPE_1__ LV_COLUMN ;
typedef int * HWND ;
typedef int * HIMAGELIST ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int,int,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int,TYPE_1__*) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int ,int ,int *,int ) ;
 int FUNC_11 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int VAR_17 ;

__attribute__((used)) static VOID
FUNC_15(HWND VAR_18)
{
    HWND VAR_19;

    FUNC_6();
    FUNC_11();
    FUNC_5();

    VAR_19 = FUNC_1(VAR_18, VAR_1);

    if (VAR_19 != ((void*)0))
    {
        WCHAR VAR_20[VAR_14];
        HIMAGELIST VAR_21;
        LV_COLUMN VAR_22;

        FUNC_8(VAR_19, VAR_13);

        FUNC_14(&VAR_22, sizeof(VAR_22));

        VAR_22.mask = VAR_8 | VAR_10 | VAR_11 | VAR_9;

        FUNC_10(VAR_17, VAR_2, VAR_20, FUNC_0(VAR_20));
        VAR_22.fmt = VAR_6;
        VAR_22.iSubItem = 0;
        VAR_22.pszText = VAR_20;
        VAR_22.cx = 175;
        FUNC_7(VAR_19, 0, &VAR_22);

        FUNC_10(VAR_17, VAR_3, VAR_20, FUNC_0(VAR_20));
        VAR_22.fmt = VAR_7;
        VAR_22.cx = 155;
        VAR_22.iSubItem = 1;
        VAR_22.pszText = VAR_20;
        FUNC_7(VAR_19, 1, &VAR_22);

        VAR_21 = FUNC_3(FUNC_2(VAR_15) * 2,
                                            FUNC_2(VAR_16),
                                            VAR_4 | VAR_5, 0, 0);
        if (VAR_21 != ((void*)0))
        {
            HIMAGELIST VAR_23 = FUNC_9(VAR_19, VAR_21, VAR_12);
            FUNC_4(VAR_23);
        }

        FUNC_13(VAR_19);
    }

    FUNC_12(VAR_18, VAR_0);
}
