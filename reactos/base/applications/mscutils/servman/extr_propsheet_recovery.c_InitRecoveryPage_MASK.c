
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ LPWSTR ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;


 scalar_t__ FUNC_0 (scalar_t__*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static
VOID
FUNC_5(
    HWND VAR_14)
{
    LPWSTR VAR_15;
    INT VAR_16;

    for (VAR_16 = VAR_10; VAR_16 <= VAR_11; VAR_16++)
    {
        if (FUNC_0(&VAR_15,
                               VAR_13,
                               VAR_16))
        {
            FUNC_4(VAR_14,
                                VAR_3,
                                VAR_0,
                                0,
                                (LPARAM)VAR_15);

            FUNC_4(VAR_14,
                                VAR_8,
                                VAR_0,
                                0,
                                (LPARAM)VAR_15);

            FUNC_4(VAR_14,
                                VAR_9,
                                VAR_0,
                                0,
                                (LPARAM)VAR_15);

            FUNC_3(VAR_15);
        }
    }

    FUNC_4(VAR_14,
                        VAR_3,
                        VAR_1,
                        0,
                        0);

    FUNC_4(VAR_14,
                        VAR_8,
                        VAR_1,
                        0,
                        0);

    FUNC_4(VAR_14,
                        VAR_9,
                        VAR_1,
                        0,
                        0);

    FUNC_4(VAR_14,
                        VAR_4,
                        VAR_12,
                        0,
                        (LPARAM)L"0");

    FUNC_4(VAR_14,
                        VAR_7,
                        VAR_12,
                        0,
                        (LPARAM)L"1");

    for (VAR_16 = VAR_6; VAR_16 <= VAR_5; VAR_16++)
        FUNC_1(FUNC_2(VAR_14, VAR_16), VAR_2);
}
