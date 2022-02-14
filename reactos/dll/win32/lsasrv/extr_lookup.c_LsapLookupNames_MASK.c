
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_37__ {int Entries; TYPE_1__* Sids; } ;
struct TYPE_36__ {int MaxEntries; int DomainIndex; struct TYPE_36__* Domains; struct TYPE_36__* Buffer; scalar_t__ Flags; int * Sid; int Use; scalar_t__ Entries; } ;
typedef TYPE_1__* PRPC_UNICODE_STRING ;
typedef TYPE_1__* PLSAPR_TRANSLATED_SID_EX2 ;
typedef TYPE_3__* PLSAPR_TRANSLATED_SIDS_EX2 ;
typedef TYPE_1__* PLSAPR_REFERENCED_DOMAIN_LIST ;
typedef scalar_t__ NTSTATUS ;
typedef int LSA_TRUST_INFORMATION ;
typedef int LSAP_LOOKUP_LEVEL ;
typedef int LSAPR_TRANSLATED_SID_EX2 ;
typedef int LSAPR_REFERENCED_DOMAIN_LIST ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int*) ;
 scalar_t__ FUNC_1 (int,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int*) ;
 scalar_t__ FUNC_2 (int,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int*) ;
 scalar_t__ FUNC_3 (int,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int*) ;
 scalar_t__ FUNC_4 (int,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int*) ;
 scalar_t__ FUNC_5 (int,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int*) ;
 scalar_t__ FUNC_6 (int,TYPE_1__*,TYPE_1__**,TYPE_1__**) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (char*,scalar_t__) ;

