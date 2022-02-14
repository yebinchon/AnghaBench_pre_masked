
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_22__ {int Entries; } ;
struct TYPE_21__ {size_t Entries; TYPE_2__* Names; } ;
struct TYPE_19__ {int * Buffer; scalar_t__ MaximumLength; scalar_t__ Length; } ;
struct TYPE_20__ {int MaxEntries; int DomainIndex; struct TYPE_20__* Domains; scalar_t__ Flags; TYPE_1__ Name; int Use; scalar_t__ Entries; } ;
typedef TYPE_2__* PLSAPR_TRANSLATED_NAME_EX ;
typedef TYPE_3__* PLSAPR_TRANSLATED_NAMES_EX ;
typedef TYPE_4__* PLSAPR_SID_ENUM_BUFFER ;
typedef TYPE_2__* PLSAPR_REFERENCED_DOMAIN_LIST ;
typedef scalar_t__ NTSTATUS ;
typedef int LSA_TRUST_INFORMATION ;
typedef int LSAP_LOOKUP_LEVEL ;
typedef int LSAPR_TRANSLATED_NAME_EX ;
typedef int LSAPR_REFERENCED_DOMAIN_LIST ;
typedef size_t DWORD ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_2__*,TYPE_2__*,size_t*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_2__*,TYPE_2__*,size_t*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_2__*,TYPE_2__*,size_t*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,scalar_t__,size_t) ;

NTSTATUS
FUNC_7(PLSAPR_SID_ENUM_BUFFER VAR_5,
               PLSAPR_REFERENCED_DOMAIN_LIST *VAR_6,
               PLSAPR_TRANSLATED_NAMES_EX VAR_7,
               LSAP_LOOKUP_LEVEL VAR_8,
               DWORD *VAR_9,
               DWORD VAR_10,
               DWORD VAR_11)
{
    PLSAPR_REFERENCED_DOMAIN_LIST VAR_12 = ((void*)0);
    PLSAPR_TRANSLATED_NAME_EX VAR_13 = ((void*)0);
    ULONG VAR_14;
    ULONG VAR_15;
    ULONG VAR_16 = 0;
    NTSTATUS VAR_17 = VAR_3;

    VAR_14 = VAR_5->Entries * sizeof(LSAPR_TRANSLATED_NAME_EX);
    VAR_13 = FUNC_3(VAR_14);
    if (VAR_13 == ((void*)0))
    {
        VAR_17 = VAR_0;
        goto done;
    }

    VAR_12 = FUNC_3(sizeof(LSAPR_REFERENCED_DOMAIN_LIST));
    if (VAR_12 == ((void*)0))
    {
        VAR_17 = VAR_0;
        goto done;
    }

    VAR_12->Domains = FUNC_3(VAR_5->Entries * sizeof(LSA_TRUST_INFORMATION));
    if (VAR_12->Domains == ((void*)0))
    {
        VAR_17 = VAR_0;
        goto done;
    }

    VAR_12->Entries = 0;
    VAR_12->MaxEntries = VAR_5->Entries;


    for (VAR_15 = 0; VAR_15 < VAR_5->Entries; VAR_15++)
    {
        VAR_13[VAR_15].Use = VAR_4;
        VAR_13[VAR_15].Name.Length = 0;
        VAR_13[VAR_15].Name.MaximumLength = 0;
        VAR_13[VAR_15].Name.Buffer = ((void*)0);
        VAR_13[VAR_15].DomainIndex = -1;
        VAR_13[VAR_15].Flags = 0;
    }


    VAR_17 = FUNC_2(VAR_5,
                                     VAR_13,
                                     VAR_12,
                                     &VAR_16);
    if (!FUNC_5(VAR_17) &&
        VAR_17 != VAR_1 &&
        VAR_17 != VAR_2)
        goto done;

    if (VAR_16 == VAR_5->Entries)
        goto done;


    VAR_17 = FUNC_1(VAR_5,
                                         VAR_13,
                                         VAR_12,
                                         &VAR_16);
    if (!FUNC_5(VAR_17) &&
        VAR_17 != VAR_1 &&
        VAR_17 != VAR_2)
        goto done;

    if (VAR_16 == VAR_5->Entries)
        goto done;


    VAR_17 = FUNC_0(VAR_5,
                                         VAR_13,
                                         VAR_12,
                                         &VAR_16);
    if (!FUNC_5(VAR_17) &&
        VAR_17 != VAR_1 &&
        VAR_17 != VAR_2)
        goto done;

    if (VAR_16 == VAR_5->Entries)
        goto done;

done:
    FUNC_6("done Status: %lx  Mapped: %lu\n", VAR_17, VAR_16);

    if (!FUNC_5(VAR_17))
    {
        if (VAR_12 != ((void*)0))
        {
            if (VAR_12->Domains != ((void*)0))
                FUNC_4(VAR_12->Domains);

            FUNC_4(VAR_12);
        }

        if (VAR_13 != ((void*)0))
            FUNC_4(VAR_13);
    }
    else
    {
        *VAR_6 = VAR_12;
        VAR_7->Entries = VAR_5->Entries;
        VAR_7->Names = VAR_13;
        *VAR_9 = VAR_16;

        if (VAR_16 == 0)
            VAR_17 = VAR_1;
        else if (VAR_16 < VAR_5->Entries)
            VAR_17 = VAR_2;
    }

    return VAR_17;
}
