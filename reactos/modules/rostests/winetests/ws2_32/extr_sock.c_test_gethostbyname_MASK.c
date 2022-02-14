
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addr_list; } ;
typedef int name ;
struct TYPE_11__ {char* String; } ;
struct TYPE_12__ {TYPE_2__ IpAddress; } ;
struct TYPE_13__ {int dwNumEntries; scalar_t__ Index; TYPE_3__ IpAddressList; TYPE_1__* table; struct TYPE_13__* Next; } ;
struct TYPE_10__ {scalar_t__ dwForwardIfIndex; scalar_t__ dwForwardDest; } ;
typedef TYPE_4__* PMIB_IPFORWARDTABLE ;
typedef TYPE_4__* PIP_ADAPTER_INFO ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_4__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 struct hostent* FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 (struct in_addr) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_4__*,int *,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    struct hostent *VAR_5;
    struct in_addr **VAR_6;
    char VAR_7[256], VAR_8[16];
    int VAR_9, VAR_10, VAR_11;
    PMIB_IPFORWARDTABLE VAR_12 = ((void*)0);
    PIP_ADAPTER_INFO VAR_13 = ((void*)0), VAR_14;
    DWORD VAR_15 = 0, VAR_16 = 0;
    BOOL VAR_17 = VAR_2;
    BOOL VAR_18 = VAR_2;

    VAR_9 = FUNC_5(VAR_7, sizeof(VAR_7));
    FUNC_7(VAR_9 == 0, "gethostname() call failed: %d\n", FUNC_3());

    VAR_5 = FUNC_4(VAR_7);
    FUNC_7(VAR_5 != ((void*)0), "gethostbyname(\"%s\") failed: %d\n", VAR_7, FUNC_3());




        VAR_6 = (struct in_addr **)VAR_5->h_addr_list;
        FUNC_12(VAR_8, FUNC_6(*VAR_6[0]));

        FUNC_13("List of local IPs:\n");
        for(VAR_11 = 0; VAR_6[VAR_11] != ((void*)0); VAR_11++)
        {
            char *VAR_19 = FUNC_6(*VAR_6[VAR_11]);
            if (!FUNC_11(VAR_19, "127.0.0.1"))
                VAR_18 = VAR_4;
            FUNC_13("%s\n", VAR_19);
        }




    if (VAR_18)
    {
        FUNC_7 (VAR_11 == 1, "expected 127.0.0.1 to be the only IP returned\n");
        FUNC_10("Only the loopback address is present, skipping tests\n");
        return;
    }

    if (!&FUNC_8 || !&FUNC_9)
    {
        FUNC_14("GetAdaptersInfo and/or GetIpForwardTable not found, skipping tests\n");
        return;
    }

    VAR_9 = FUNC_8(((void*)0), &VAR_15);
    FUNC_7 (VAR_9 == VAR_0, "GetAdaptersInfo failed with a different error: %d\n", VAR_9);
    VAR_9 = FUNC_9(((void*)0), &VAR_16, VAR_2);
    FUNC_7 (VAR_9 == VAR_1, "GetIpForwardTable failed with a different error: %d\n", VAR_9);

    VAR_13 = FUNC_1(FUNC_0(), 0, VAR_15);
    VAR_12 = FUNC_1(FUNC_0(), 0, VAR_16);

    VAR_9 = FUNC_8(VAR_13, &VAR_15);
    FUNC_7 (VAR_9 == VAR_3, "GetAdaptersInfo failed, error: %d\n", VAR_9);
    VAR_9 = FUNC_9(VAR_12, &VAR_16, VAR_2);
    FUNC_7 (VAR_9 == VAR_3, "GetIpForwardTable failed, error: %d\n", VAR_9);


    if (VAR_13->Next == ((void*)0) && VAR_11 == 1)
    {
        FUNC_10("Only one IP is present, skipping tests\n");
        goto cleanup;
    }

    for (VAR_10 = 0; !VAR_17 && VAR_10 < VAR_12->dwNumEntries; VAR_10++)
    {

        if (VAR_12->table[VAR_10].dwForwardDest) continue;

        for (VAR_14 = VAR_13; VAR_14 != ((void*)0); VAR_14 = VAR_14->Next)
        {
            char *VAR_20;

            if (VAR_14->Index != VAR_12->table[VAR_10].dwForwardIfIndex) continue;


            VAR_20 = VAR_14->IpAddressList.IpAddress.String;
            if (!FUNC_11(VAR_8, VAR_20))
            {
                VAR_17 = VAR_4;
                break;
            }
        }
    }
    FUNC_7 (VAR_17, "failed to find the first IP from gethostbyname!\n");

cleanup:
    FUNC_2(FUNC_0(), 0, VAR_13);
    FUNC_2(FUNC_0(), 0, VAR_12);
}