NTSTATUS
FUNC_11(DWORD VAR_5,
                PRPC_UNICODE_STRING VAR_6,
                PLSAPR_REFERENCED_DOMAIN_LIST *VAR_7,
                PLSAPR_TRANSLATED_SIDS_EX2 VAR_8,
                LSAP_LOOKUP_LEVEL VAR_9,
                DWORD *VAR_10,
                DWORD VAR_11,
                DWORD VAR_12)
{
    PLSAPR_REFERENCED_DOMAIN_LIST VAR_13 = ((void*)0);
    PLSAPR_TRANSLATED_SID_EX2 VAR_14 = ((void*)0);
    PRPC_UNICODE_STRING VAR_15 = ((void*)0);
    PRPC_UNICODE_STRING VAR_16 = ((void*)0);
    ULONG VAR_17;
    ULONG VAR_18;
    ULONG VAR_19 = 0;
    NTSTATUS VAR_20 = VAR_3;



    VAR_8->Entries = 0;
    VAR_8->Sids = ((void*)0);
    *VAR_7 = ((void*)0);

    VAR_17 = VAR_5 * sizeof(LSAPR_TRANSLATED_SID_EX2);
    VAR_14 = FUNC_7(VAR_17);
    if (VAR_14 == ((void*)0))
    {

        VAR_20 = VAR_0;
        goto done;
    }

    VAR_13 = FUNC_7(sizeof(LSAPR_REFERENCED_DOMAIN_LIST));
    if (VAR_13 == ((void*)0))
    {

        VAR_20 = VAR_0;
        goto done;
    }

    VAR_13->Domains = FUNC_7(VAR_5 * sizeof(LSA_TRUST_INFORMATION));
    if (VAR_13->Domains == ((void*)0))
    {

        VAR_20 = VAR_0;
        goto done;
    }
    VAR_13->Entries = 0;
    VAR_13->MaxEntries = VAR_5;

    for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++)
    {
        VAR_14[VAR_18].Use = VAR_4;
        VAR_14[VAR_18].Sid = ((void*)0);
        VAR_14[VAR_18].DomainIndex = -1;
        VAR_14[VAR_18].Flags = 0;
    }

    VAR_20 = FUNC_6(VAR_5,
                            VAR_6,
                            &VAR_15,
                            &VAR_16);
    if (!FUNC_9(VAR_20))
    {
        FUNC_10("LsapSplitNames failed! (Status %lx)\n", VAR_20);
        goto done;
    }


    VAR_20 = FUNC_5(VAR_5,
                                     VAR_15,
                                     VAR_16,
                                     VAR_13,
                                     VAR_14,
                                     &VAR_19);
    if (!FUNC_9(VAR_20) &&
        VAR_20 != VAR_1 &&
        VAR_20 != VAR_2)
    {
        FUNC_10("LsapLookupIsolatedNames failed! (Status %lx)\n", VAR_20);
        goto done;
    }

    if (VAR_19 == VAR_5)
        goto done;


    VAR_20 = FUNC_4(VAR_5,
                                            VAR_15,
                                            VAR_16,
                                            VAR_13,
                                            VAR_14,
                                            &VAR_19);
    if (!FUNC_9(VAR_20) &&
        VAR_20 != VAR_1 &&
        VAR_20 != VAR_2)
    {
        FUNC_10("LsapLookupIsolatedBuiltinNames failed! (Status %lx)\n", VAR_20);
        goto done;
    }

    if (VAR_19 == VAR_5)
        goto done;


    VAR_20 = FUNC_3(VAR_5,
                                            VAR_15,
                                            VAR_16,
                                            VAR_13,
                                            VAR_14,
                                            &VAR_19);
    if (!FUNC_9(VAR_20) &&
        VAR_20 != VAR_1 &&
        VAR_20 != VAR_2)
    {
        FUNC_10("LsapLookupIsolatedAccountNames failed! (Status %lx)\n", VAR_20);
        goto done;
    }

    if (VAR_19 == VAR_5)
        goto done;

    VAR_20 = FUNC_2(VAR_5,
                                                    VAR_15,
                                                    VAR_16,
                                                    VAR_13,
                                                    VAR_14,
                                                    &VAR_19);
    if (!FUNC_9(VAR_20) &&
        VAR_20 != VAR_1 &&
        VAR_20 != VAR_2)
    {
        FUNC_10("LsapLookupFullyQualifiedWellKnownNames failed! (Status %lx)\n", VAR_20);
        goto done;
    }

    if (VAR_19 == VAR_5)
        goto done;

    VAR_20 = FUNC_1(VAR_5,
                                    VAR_15,
                                    VAR_16,
                                    VAR_13,
                                    VAR_14,
                                    &VAR_19);
    if (!FUNC_9(VAR_20) &&
        VAR_20 != VAR_1 &&
        VAR_20 != VAR_2)
    {
        FUNC_10("LsapLookupBuiltinNames failed! (Status %lx)\n", VAR_20);
        goto done;
    }

    if (VAR_19 == VAR_5)
        goto done;


    VAR_20 = FUNC_0(VAR_5,
                                    VAR_15,
                                    VAR_16,
                                    VAR_13,
                                    VAR_14,
                                    &VAR_19);
    if (!FUNC_9(VAR_20) &&
        VAR_20 != VAR_1 &&
        VAR_20 != VAR_2)
    {
        FUNC_10("LsapLookupAccountNames failed! (Status %lx)\n", VAR_20);
        goto done;
    }

    if (VAR_19 == VAR_5)
        goto done;

done:


    if (VAR_15 != ((void*)0))
    {

        for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++)
        {
            if (VAR_15[VAR_18].Buffer != ((void*)0))
                FUNC_8(VAR_15[VAR_18].Buffer);
        }

        FUNC_8(VAR_15);
    }

    if (VAR_16 != ((void*)0))
    {

        for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++)
        {

            if (VAR_16[VAR_18].Buffer != ((void*)0))
            {
                FUNC_8(VAR_16[VAR_18].Buffer);
            }
        }

        FUNC_8(VAR_16);
    }

    if (!FUNC_9(VAR_20))
    {



        if (VAR_13 != ((void*)0))
        {
            if (VAR_13->Domains != ((void*)0))
                FUNC_8(VAR_13->Domains);

            FUNC_8(VAR_13);
        }


        if (VAR_14 != ((void*)0))
            FUNC_8(VAR_14);
    }
    else
    {


        *VAR_7 = VAR_13;
        VAR_8->Entries = VAR_5;
        VAR_8->Sids = VAR_14;
        *VAR_10 = VAR_19;

        if (VAR_19 == 0)
            VAR_20 = VAR_1;
        else if (VAR_19 < VAR_5)
            VAR_20 = VAR_2;
    }



    return VAR_20;
}
