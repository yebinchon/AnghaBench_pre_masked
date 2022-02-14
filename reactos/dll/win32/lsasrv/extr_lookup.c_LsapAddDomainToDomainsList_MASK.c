
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_10__ {size_t Entries; TYPE_2__* Domains; } ;
struct TYPE_9__ {int MaximumLength; int Buffer; int Length; } ;
struct TYPE_7__ {int * Buffer; int MaximumLength; int Length; } ;
struct TYPE_8__ {TYPE_1__ Name; int * Sid; } ;
typedef TYPE_3__* PUNICODE_STRING ;
typedef size_t* PULONG ;
typedef int PSID ;
typedef TYPE_4__* PLSAPR_REFERENCED_DOMAIN_LIST ;
typedef int NTSTATUS ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static NTSTATUS
FUNC_6(PLSAPR_REFERENCED_DOMAIN_LIST VAR_2,
                           PUNICODE_STRING VAR_3,
                           PSID VAR_4,
                           PULONG VAR_5)
{
    ULONG VAR_6;

    VAR_6 = 0;
    while (VAR_6 < VAR_2->Entries &&
           VAR_2->Domains[VAR_6].Sid != ((void*)0))
    {
        if (FUNC_4(VAR_4, VAR_2->Domains[VAR_6].Sid))
        {
            *VAR_5 = VAR_6;
            return VAR_1;
        }

        VAR_6++;
    }

    VAR_2->Domains[VAR_6].Sid = FUNC_0(FUNC_5(VAR_4));
    if (VAR_2->Domains[VAR_6].Sid == ((void*)0))
        return VAR_0;

    FUNC_3(FUNC_5(VAR_4), VAR_2->Domains[VAR_6].Sid, VAR_4);

    VAR_2->Domains[VAR_6].Name.Length = VAR_3->Length;
    VAR_2->Domains[VAR_6].Name.MaximumLength = VAR_3->MaximumLength;
    VAR_2->Domains[VAR_6].Name.Buffer = FUNC_0(VAR_3->MaximumLength);
    if (VAR_2->Domains[VAR_6].Name.Buffer == ((void*)0))
    {
        FUNC_1(VAR_2->Domains[VAR_6].Sid);
        VAR_2->Domains[VAR_6].Sid = ((void*)0);
        return VAR_0;
    }

    FUNC_2(VAR_2->Domains[VAR_6].Name.Buffer,
                  VAR_3->Buffer,
                  VAR_3->MaximumLength);

    VAR_2->Entries++;
    *VAR_5 = VAR_6;

    return VAR_1;
}
