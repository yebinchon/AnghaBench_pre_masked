
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_2__ {scalar_t__ ServiceList; scalar_t__ DisplayName; } ;
typedef TYPE_1__* PSTOP_DATA ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPARAM ;
typedef scalar_t__ HWND ;
typedef int * HICON ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (scalar_t__,int ,int ,int ,scalar_t__) ;
 int FUNC_11 (scalar_t__,int ,int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (scalar_t__,int,scalar_t__,scalar_t__) ;
 int VAR_12 ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_14(HWND VAR_13,
           UINT VAR_14,
           WPARAM VAR_15,
           LPARAM VAR_16)
{
    PSTOP_DATA VAR_17;
    HWND VAR_18;
    LPWSTR VAR_19, VAR_20;
    DWORD VAR_21;
    HICON VAR_22 = ((void*)0);
    BOOL VAR_23 = VAR_0;

    VAR_17 = (PSTOP_DATA)VAR_16;



    VAR_22 = (HICON)FUNC_7(VAR_12,
                                FUNC_9(VAR_4),
                                VAR_6,
                                FUNC_4(VAR_8),
                                FUNC_4(VAR_8),
                                0);
    if (VAR_22)
    {

        FUNC_11(VAR_13,
                        VAR_10,
                        VAR_1,
                        (LPARAM)VAR_22);
        FUNC_2(VAR_22);
    }


    if (FUNC_1(&VAR_19,
                            VAR_12,
                            VAR_5))
    {

        VAR_21 = FUNC_13(VAR_19) + FUNC_13(VAR_17->DisplayName) + 1;

        VAR_20 = FUNC_5(VAR_7,
                          0,
                          VAR_21 * sizeof(WCHAR));
        if (VAR_20)
        {

            FUNC_12(VAR_20,
                        VAR_21,
                        VAR_19,
                        VAR_17->DisplayName);


            FUNC_10(VAR_13,
                                VAR_2,
                                VAR_11,
                                0,
                                (LPARAM)VAR_20);

            FUNC_6(VAR_7,
                        0,
                        VAR_20);

            VAR_23 = VAR_9;
        }

        FUNC_8(VAR_19);
    }


    VAR_18 = FUNC_3(VAR_13, VAR_3);
    if (VAR_18)
    {
        FUNC_0(VAR_18,
                              (LPWSTR)VAR_17->ServiceList);
    }

    return VAR_23;
}
