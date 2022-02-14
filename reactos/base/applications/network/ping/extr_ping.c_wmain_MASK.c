
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WSADATA ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_5__ {int Ttl; } ;
struct TYPE_4__ {scalar_t__ ai_addrlen; int ai_addr; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,...) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 () ;
 TYPE_2__ VAR_10 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int **) ;
 int FUNC_10 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 () ;
 int VAR_13 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_15 (int ,int,int *,int,int*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ VAR_19 ;

int
FUNC_19(int VAR_20, WCHAR *VAR_21[])
{
    WSADATA VAR_22;
    ULONG VAR_23;
    DWORD VAR_24 = 46;
    int VAR_25;


    FUNC_0();

    VAR_10.Ttl = 128;

    if (!FUNC_9(VAR_20, VAR_21))
        return 1;

    if (!FUNC_13(VAR_3, VAR_16))
    {
        FUNC_2("Failed to set control handler: %lu\n", FUNC_4());
        return 1;
    }

    VAR_25 = FUNC_18(FUNC_8(2, 2), &VAR_22);
    if (VAR_25 != 0)
    {
        FUNC_1(VAR_14, VAR_8, VAR_25);
        return 1;
    }

    if (!FUNC_12(VAR_18))
    {
        FUNC_16();
        return 1;
    }

    if (FUNC_15(VAR_17->ai_addr, (DWORD)VAR_17->ai_addrlen, ((void*)0), VAR_1, &VAR_24) != 0)
    {
        FUNC_2("WSAAddressToStringW failed: %d\n", FUNC_17());
        FUNC_3(VAR_17);
        FUNC_16();
        return 1;
    }

    if (VAR_4 == VAR_0)
        VAR_19 = FUNC_5();
    else
        VAR_19 = FUNC_7();


    if (VAR_19 == VAR_9)
    {
        FUNC_2("IcmpCreateFile failed: %lu\n", FUNC_4());
        FUNC_3(VAR_17);
        FUNC_16();
        return 1;
    }

    if (*VAR_2)
        FUNC_1(VAR_15, VAR_6, VAR_2, VAR_1);
    else
        FUNC_1(VAR_15, VAR_5, VAR_1);

    FUNC_1(VAR_15, VAR_7, VAR_13);

    FUNC_10();

    VAR_23 = 1;
    while (VAR_23 < VAR_11)
    {
        FUNC_14(1000);
        FUNC_10();

        if (!VAR_12)
            VAR_23++;
    }

    FUNC_11();

    FUNC_6(VAR_19);
    FUNC_3(VAR_17);
    FUNC_16();

    return 0;
}
