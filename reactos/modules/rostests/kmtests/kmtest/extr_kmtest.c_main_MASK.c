
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PCSTR ;
typedef int KMT_OPERATION ;
typedef int INT ;
typedef scalar_t__ DWORD ;
typedef int BOOLEAN ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_11 ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_13 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (int ) ;
 int VAR_17 ;
 int FUNC_15 (scalar_t__,int ) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*) ;

int
FUNC_18(
    int VAR_18,
    char **VAR_19)
{
    INT VAR_20 = VAR_2;
    DWORD VAR_21 = VAR_0;
    PCSTR VAR_22 = "kmtest.exe";
    PCSTR VAR_23 = ((void*)0);
    KMT_OPERATION VAR_24 = VAR_8;
    BOOLEAN VAR_25 = VAR_3;

    VAR_21 = FUNC_8();
    if (VAR_21)
        goto cleanup;

    if (VAR_18 >= 1)
        VAR_22 = VAR_19[0];

    if (VAR_18 <= 1)
    {
        FUNC_17("Usage: %s <test_name>                 - run the specified test (creates/starts the driver(s) as appropriate)\n", VAR_22);
        FUNC_17("       %s --list                      - list available tests\n", VAR_22);
        FUNC_17("       %s --list-all                  - list available tests, including hidden\n", VAR_22);
        FUNC_17("       %s <create|delete|start|stop>  - manage the kmtest driver\n\n", VAR_22);
        VAR_24 = 129;
    }
    else
    {
        VAR_23 = VAR_19[1];
        if (!FUNC_16(VAR_23, "create"))
            VAR_21 = FUNC_4(VAR_14, VAR_15, VAR_13, &VAR_10);
        else if (!FUNC_16(VAR_23, "delete"))
            VAR_21 = FUNC_5(VAR_14, &VAR_10);
        else if (!FUNC_16(VAR_23, "start"))
            VAR_21 = FUNC_9(VAR_14, &VAR_10);
        else if (!FUNC_16(VAR_23, "stop"))
            VAR_21 = FUNC_10(VAR_14, &VAR_10);

        else if (!FUNC_16(VAR_23, "--list"))
            VAR_24 = 129;
        else if (!FUNC_16(VAR_23, "--list-all"))
            VAR_24 = 130;
        else
            VAR_24 = 128;
    }

    if (VAR_24)
    {
        VAR_21 = FUNC_3(VAR_14, VAR_15, VAR_13, &VAR_10, VAR_3);
        if (VAR_21)
            goto cleanup;

        VAR_9 = FUNC_1(VAR_7, VAR_4 | VAR_5, 0, ((void*)0), VAR_11, 0, ((void*)0));
        if (VAR_9 == VAR_6)
            FUNC_15(VAR_21, VAR_17);

        switch (VAR_24)
        {
            case 130:
                VAR_25 = VAR_16;

            case 129:
                VAR_21 = FUNC_11(VAR_25);
                break;
            case 128:
                VAR_21 = FUNC_13(VAR_23);
                break;
            default:
                FUNC_14(VAR_3);
        }
    }

cleanup:
    if (VAR_9)
        FUNC_0(VAR_9);

    if (VAR_12)
        FUNC_6(VAR_12);

    FUNC_2(&VAR_10);

    if (VAR_21)
        FUNC_7(VAR_16);
    else
        VAR_21 = FUNC_7(VAR_3);

    if (VAR_21)
    {
        FUNC_12(VAR_21);

        VAR_20 = VAR_1;
    }

    return VAR_20;
}
