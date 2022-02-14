
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ errno_t ;
typedef int buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (int,char*,int,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    errno_t VAR_4;
    char VAR_5[33];

    if (!&FUNC_4)
    {
        FUNC_6("Skipping _itoa_s tests\n");
        return;
    }

    VAR_3 = VAR_0;
    VAR_4 = FUNC_4(0, ((void*)0), 0, 0);
    FUNC_3(VAR_4 == VAR_1, "Expected _itoa_s to return EINVAL, got %d\n", VAR_4);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);

    FUNC_2(VAR_5, 'X', sizeof(VAR_5));
    VAR_3 = VAR_0;
    VAR_4 = FUNC_4(0, VAR_5, 0, 0);
    FUNC_3(VAR_4 == VAR_1, "Expected _itoa_s to return EINVAL, got %d\n", VAR_4);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_3(VAR_5[0] == 'X', "Expected the output buffer to be untouched\n");

    FUNC_2(VAR_5, 'X', sizeof(VAR_5));
    VAR_3 = VAR_0;
    VAR_4 = FUNC_4(0, VAR_5, sizeof(VAR_5), 0);
    FUNC_3(VAR_4 == VAR_1, "Expected _itoa_s to return EINVAL, got %d\n", VAR_4);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_3(VAR_5[0] == '\0', "Expected the output buffer to be null terminated\n");

    FUNC_2(VAR_5, 'X', sizeof(VAR_5));
    VAR_3 = VAR_0;
    VAR_4 = FUNC_4(0, VAR_5, sizeof(VAR_5), 64);
    FUNC_3(VAR_4 == VAR_1, "Expected _itoa_s to return EINVAL, got %d\n", VAR_4);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_3(VAR_5[0] == '\0', "Expected the output buffer to be null terminated\n");

    FUNC_2(VAR_5, 'X', sizeof(VAR_5));
    VAR_3 = VAR_0;
    VAR_4 = FUNC_4(12345678, VAR_5, 4, 10);
    FUNC_3(VAR_4 == VAR_2, "Expected _itoa_s to return ERANGE, got %d\n", VAR_4);
    FUNC_3(VAR_3 == VAR_2, "Expected errno to be ERANGE, got %d\n", VAR_3);
    FUNC_3(!FUNC_1(VAR_5, "\000765", 4),
       "Expected the output buffer to be null terminated with truncated output\n");

    FUNC_2(VAR_5, 'X', sizeof(VAR_5));
    VAR_3 = VAR_0;
    VAR_4 = FUNC_4(12345678, VAR_5, 8, 10);
    FUNC_3(VAR_4 == VAR_2, "Expected _itoa_s to return ERANGE, got %d\n", VAR_4);
    FUNC_3(VAR_3 == VAR_2, "Expected errno to be ERANGE, got %d\n", VAR_3);
    FUNC_3(!FUNC_1(VAR_5, "\0007654321", 8),
       "Expected the output buffer to be null terminated with truncated output\n");

    FUNC_2(VAR_5, 'X', sizeof(VAR_5));
    VAR_3 = VAR_0;
    VAR_4 = FUNC_4(-12345678, VAR_5, 9, 10);
    FUNC_3(VAR_4 == VAR_2, "Expected _itoa_s to return ERANGE, got %d\n", VAR_4);
    FUNC_3(VAR_3 == VAR_2, "Expected errno to be ERANGE, got %d\n", VAR_3);
    FUNC_3(!FUNC_1(VAR_5, "\00087654321", 9),
       "Expected the output buffer to be null terminated with truncated output\n");

    VAR_4 = FUNC_4(12345678, VAR_5, 9, 10);
    FUNC_3(VAR_4 == 0, "Expected _itoa_s to return 0, got %d\n", VAR_4);
    FUNC_3(!FUNC_5(VAR_5, "12345678"),
       "Expected output buffer string to be \"12345678\", got \"%s\"\n",
       VAR_5);

    VAR_4 = FUNC_4(43690, VAR_5, sizeof(VAR_5), 2);
    FUNC_3(VAR_4 == 0, "Expected _itoa_s to return 0, got %d\n", VAR_4);
    FUNC_3(!FUNC_5(VAR_5, "1010101010101010"),
       "Expected output buffer string to be \"1010101010101010\", got \"%s\"\n",
       VAR_5);

    VAR_4 = FUNC_4(1092009, VAR_5, sizeof(VAR_5), 36);
    FUNC_3(VAR_4 == 0, "Expected _itoa_s to return 0, got %d\n", VAR_4);
    FUNC_3(!FUNC_5(VAR_5, "nell"),
       "Expected output buffer string to be \"nell\", got \"%s\"\n",
       VAR_5);

    VAR_4 = FUNC_4(5704, VAR_5, sizeof(VAR_5), 18);
    FUNC_3(VAR_4 == 0, "Expected _itoa_s to return 0, got %d\n", VAR_4);
    FUNC_3(!FUNC_5(VAR_5, "hag"),
       "Expected output buffer string to be \"hag\", got \"%s\"\n",
       VAR_5);

    VAR_4 = FUNC_4(-12345678, VAR_5, sizeof(VAR_5), 10);
    FUNC_3(VAR_4 == 0, "Expected _itoa_s to return 0, got %d\n", VAR_4);
    FUNC_3(!FUNC_5(VAR_5, "-12345678"),
       "Expected output buffer string to be \"-12345678\", got \"%s\"\n",
       VAR_5);

    FUNC_0(100, VAR_5, 100);
    FUNC_3(!FUNC_5(VAR_5, "10"),
            "Expected output buffer string to be \"10\", got \"%s\"\n", VAR_5);
}
