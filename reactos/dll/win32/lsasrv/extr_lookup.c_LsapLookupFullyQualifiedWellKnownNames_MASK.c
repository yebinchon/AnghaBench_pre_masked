
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef size_t ULONG ;
struct TYPE_17__ {scalar_t__ Use; int DomainIndex; scalar_t__ Flags; int * Sid; } ;
struct TYPE_16__ {scalar_t__ Use; int * Sid; TYPE_1__ AccountName; TYPE_1__ DomainName; } ;
typedef TYPE_2__* PWELL_KNOWN_SID ;
typedef int PUNICODE_STRING ;
typedef int * PULONG ;
typedef int * PSID ;
typedef TYPE_1__* PRPC_UNICODE_STRING ;
typedef TYPE_4__* PLSAPR_TRANSLATED_SID_EX2 ;
typedef int PLSAPR_REFERENCED_DOMAIN_LIST ;
typedef int NTSTATUS ;
typedef size_t DWORD ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*,int *,size_t*) ;
 int * FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_1__ FUNC_7 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (char*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_9(DWORD VAR_4,
                                       PRPC_UNICODE_STRING VAR_5,
                                       PRPC_UNICODE_STRING VAR_6,
                                       PLSAPR_REFERENCED_DOMAIN_LIST VAR_7,
                                       PLSAPR_TRANSLATED_SID_EX2 VAR_8,
                                       PULONG VAR_9)
{
    UNICODE_STRING VAR_10 = FUNC_7(L"");
    PWELL_KNOWN_SID VAR_11, VAR_12;
    PSID VAR_13;
    ULONG VAR_14;
    ULONG VAR_15;
    NTSTATUS VAR_16 = VAR_1;

    for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
    {

        if (VAR_8[VAR_15].Use != VAR_3)
            continue;


        if (VAR_5[VAR_15].Length == 0)
            continue;

        FUNC_8("Mapping name: %wZ\\%wZ\n", &VAR_5[VAR_15], &VAR_6[VAR_15]);


        VAR_11 = FUNC_3((PUNICODE_STRING)&VAR_6[VAR_15],
                                                    (PUNICODE_STRING)&VAR_5[VAR_15]);
        if (VAR_11 != ((void*)0))
        {
            FUNC_8("Found it! (%wZ\\%wZ)\n", &VAR_11->DomainName, &VAR_11->AccountName);

            VAR_8[VAR_15].Use = VAR_11->Use;
            VAR_8[VAR_15].Sid = FUNC_2(VAR_11->Sid);
            if (VAR_8[VAR_15].Sid == ((void*)0))
            {
                VAR_16 = VAR_0;
                goto done;
            }

            VAR_8[VAR_15].DomainIndex = -1;
            VAR_8[VAR_15].Flags = 0;

            if (VAR_11->Use == VAR_2)
            {
                VAR_16 = FUNC_1(VAR_7,
                                                    &VAR_11->AccountName,
                                                    VAR_11->Sid,
                                                    &VAR_14);
                if (!FUNC_6(VAR_16))
                    goto done;

                VAR_8[VAR_15].DomainIndex = VAR_14;
            }
            else
            {
                VAR_12= FUNC_4(&VAR_11->DomainName);
                if (VAR_12 != ((void*)0))
                {
                    VAR_16 = FUNC_1(VAR_7,
                                                        &VAR_12->AccountName,
                                                        VAR_12->Sid,
                                                        &VAR_14);
                    if (!FUNC_6(VAR_16))
                        goto done;

                    VAR_8[VAR_15].DomainIndex = VAR_14;
                }
                else
                {
                    VAR_13 = FUNC_0(VAR_11->Sid);
                    if (VAR_13 == ((void*)0))
                    {
                        VAR_16 = VAR_0;
                        goto done;
                    }

                    VAR_16 = FUNC_1(VAR_7,
                                                        &VAR_10,
                                                        VAR_13,
                                                        &VAR_14);

                    if (VAR_13 != ((void*)0))
                    {
                        FUNC_5(VAR_13);
                        VAR_13 = ((void*)0);
                    }

                    if (!FUNC_6(VAR_16))
                        goto done;

                    VAR_8[VAR_15].DomainIndex = VAR_14;
                }
            }

            (*VAR_9)++;
            continue;
        }
    }

done:
    return VAR_16;
}
