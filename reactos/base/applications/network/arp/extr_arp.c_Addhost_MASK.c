
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_10__ {int dwPhysAddrLen; int dwType; int dwAddr; scalar_t__* bPhysAddr; TYPE_1__* table; int dwIndex; } ;
struct TYPE_9__ {int dwIndex; } ;
typedef scalar_t__* PTCHAR ;
typedef TYPE_2__* PMIB_IPNETTABLE ;
typedef TYPE_2__* PMIB_IPNETROW ;
typedef TYPE_2__ MIB_IPNETROW ;
typedef int INT ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int*,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,...) ;
 int FUNC_10 (scalar_t__*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__*,char*,int *) ;
 int FUNC_14 (scalar_t__*) ;
 int FUNC_15 (scalar_t__) ;

INT FUNC_16(PTCHAR VAR_8, PTCHAR VAR_9, PTCHAR VAR_10)
{
    PMIB_IPNETROW VAR_11 = ((void*)0);
    PMIB_IPNETTABLE VAR_12 = ((void*)0);
    DWORD VAR_13 = 0;
    ULONG VAR_14 = 0;
    INT VAR_15, VAR_16, VAR_17;




    if (VAR_8 != ((void*)0))
    {
        if ((VAR_13 = FUNC_10(VAR_8)) == VAR_3)
        {
            FUNC_9(FUNC_8("ARP: bad IP address: %s\n"), VAR_8);
            return VAR_1;
        }
    }
    else
    {
        FUNC_6();
        return VAR_1;
    }


    if (FUNC_14(VAR_9) != 17)
    {
        FUNC_9(FUNC_8("ARP: bad argument: %s\n"), VAR_9);
        return VAR_1;
    }
    for (VAR_15=0; VAR_15<17; VAR_15++)
    {
        if (VAR_9[VAR_15] == VAR_6)
            continue;

        if (!FUNC_12(VAR_9[VAR_15]))
        {
            FUNC_9(FUNC_8("ARP: bad argument: %s\n"), VAR_9);
            return VAR_1;
        }
    }



    FUNC_1(VAR_12, &VAR_14, 0);


    VAR_12 = (PMIB_IPNETTABLE) FUNC_3(FUNC_2(), 0, VAR_14);
    if (VAR_12 == ((void*)0))
        goto cleanup;

    FUNC_7(VAR_12, sizeof(*VAR_12));

    if (FUNC_1(VAR_12, &VAR_14, VAR_7) != VAR_5)
    {
        FUNC_9(FUNC_8("failed to allocate memory for GetIpNetTable\n"));
        FUNC_0();
        goto cleanup;
    }



    VAR_11 = (MIB_IPNETROW *) FUNC_3(FUNC_2(), 0, sizeof(MIB_IPNETROW));
    if (VAR_11 == ((void*)0))
        goto cleanup;

    FUNC_7(VAR_11, sizeof(MIB_IPNETROW));



    if (VAR_10)
    {
        if (FUNC_13(VAR_10, "%lx", &VAR_11->dwIndex) == VAR_0)
        {
            goto cleanup;
        }
    }
    else
    {



        VAR_11->dwIndex = VAR_12->table[0].dwIndex;
    }


    VAR_11->dwPhysAddrLen = 6;



    for (VAR_15=0; VAR_15<6; VAR_15++)
    {
        VAR_16 =0;
        VAR_17 = FUNC_15(VAR_9[VAR_15*3]);
        VAR_17 = VAR_17 - (FUNC_11(VAR_17) ? '0' : ('A' - 10));
        VAR_16 += VAR_17;
        VAR_16 = (VAR_16 << 4);
        VAR_17 = FUNC_15(VAR_9[VAR_15*3 + 1]);
        VAR_17 = VAR_17 - (FUNC_11(VAR_17) ? '0' : ('A' - 10));
        VAR_16 += VAR_17;
        VAR_11->bPhysAddr[VAR_15] = (BYTE)VAR_16;
    }



    VAR_11->dwAddr = VAR_13;



    VAR_11->dwType = VAR_4;



    if (FUNC_5(VAR_11) != VAR_5)
    {
        FUNC_0();
        goto cleanup;
    }

    FUNC_4(FUNC_2(), 0, VAR_11);

    return VAR_2;

cleanup:
    if (VAR_12 != ((void*)0))
        FUNC_4(FUNC_2(), 0, VAR_12);
    if (VAR_11 != ((void*)0))
        FUNC_4(FUNC_2(), 0, VAR_11);
    return VAR_1;
}
