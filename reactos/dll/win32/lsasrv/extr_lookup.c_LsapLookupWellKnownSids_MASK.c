
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef size_t ULONG ;
struct TYPE_19__ {int * Buffer; int MaximumLength; int Length; } ;
struct TYPE_18__ {size_t Entries; TYPE_1__* SidInfo; } ;
struct TYPE_17__ {scalar_t__ Use; size_t DomainIndex; TYPE_5__ Name; scalar_t__ Flags; } ;
struct TYPE_14__ {int MaximumLength; int Buffer; int Length; } ;
struct TYPE_16__ {scalar_t__ Use; int Sid; TYPE_11__ AccountName; int DomainName; } ;
struct TYPE_15__ {int Sid; } ;
typedef TYPE_2__* PWELL_KNOWN_SID ;
typedef int * PULONG ;
typedef TYPE_3__* PLSAPR_TRANSLATED_NAME_EX ;
typedef TYPE_4__* PLSAPR_SID_ENUM_BUFFER ;
typedef int PLSAPR_REFERENCED_DOMAIN_LIST ;
typedef int NTSTATUS ;
typedef TYPE_5__* LPWSTR ;


 int FUNC_0 (int ,TYPE_5__**) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,TYPE_11__*,int ,size_t*) ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char*,TYPE_5__*) ;

__attribute__((used)) static NTSTATUS
FUNC_9(PLSAPR_SID_ENUM_BUFFER VAR_3,
                        PLSAPR_TRANSLATED_NAME_EX VAR_4,
                        PLSAPR_REFERENCED_DOMAIN_LIST VAR_5,
                        PULONG VAR_6)
{
    PWELL_KNOWN_SID VAR_7, VAR_8;
    LPWSTR VAR_9 = ((void*)0);
    ULONG VAR_10;
    ULONG VAR_11;
    NTSTATUS VAR_12 = VAR_1;

    for (VAR_11 = 0; VAR_11 < VAR_3->Entries; VAR_11++)
    {

        if (VAR_4[VAR_11].Use != VAR_2)
            continue;

        FUNC_0(VAR_3->SidInfo[VAR_11].Sid, &VAR_9);
        FUNC_8("Mapping SID: %S\n", VAR_9);
        FUNC_1(VAR_9);
        VAR_9 = ((void*)0);

        VAR_7 = FUNC_4(VAR_3->SidInfo[VAR_11].Sid);
        if (VAR_7 != ((void*)0))
        {
            VAR_4[VAR_11].Use = VAR_7->Use;
            VAR_4[VAR_11].Flags = 0;

            VAR_4[VAR_11].Name.Length = VAR_7->AccountName.Length;
            VAR_4[VAR_11].Name.MaximumLength = VAR_7->AccountName.MaximumLength;
            VAR_4[VAR_11].Name.Buffer = FUNC_5(VAR_7->AccountName.MaximumLength);
            if (VAR_4[VAR_11].Name.Buffer == ((void*)0))
            {
                VAR_12 = VAR_0;
                goto done;
            }

            FUNC_7(VAR_4[VAR_11].Name.Buffer, VAR_7->AccountName.Buffer, VAR_7->AccountName.MaximumLength);

            VAR_8= FUNC_3(&VAR_7->DomainName);
            if (VAR_8 != ((void*)0))
            {
                VAR_12 = FUNC_2(VAR_5,
                                                    &VAR_8->AccountName,
                                                    VAR_8->Sid,
                                                    &VAR_10);
                if (!FUNC_6(VAR_12))
                    goto done;

                VAR_4[VAR_11].DomainIndex = VAR_10;
            }

            FUNC_8("Mapped to: %wZ\n", &VAR_4[VAR_11].Name);

            (*VAR_6)++;
        }
    }

done:
    return VAR_12;
}
