
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_23__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_34__ {int * Buffer; int MaximumLength; int Length; } ;
struct TYPE_33__ {size_t Entries; TYPE_1__* SidInfo; } ;
struct TYPE_32__ {scalar_t__ Use; size_t DomainIndex; TYPE_7__ Name; scalar_t__ Flags; } ;
struct TYPE_31__ {TYPE_2__* Element; int * member_1; int member_0; } ;
struct TYPE_30__ {scalar_t__* Element; int * member_1; int member_0; } ;
struct TYPE_29__ {int MaximumLength; int Buffer; int Length; } ;
struct TYPE_28__ {int MaximumLength; int Buffer; int Length; } ;
struct TYPE_27__ {int Sid; } ;
typedef TYPE_3__ SAMPR_ULONG_ARRAY ;
typedef TYPE_4__ SAMPR_RETURNED_USTRING_ARRAY ;
typedef int * SAMPR_HANDLE ;
typedef int * PULONG ;
typedef TYPE_5__* PLSAPR_TRANSLATED_NAME_EX ;
typedef TYPE_6__* PLSAPR_SID_ENUM_BUFFER ;
typedef int PLSAPR_REFERENCED_DOMAIN_LIST ;
typedef TYPE_7__* NTSTATUS ;
typedef TYPE_7__* LPWSTR ;


 TYPE_23__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_7__**) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_7__*) ;
 TYPE_7__* FUNC_2 (int ,TYPE_23__*,int ,size_t*) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_7__* VAR_5 ;
 TYPE_7__* VAR_6 ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int **) ;
 TYPE_7__* FUNC_12 (int *,int **,int) ;
 TYPE_7__* FUNC_13 (int *,int,size_t*,TYPE_4__*,TYPE_3__*) ;
 TYPE_7__* FUNC_14 (int *,int ,int ,int **) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_15 (char*,...) ;

__attribute__((used)) static NTSTATUS
FUNC_16(PLSAPR_SID_ENUM_BUFFER VAR_9,
                            PLSAPR_TRANSLATED_NAME_EX VAR_10,
                            PLSAPR_REFERENCED_DOMAIN_LIST VAR_11,
                            PULONG VAR_12)
{
    SAMPR_HANDLE VAR_13 = ((void*)0);
    SAMPR_HANDLE VAR_14 = ((void*)0);
    SAMPR_RETURNED_USTRING_ARRAY VAR_15 = {0, ((void*)0)};
    SAMPR_ULONG_ARRAY VAR_16 = {0, ((void*)0)};
    LPWSTR VAR_17 = ((void*)0);
    ULONG VAR_18;
    ULONG VAR_19[1];
    ULONG VAR_20;
    NTSTATUS VAR_21 = VAR_6;

    VAR_21 = FUNC_12(((void*)0),
                         &VAR_13,
                         VAR_3 | VAR_4);
    if (!FUNC_6(VAR_21))
    {
        FUNC_15("SamrConnect failed (Status %08lx)\n", VAR_21);
        goto done;
    }

    VAR_21 = FUNC_14(VAR_13,
                            VAR_2,
                            VAR_1,
                            &VAR_14);
    if (!FUNC_6(VAR_21))
    {
        FUNC_15("SamOpenDomain failed (Status %08lx)\n", VAR_21);
        goto done;
    }

    for (VAR_20 = 0; VAR_20 < VAR_9->Entries; VAR_20++)
    {

        if (VAR_10[VAR_20].Use != VAR_8)
            continue;

        FUNC_0(VAR_9->SidInfo[VAR_20].Sid, &VAR_17);
        FUNC_15("Mapping SID: %S\n", VAR_17);
        FUNC_1(VAR_17);
        VAR_17 = ((void*)0);

        if (FUNC_8(VAR_1, VAR_9->SidInfo[VAR_20].Sid))
        {
            FUNC_15("Found builtin domain!\n");

            VAR_10[VAR_20].Use = VAR_7;
            VAR_10[VAR_20].Flags = 0;

            VAR_10[VAR_20].Name.Length = VAR_0.Length;
            VAR_10[VAR_20].Name.MaximumLength = VAR_0.MaximumLength;
            VAR_10[VAR_20].Name.Buffer = FUNC_5(VAR_0.MaximumLength);
            if (VAR_10[VAR_20].Name.Buffer == ((void*)0))
            {
                VAR_21 = VAR_5;
                goto done;
            }

            FUNC_7(VAR_10[VAR_20].Name.Buffer, VAR_0.Buffer, VAR_0.MaximumLength);

            VAR_21 = FUNC_2(VAR_11,
                                                &VAR_0,
                                                VAR_1,
                                                &VAR_18);
            if (!FUNC_6(VAR_21))
                goto done;

            VAR_10[VAR_20].DomainIndex = VAR_18;

            FUNC_15("Mapped to: %wZ\n", &VAR_10[VAR_20].Name);

            (*VAR_12)++;
        }
        else if (FUNC_4(VAR_1, VAR_9->SidInfo[VAR_20].Sid))
        {
            FUNC_15("Found builtin domain account!\n");

            VAR_19[0] = FUNC_3(VAR_9->SidInfo[VAR_20].Sid);

            VAR_21 = FUNC_13(VAR_14,
                                           1,
                                           VAR_19,
                                           &VAR_15,
                                           &VAR_16);
            if (FUNC_6(VAR_21))
            {
                VAR_10[VAR_20].Use = VAR_16.Element[0];
                VAR_10[VAR_20].Flags = 0;

                VAR_10[VAR_20].Name.Length = VAR_15.Element[0].Length;
                VAR_10[VAR_20].Name.MaximumLength = VAR_15.Element[0].MaximumLength;
                VAR_10[VAR_20].Name.Buffer = FUNC_5(VAR_15.Element[0].MaximumLength);
                if (VAR_10[VAR_20].Name.Buffer == ((void*)0))
                {
                    FUNC_9(&VAR_15);
                    FUNC_10(&VAR_16);

                    VAR_21 = VAR_5;
                    goto done;
                }

                FUNC_7(VAR_10[VAR_20].Name.Buffer,
                              VAR_15.Element[0].Buffer,
                              VAR_15.Element[0].MaximumLength);

                FUNC_9(&VAR_15);
                FUNC_10(&VAR_16);

                VAR_21 = FUNC_2(VAR_11,
                                                    &VAR_0,
                                                    VAR_1,
                                                    &VAR_18);
                if (!FUNC_6(VAR_21))
                    goto done;

                VAR_10[VAR_20].DomainIndex = VAR_18;

                FUNC_15("Mapped to: %wZ\n", &VAR_10[VAR_20].Name);

                (*VAR_12)++;
            }
        }
    }

done:
    if (VAR_14 != ((void*)0))
        FUNC_11(&VAR_14);

    if (VAR_13 != ((void*)0))
        FUNC_11(&VAR_13);

    return VAR_21;
}
