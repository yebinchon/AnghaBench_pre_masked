
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WSADATA ;
typedef int ULONG ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_10__ {TYPE_1__ sin_addr; } ;
struct TYPE_14__ {TYPE_2__ AddressIn; } ;
struct TYPE_13__ {int iiFlags; TYPE_6__ iiNetmask; TYPE_6__ iiBroadcastAddress; TYPE_6__ iiAddress; } ;
struct TYPE_12__ {int dwAddr; int wType; int dwBCastAddr; int dwMask; } ;
struct TYPE_11__ {int dwNumEntries; TYPE_4__* table; } ;
typedef scalar_t__ SOCKET ;
typedef TYPE_3__* PMIB_IPADDRTABLE ;
typedef TYPE_4__* PMIB_IPADDRROW ;
typedef TYPE_5__* LPINTERFACE_INFO ;
typedef int INTERFACE_INFO ;
typedef int INT ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (TYPE_3__**) ;
 int FUNC_5 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (scalar_t__,int ,int ,int ,int *,int,int*,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,char*,int,...) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char*,TYPE_6__) ;
 int VAR_14 ;

void FUNC_19()
{
    WSADATA VAR_15;
    INT VAR_16;
    SOCKET VAR_17;
    ULONG VAR_18, VAR_19, VAR_20;
    ULONG VAR_21, VAR_22, VAR_23, VAR_24;
    BYTE* VAR_25 = ((void*)0);
    LPINTERFACE_INFO VAR_26;
    PMIB_IPADDRTABLE VAR_27 = ((void*)0);
    PMIB_IPADDRROW VAR_28;



    if (!FUNC_4(&VAR_27))
        goto cleanup;


    VAR_16 = FUNC_9(FUNC_3(2, 2), &VAR_15);
    FUNC_13(VAR_16 == 0, "WSAStartup failed. iResult = %d\n", VAR_16);


    VAR_17 = FUNC_8(VAR_0, VAR_11, VAR_7, 0, 0, 0);
    FUNC_13(VAR_17 != VAR_6, "WSASocket failed. sck = %d\n", (INT)VAR_17);
    if (VAR_17 == VAR_6)
    {
        FUNC_16("Failed to create socket!\n");
        goto cleanup;
    }


    VAR_18 = sizeof(INTERFACE_INFO)-1;
    VAR_25 = (BYTE*)FUNC_1(FUNC_0(), 0, VAR_18);
    if (VAR_25 == ((void*)0))
    {
        FUNC_16("Failed to allocate memory!\n");
        goto cleanup;
    }
    VAR_19 = 0;
    VAR_16 = FUNC_7(VAR_17, VAR_10, 0, 0,
                       VAR_25, VAR_18, &VAR_19, 0, 0);
    FUNC_13(VAR_16 == -1, "WSAIoctl/SIO_GET_INTERFACE_LIST did not fail! iResult = %d.\n", VAR_16);
    FUNC_15(FUNC_6(), VAR_13);
    FUNC_13(VAR_19 == 0, "WSAIoctl/SIO_GET_INTERFACE_LIST: BytesReturned should be 0, not %ld.\n", VAR_19);
    FUNC_2(FUNC_0(), 0, VAR_25);
    VAR_25 = ((void*)0);





    VAR_22 = 0;
    while (VAR_12)
    {
        if (VAR_25 != ((void*)0))
        {
            FUNC_2(FUNC_0(), 0, VAR_25);
            VAR_25 = ((void*)0);
        }

        VAR_18 = sizeof(INTERFACE_INFO) * (VAR_22+1) * 32;
        VAR_25 = (BYTE*)FUNC_1(FUNC_0(), 0, VAR_18);
        if (VAR_25 == ((void*)0))
        {
            FUNC_16("Failed to allocate memory!\n");
            goto cleanup;
        }
        VAR_19 = 0;
        VAR_16 = FUNC_7(VAR_17, VAR_10, 0, 0,
                           VAR_25, VAR_18, &VAR_19, 0, 0);

        if (VAR_16 == VAR_9)
            break;


        if ((VAR_22 >= 4) || (FUNC_6() != VAR_13))
        {
            FUNC_15(VAR_16, VAR_9);
            FUNC_16("WSAIoctl / SIO_GET_INTERFACE_LIST\n");
            goto cleanup;
        }

        VAR_22++;
    }

    FUNC_14(VAR_19 % sizeof(INTERFACE_INFO), 0);


    VAR_21 = VAR_19 / sizeof(INTERFACE_INFO);
    FUNC_13(VAR_21 == VAR_27->dwNumEntries,
       "Wrong count of entries! Got %ld, expected %ld.\n", VAR_27->dwNumEntries, VAR_21);

    if (VAR_14 >= 2)
    {
        FUNC_17("WSAIoctl\n");
        FUNC_17("  BytesReturned %ld - InfoCount %ld\n ", VAR_19, VAR_21);
        VAR_26 = (LPINTERFACE_INFO)VAR_25;
        for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
        {
            FUNC_17("entry-index %ld\n", VAR_22);
            FUNC_17("  iiFlags %ld\n", VAR_26->iiFlags);
            FUNC_18("ifInfo^.iiAddress", VAR_26->iiAddress);
            FUNC_18("ifInfo^.iiBroadcastAddress", VAR_26->iiBroadcastAddress);
            FUNC_18("ifInfo^.iiNetmask", VAR_26->iiNetmask);
            VAR_26++;
        }
    }


    VAR_26 = (LPINTERFACE_INFO)VAR_25;
    for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
    {
        if (VAR_14 >= 2)
            FUNC_17("Entry %ld\n", VAR_22);
        for (VAR_23 = 0; VAR_23 < VAR_27->dwNumEntries; VAR_23++)
        {
            if (VAR_26[VAR_22].iiAddress.AddressIn.sin_addr.s_addr == VAR_27->table[VAR_23].dwAddr)
            {
                VAR_28 = &VAR_27->table[VAR_23];
                break;
            }
        }
        if (VAR_23 == VAR_27->dwNumEntries)
        {
            FUNC_16("Skipping interface\n");
            continue;
        }



        VAR_24 = VAR_1 | VAR_3;
        if ((VAR_28->wType & VAR_8) == 0)
            VAR_24 |= VAR_4;
        if (VAR_28->dwAddr == FUNC_12(VAR_5))
        {
            VAR_24 |= VAR_2;


        }

        FUNC_15(VAR_26[VAR_22].iiFlags, VAR_24);
        FUNC_15(VAR_26[VAR_22].iiAddress.AddressIn.sin_addr.s_addr, VAR_28->dwAddr);

        VAR_20 = (VAR_28->dwBCastAddr == 1 && (VAR_24 & VAR_1) != 0) ? 0xFFFFFFFF : 0x0;
        FUNC_15(VAR_26[VAR_22].iiBroadcastAddress.AddressIn.sin_addr.s_addr, VAR_20);
        FUNC_15(VAR_26[VAR_22].iiNetmask.AddressIn.sin_addr.s_addr, VAR_28->dwMask);
    }

cleanup:
    if (VAR_17 != 0)
        FUNC_10(VAR_17);
    if (VAR_27 != ((void*)0))
       FUNC_11(VAR_27);
    if (VAR_25 != ((void*)0))
       FUNC_2(FUNC_0(), 0, VAR_25);
    FUNC_5();
}
