
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int PRECOVERYDATA ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static
VOID
FUNC_3(
    HWND VAR_10,
    PRECOVERYDATA VAR_11)
{
    INT VAR_12, VAR_13;
    BOOL VAR_14 = VAR_1;
    BOOL VAR_15 = VAR_1;
    BOOL VAR_16 = VAR_1;

    for (VAR_12 = VAR_3; VAR_12 <= VAR_8; VAR_12++)
    {
        VAR_13 = FUNC_2(VAR_10,
                                    VAR_12,
                                    VAR_0,
                                    0,
                                    0);
        switch (VAR_13)
        {
            case 1:
                VAR_14 = VAR_9;
                break;

            case 2:
                VAR_15 = VAR_9;
                break;

            case 3:
                VAR_16 = VAR_9;
                break;
        }
    }

    for (VAR_12 = VAR_5; VAR_12 <= VAR_6; VAR_12++)
         FUNC_0(FUNC_1(VAR_10, VAR_12), VAR_14);

    for (VAR_12 = VAR_7; VAR_12 <= VAR_2; VAR_12++)
         FUNC_0(FUNC_1(VAR_10, VAR_12), VAR_15);

    FUNC_0(FUNC_1(VAR_10, VAR_4), VAR_16);
}
