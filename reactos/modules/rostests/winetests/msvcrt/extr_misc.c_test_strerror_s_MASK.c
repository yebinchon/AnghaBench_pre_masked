
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    int VAR_3;
    char VAR_4[256];

    if (!&FUNC_2)
    {
        FUNC_4("strerror_s is not available\n");
        return;
    }

    VAR_2 = VAR_0;
    VAR_3 = FUNC_2(((void*)0), 0, 0);
    FUNC_1(VAR_3 == VAR_1, "Expected strerror_s to return EINVAL, got %d\n", VAR_3);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);

    VAR_2 = VAR_0;
    VAR_3 = FUNC_2(((void*)0), sizeof(VAR_4), 0);
    FUNC_1(VAR_3 == VAR_1, "Expected strerror_s to return EINVAL, got %d\n", VAR_3);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);

    FUNC_0(VAR_4, 'X', sizeof(VAR_4));
    VAR_2 = VAR_0;
    VAR_3 = FUNC_2(VAR_4, 0, 0);
    FUNC_1(VAR_3 == VAR_1, "Expected strerror_s to return EINVAL, got %d\n", VAR_3);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);
    FUNC_1(VAR_4[0] == 'X', "Expected output buffer to be untouched\n");

    FUNC_0(VAR_4, 'X', sizeof(VAR_4));
    VAR_3 = FUNC_2(VAR_4, 1, 0);
    FUNC_1(VAR_3 == 0, "Expected strerror_s to return 0, got %d\n", VAR_3);
    FUNC_1(FUNC_3(VAR_4) == 0, "Expected output buffer to be null terminated\n");

    FUNC_0(VAR_4, 'X', sizeof(VAR_4));
    VAR_3 = FUNC_2(VAR_4, 2, 0);
    FUNC_1(VAR_3 == 0, "Expected strerror_s to return 0, got %d\n", VAR_3);
    FUNC_1(FUNC_3(VAR_4) == 1, "Expected output buffer to be truncated\n");

    FUNC_0(VAR_4, 'X', sizeof(VAR_4));
    VAR_3 = FUNC_2(VAR_4, sizeof(VAR_4), 0);
    FUNC_1(VAR_3 == 0, "Expected strerror_s to return 0, got %d\n", VAR_3);

    FUNC_0(VAR_4, 'X', sizeof(VAR_4));
    VAR_3 = FUNC_2(VAR_4, sizeof(VAR_4), -1);
    FUNC_1(VAR_3 == 0, "Expected strerror_s to return 0, got %d\n", VAR_3);
}
