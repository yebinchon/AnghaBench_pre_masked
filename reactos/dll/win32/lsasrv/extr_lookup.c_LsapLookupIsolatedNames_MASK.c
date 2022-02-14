
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef size_t ULONG ;
struct TYPE_11__ {scalar_t__ Use; int DomainIndex; scalar_t__ Flags; int * Sid; } ;
struct TYPE_10__ {scalar_t__ Length; } ;
struct TYPE_9__ {scalar_t__ Use; int * Sid; int AccountName; int DomainName; } ;
typedef TYPE_1__* PWELL_KNOWN_SID ;
typedef int * PUNICODE_STRING ;
typedef int * PULONG ;
typedef int * PSID ;
typedef TYPE_2__* PRPC_UNICODE_STRING ;
typedef TYPE_3__* PLSAPR_TRANSLATED_SID_EX2 ;
typedef int PLSAPR_REFERENCED_DOMAIN_LIST ;
typedef int NTSTATUS ;
typedef size_t DWORD ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *,size_t*) ;
 void* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char*,TYPE_2__*) ;
 int VAR_8 ;

__attribute__((used)) static
NTSTATUS
FUNC_9(DWORD VAR_9,
                        PRPC_UNICODE_STRING VAR_10,
                        PRPC_UNICODE_STRING VAR_11,
                        PLSAPR_REFERENCED_DOMAIN_LIST VAR_12,
                        PLSAPR_TRANSLATED_SID_EX2 VAR_13,
                        PULONG VAR_14)
{
    UNICODE_STRING VAR_15 = FUNC_6(L"");
    PWELL_KNOWN_SID VAR_16, VAR_17;
    PSID VAR_18;
    ULONG VAR_19;
    ULONG VAR_20;
    NTSTATUS VAR_21 = VAR_5;

    for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++)
    {

        if (VAR_13[VAR_20].Use != VAR_7)
            continue;


        if (VAR_10[VAR_20].Length != 0)
            continue;

        FUNC_8("Mapping name: %wZ\n", &VAR_11[VAR_20]);


        VAR_16 = FUNC_3((PUNICODE_STRING)&VAR_11[VAR_20]);
        if (VAR_16 != ((void*)0))
        {
            VAR_13[VAR_20].Use = VAR_16->Use;
            VAR_13[VAR_20].Sid = FUNC_2(VAR_16->Sid);
            if (VAR_13[VAR_20].Sid == ((void*)0))
            {
                VAR_21 = VAR_4;
                goto done;
            }

            VAR_13[VAR_20].DomainIndex = -1;
            VAR_13[VAR_20].Flags = 0;

            if (VAR_16->Use == VAR_6)
            {
                VAR_21 = FUNC_1(VAR_12,
                                                    &VAR_16->AccountName,
                                                    VAR_16->Sid,
                                                    &VAR_19);
                if (!FUNC_5(VAR_21))
                    goto done;

                VAR_13[VAR_20].DomainIndex = VAR_19;
            }
            else
            {
                VAR_17= FUNC_3(&VAR_16->DomainName);
                if (VAR_17 != ((void*)0))
                {
                    VAR_21 = FUNC_1(VAR_12,
                                                        &VAR_17->AccountName,
                                                        VAR_17->Sid,
                                                        &VAR_19);
                    if (!FUNC_5(VAR_21))
                        goto done;

                    VAR_13[VAR_20].DomainIndex = VAR_19;
                }
                else
                {
                    VAR_18 = FUNC_0(VAR_16->Sid);
                    if (VAR_18 == ((void*)0))
                    {
                        VAR_21 = VAR_4;
                        goto done;
                    }

                    VAR_21 = FUNC_1(VAR_12,
                                                        &VAR_15,
                                                        VAR_18,
                                                        &VAR_19);

                    if (VAR_18 != ((void*)0))
                    {
                        FUNC_4(VAR_18);
                        VAR_18 = ((void*)0);
                    }

                    if (!FUNC_5(VAR_21))
                        goto done;

                    VAR_13[VAR_20].DomainIndex = VAR_19;
                }
            }

            (*VAR_14)++;
            continue;
        }


        if (FUNC_7((PUNICODE_STRING)&VAR_11[VAR_20], &VAR_2, VAR_8))
        {
            VAR_13[VAR_20].Use = VAR_6;
            VAR_13[VAR_20].Sid = FUNC_2(VAR_3);
            if (VAR_13[VAR_20].Sid == ((void*)0))
            {
                VAR_21 = VAR_4;
                goto done;
            }

            VAR_13[VAR_20].DomainIndex = -1;
            VAR_13[VAR_20].Flags = 0;

            VAR_21 = FUNC_1(VAR_12,
                                                &VAR_2,
                                                VAR_3,
                                                &VAR_19);
            if (!FUNC_5(VAR_21))
                goto done;

            VAR_13[VAR_20].DomainIndex = VAR_19;

            (*VAR_14)++;
            continue;
        }


        if (FUNC_7((PUNICODE_STRING)&VAR_11[VAR_20], &VAR_0, VAR_8))
        {
            VAR_13[VAR_20].Use = VAR_6;
            VAR_13[VAR_20].Sid = FUNC_2(VAR_1);
            if (VAR_13[VAR_20].Sid == ((void*)0))
            {
                VAR_21 = VAR_4;
                goto done;
            }
            VAR_13[VAR_20].DomainIndex = -1;
            VAR_13[VAR_20].Flags = 0;

            VAR_21 = FUNC_1(VAR_12,
                                                &VAR_0,
                                                VAR_1,
                                                &VAR_19);
            if (!FUNC_5(VAR_21))
                goto done;

            VAR_13[VAR_20].DomainIndex = VAR_19;

            (*VAR_14)++;
            continue;
        }





    }

done:

    return VAR_21;
}
