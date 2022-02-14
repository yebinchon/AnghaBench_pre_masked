
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pszText; void* mask; } ;
typedef TYPE_1__ TCITEM ;
typedef int TCHAR ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
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
 int VAR_15 ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_16 ;
 int FUNC_6 (int ,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int ,int,TYPE_1__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

BOOL FUNC_9(HWND VAR_30)
{
    TCHAR VAR_31[256];
    TCITEM VAR_32;

    VAR_28 = FUNC_2(VAR_30, VAR_2);
    VAR_23 = FUNC_0(VAR_24, FUNC_4(VAR_4), VAR_30, VAR_1); FUNC_1(VAR_23);
    VAR_27 = FUNC_0(VAR_24, FUNC_4(VAR_7), VAR_30, VAR_18); FUNC_1(VAR_27);
    VAR_22 = FUNC_0(VAR_24, FUNC_4(VAR_3), VAR_30, VAR_0); FUNC_1(VAR_22);
    VAR_25 = FUNC_0(VAR_24, FUNC_4(VAR_5), VAR_30, VAR_16); FUNC_1(VAR_25);
    VAR_26 = FUNC_0(VAR_24, FUNC_4(VAR_6), VAR_30, VAR_17); FUNC_1(VAR_26);
    VAR_29 = FUNC_0(VAR_24, FUNC_4(VAR_8), VAR_30, VAR_21); FUNC_1(VAR_29);

    FUNC_3(VAR_24, VAR_9, VAR_31, 256);
    FUNC_6(VAR_30, VAR_31);


    FUNC_3(VAR_24, VAR_11, VAR_31, 256);
    FUNC_8(&VAR_32, 0, sizeof(TCITEM));
    VAR_32.mask = VAR_19;
    VAR_32.pszText = VAR_31;
    (void)FUNC_7(VAR_28, 0, &VAR_32);

    FUNC_3(VAR_24, VAR_14, VAR_31, 256);
    FUNC_8(&VAR_32, 0, sizeof(TCITEM));
    VAR_32.mask = VAR_19;
    VAR_32.pszText = VAR_31;
    (void)FUNC_7(VAR_28, 1, &VAR_32);

    FUNC_3(VAR_24, VAR_10, VAR_31, 256);
    FUNC_8(&VAR_32, 0, sizeof(TCITEM));
    VAR_32.mask = VAR_19;
    VAR_32.pszText = VAR_31;
    (void)FUNC_7(VAR_28, 2, &VAR_32);

    FUNC_3(VAR_24, VAR_12, VAR_31, 256);
    FUNC_8(&VAR_32, 0, sizeof(TCITEM));
    VAR_32.mask = VAR_19;
    VAR_32.pszText = VAR_31;
    (void)FUNC_7(VAR_28, 3, &VAR_32);

    FUNC_3(VAR_24, VAR_13, VAR_31, 256);
    FUNC_8(&VAR_32, 0, sizeof(TCITEM));
    VAR_32.mask = VAR_19;
    VAR_32.pszText = VAR_31;
    (void)FUNC_7(VAR_28, 4, &VAR_32);

    FUNC_3(VAR_24, VAR_15, VAR_31, 256);
    FUNC_8(&VAR_32, 0, sizeof(TCITEM));
    VAR_32.mask = VAR_19;
    VAR_32.pszText = VAR_31;
    (void)FUNC_7(VAR_28, 5, &VAR_32);

    FUNC_5();

    return VAR_20;
}
