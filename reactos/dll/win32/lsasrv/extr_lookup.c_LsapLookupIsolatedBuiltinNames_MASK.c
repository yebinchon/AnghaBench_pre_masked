
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_23__ {scalar_t__ Use; int DomainIndex; scalar_t__ Flags; int * Sid; } ;
struct TYPE_22__ {scalar_t__ Length; } ;
struct TYPE_21__ {scalar_t__* Element; int * member_1; int member_0; } ;
typedef TYPE_1__ SAMPR_ULONG_ARRAY ;
typedef int * SAMPR_HANDLE ;
typedef int * PULONG ;
typedef TYPE_2__* PRPC_UNICODE_STRING ;
typedef TYPE_3__* PLSAPR_TRANSLATED_SID_EX2 ;
typedef int PLSAPR_REFERENCED_DOMAIN_LIST ;
typedef TYPE_2__* NTSTATUS ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,scalar_t__) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ,int *,int ,size_t*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int **) ;
 TYPE_2__* FUNC_5 (int *,int **,int) ;
 TYPE_2__* FUNC_6 (int *,int,TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 TYPE_2__* FUNC_7 (int *,int ,int ,int **) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char*,TYPE_2__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_9(DWORD VAR_8,
                               PRPC_UNICODE_STRING VAR_9,
                               PRPC_UNICODE_STRING VAR_10,
                               PLSAPR_REFERENCED_DOMAIN_LIST VAR_11,
                               PLSAPR_TRANSLATED_SID_EX2 VAR_12,
                               PULONG VAR_13)
{
    SAMPR_HANDLE VAR_14 = ((void*)0);
    SAMPR_HANDLE VAR_15 = ((void*)0);
    SAMPR_ULONG_ARRAY VAR_16 = {0, ((void*)0)};
    SAMPR_ULONG_ARRAY VAR_17 = {0, ((void*)0)};
    ULONG VAR_18;
    ULONG VAR_19;
    NTSTATUS VAR_20 = VAR_6;

    VAR_20 = FUNC_5(((void*)0),
                         &VAR_14,
                         VAR_3 | VAR_4);
    if (!FUNC_2(VAR_20))
    {
        FUNC_8("SamrConnect failed (Status %08lx)\n", VAR_20);
        goto done;
    }

    VAR_20 = FUNC_7(VAR_14,
                            VAR_2,
                            VAR_1,
                            &VAR_15);
    if (!FUNC_2(VAR_20))
    {
        FUNC_8("SamOpenDomain failed (Status %08lx)\n", VAR_20);
        goto done;
    }

    for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++)
    {

        if (VAR_12[VAR_19].Use != VAR_7)
            continue;


        if (VAR_9[VAR_19].Length != 0)
            continue;

        FUNC_8("Mapping name: %wZ\n", &VAR_10[VAR_19]);

        VAR_20 = FUNC_6(VAR_15,
                                         1,
                                         &VAR_10[VAR_19],
                                         &VAR_16,
                                         &VAR_17);
        if (FUNC_2(VAR_20))
        {
            FUNC_8("Found relative ID: %lu\n", VAR_16.Element[0]);

            VAR_12[VAR_19].Use = VAR_17.Element[0];
            VAR_12[VAR_19].Sid = FUNC_0(VAR_1,
                                                       VAR_16.Element[0]);
            if (VAR_12[VAR_19].Sid == ((void*)0))
            {
                VAR_20 = VAR_5;
                goto done;
            }

            VAR_12[VAR_19].DomainIndex = -1;
            VAR_12[VAR_19].Flags = 0;

            VAR_20 = FUNC_1(VAR_11,
                                                &VAR_0,
                                                VAR_1,
                                                &VAR_18);
            if (!FUNC_2(VAR_20))
                goto done;

            VAR_12[VAR_19].DomainIndex = VAR_18;

            (*VAR_13)++;
        }

        FUNC_3(&VAR_16);
        FUNC_3(&VAR_17);
    }

done:
    if (VAR_15 != ((void*)0))
        FUNC_4(&VAR_15);

    if (VAR_14 != ((void*)0))
        FUNC_4(&VAR_14);

    return VAR_20;
}
