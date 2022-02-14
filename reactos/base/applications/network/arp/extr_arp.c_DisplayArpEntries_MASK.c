
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int S_addr; } ;
struct in_addr {TYPE_1__ S_un; int s_addr; } ;
typedef scalar_t__ ULONG ;
typedef size_t UINT ;
struct TYPE_12__ {scalar_t__ dwIndex; int dwAddr; } ;
struct TYPE_11__ {scalar_t__ dwNumEntries; TYPE_6__* table; } ;
typedef int TCHAR ;
typedef int PTCHAR ;
typedef TYPE_2__* PMIB_IPNETTABLE ;
typedef TYPE_2__* PMIB_IPADDRTABLE ;
typedef TYPE_2__ MIB_IPADDRTABLE ;
typedef int INT ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,scalar_t__*,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__*,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_6__*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,...) ;
 int FUNC_10 (struct in_addr) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,int ) ;

INT FUNC_13(PTCHAR VAR_4, PTCHAR VAR_5)
{
    INT VAR_6;
    UINT VAR_7, VAR_8;
    PMIB_IPNETTABLE VAR_9 = ((void*)0);
    PMIB_IPADDRTABLE VAR_10 = ((void*)0);
    ULONG VAR_11 = 0;
    struct in_addr VAR_12, VAR_13;
    PTCHAR VAR_14;
    TCHAR VAR_15[20];




    FUNC_2(VAR_9, &VAR_11, 0);


    VAR_9 = (PMIB_IPNETTABLE) FUNC_4(FUNC_3(), 0, VAR_11);
    if (VAR_9 == ((void*)0))
        goto cleanup;

    FUNC_7(VAR_9, sizeof(*VAR_9));

    if (FUNC_2(VAR_9, &VAR_11, VAR_3) != VAR_2)
    {
        FUNC_9(FUNC_8("failed to allocate memory for GetIpNetTable\n"));
        FUNC_0();
        goto cleanup;
    }


    if (VAR_9->dwNumEntries == 0)
    {
        FUNC_9(FUNC_8("No ARP entires found\n"));
        goto cleanup;
    }







    VAR_11 = 0;
    FUNC_1(VAR_10, &VAR_11, 0);

    VAR_10 = (MIB_IPADDRTABLE *) FUNC_4(FUNC_3(), 0, VAR_11);
    if (VAR_10 == ((void*)0))
        goto cleanup;

    FUNC_7(VAR_10, sizeof(*VAR_10));

    if ((VAR_6 = FUNC_1(VAR_10, &VAR_11, VAR_3)) != VAR_2)
    {
        FUNC_9(FUNC_8("GetIpAddrTable failed: %d\n"), VAR_6);
        FUNC_0();
        goto cleanup;
    }


    for (VAR_8=0; VAR_8 < VAR_10->dwNumEntries; VAR_8++)
    {
        if (VAR_9->table[0].dwIndex == VAR_10->table[VAR_8].dwIndex)
        {

            VAR_13 = VAR_10->table[VAR_8].dwAddr;
            VAR_14 = FUNC_10(VAR_13);
            FUNC_12(VAR_15, VAR_14);
        }
    }



    FUNC_9(FUNC_8("\nInterface: %s --- 0x%lx \n"), VAR_15, VAR_9->table[0].dwIndex);
    FUNC_9(FUNC_8("  Internet Address      Physical Address      Type\n"));


    for (VAR_7=0; VAR_7 < VAR_9->dwNumEntries; VAR_7++)
    {



        if (VAR_4)
        {
            VAR_12.S_un.S_addr = VAR_9->table[VAR_7].dwAddr;
            VAR_14 = FUNC_10(VAR_12);


            if (FUNC_11(VAR_14, VAR_4) == 0)
                FUNC_6(&VAR_9->table[VAR_7]);
        }
        else

            FUNC_6(&VAR_9->table[VAR_7]);
    }

    return VAR_1;

cleanup:
    if (VAR_9 != ((void*)0))
        FUNC_5(FUNC_3(), 0, VAR_9);
    if (VAR_10 != ((void*)0))
        FUNC_5(FUNC_3(), 0, VAR_10);
    return VAR_0;
}
