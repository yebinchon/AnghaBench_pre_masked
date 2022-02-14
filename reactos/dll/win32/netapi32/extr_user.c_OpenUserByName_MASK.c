
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int SAM_HANDLE ;
typedef int PUNICODE_STRING ;
typedef scalar_t__* PULONG ;
typedef scalar_t__* PSID_NAME_USE ;
typedef int PSAM_HANDLE ;
typedef int NTSTATUS ;
typedef int NET_API_STATUS ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int ,int,int ,scalar_t__**,scalar_t__**) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static
NET_API_STATUS
FUNC_6(SAM_HANDLE VAR_4,
               PUNICODE_STRING VAR_5,
               ULONG VAR_6,
               PSAM_HANDLE VAR_7)
{
    PULONG VAR_8 = ((void*)0);
    PSID_NAME_USE VAR_9 = ((void*)0);
    NET_API_STATUS VAR_10 = VAR_1;
    NTSTATUS VAR_11 = VAR_2;


    VAR_11 = FUNC_4(VAR_4,
                                    1,
                                    VAR_5,
                                    &VAR_8,
                                    &VAR_9);
    if (!FUNC_1(VAR_11))
    {
        FUNC_0("SamLookupNamesInDomain failed (Status %08lx)\n", VAR_11);
        return FUNC_2(VAR_11);
    }


    if (VAR_9[0] != VAR_3)
    {
        FUNC_0("Object is not a user!\n");
        VAR_10 = VAR_0;
        goto done;
    }


    VAR_11 = FUNC_5(VAR_4,
                         VAR_6,
                         VAR_8[0],
                         VAR_7);
    if (!FUNC_1(VAR_11))
    {
        FUNC_0("SamOpenUser failed (Status %08lx)\n", VAR_11);
        VAR_10 = FUNC_2(VAR_11);
        goto done;
    }

done:
    if (VAR_8 != ((void*)0))
        FUNC_3(VAR_8);

    if (VAR_9 != ((void*)0))
        FUNC_3(VAR_9);

    return VAR_10;
}
