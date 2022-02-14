
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_14__ {scalar_t__ Use; int DomainIndex; scalar_t__ Flags; int * Sid; } ;
struct TYPE_13__ {scalar_t__ Length; } ;
struct TYPE_12__ {scalar_t__* Element; int * member_1; int member_0; } ;
typedef TYPE_1__ SAMPR_ULONG_ARRAY ;
typedef int * SAMPR_HANDLE ;
typedef int PUNICODE_STRING ;
typedef int * PULONG ;
typedef TYPE_2__* PRPC_UNICODE_STRING ;
typedef TYPE_3__* PLSAPR_TRANSLATED_SID_EX2 ;
typedef int PLSAPR_REFERENCED_DOMAIN_LIST ;
typedef int NTSTATUS ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,size_t*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int **,int) ;
 int FUNC_7 (int *,int,TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (int *,int ,int ,int **) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (char*,TYPE_2__*,...) ;
 int VAR_8 ;

__attribute__((used)) static
NTSTATUS
FUNC_10(DWORD VAR_9,
                       PRPC_UNICODE_STRING VAR_10,
                       PRPC_UNICODE_STRING VAR_11,
                       PLSAPR_REFERENCED_DOMAIN_LIST VAR_12,
                       PLSAPR_TRANSLATED_SID_EX2 VAR_13,
                       PULONG VAR_14)
{
    SAMPR_HANDLE VAR_15 = ((void*)0);
    SAMPR_HANDLE VAR_16 = ((void*)0);
    SAMPR_ULONG_ARRAY VAR_17 = {0, ((void*)0)};
    SAMPR_ULONG_ARRAY VAR_18 = {0, ((void*)0)};
    ULONG VAR_19;
    ULONG VAR_20;
    NTSTATUS VAR_21 = VAR_6;

    VAR_21 = FUNC_6(((void*)0),
                         &VAR_15,
                         VAR_3 | VAR_4);
    if (!FUNC_2(VAR_21))
    {
        FUNC_9("SamrConnect failed (Status %08lx)\n", VAR_21);
        goto done;
    }

    VAR_21 = FUNC_8(VAR_15,
                            VAR_2,
                            VAR_1,
                            &VAR_16);
    if (!FUNC_2(VAR_21))
    {
        FUNC_9("SamOpenDomain failed (Status %08lx)\n", VAR_21);
        goto done;
    }

    for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++)
    {

        if (VAR_13[VAR_20].Use != VAR_7)
            continue;


        if (VAR_10[VAR_20].Length == 0)
            continue;

        if (!FUNC_3((PUNICODE_STRING)&VAR_10[VAR_20], &VAR_0, VAR_8))
            continue;

        FUNC_9("Mapping name: %wZ\\%wZ\n", &VAR_10[VAR_20], &VAR_11[VAR_20]);

        VAR_21 = FUNC_7(VAR_16,
                                         1,
                                         &VAR_11[VAR_20],
                                         &VAR_17,
                                         &VAR_18);
        if (FUNC_2(VAR_21))
        {
            VAR_13[VAR_20].Use = VAR_18.Element[0];
            VAR_13[VAR_20].Sid = FUNC_0(VAR_1,
                                                       VAR_17.Element[0]);
            if (VAR_13[VAR_20].Sid == ((void*)0))
            {
                VAR_21 = VAR_5;
                goto done;
            }

            VAR_13[VAR_20].DomainIndex = -1;
            VAR_13[VAR_20].Flags = 0;

            VAR_21 = FUNC_1(VAR_12,
                                                &VAR_0,
                                                VAR_1,
                                                &VAR_19);
            if (!FUNC_2(VAR_21))
                goto done;

            VAR_13[VAR_20].DomainIndex = VAR_19;

            (*VAR_14)++;
        }

        FUNC_4(&VAR_17);
        FUNC_4(&VAR_18);
    }

done:
    if (VAR_16 != ((void*)0))
        FUNC_5(&VAR_16);

    if (VAR_15 != ((void*)0))
        FUNC_5(&VAR_15);

    return VAR_21;
}
