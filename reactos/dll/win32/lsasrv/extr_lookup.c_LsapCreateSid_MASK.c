
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WELL_KNOWN_SID ;
typedef int WCHAR ;
typedef size_t ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_11__ {int Length; int MaximumLength; TYPE_3__* Buffer; } ;
struct TYPE_10__ {int Length; int MaximumLength; TYPE_3__* Buffer; } ;
struct TYPE_12__ {struct TYPE_12__* Sid; int ListEntry; int Use; TYPE_2__ DomainName; TYPE_1__ AccountName; } ;
typedef int SID_NAME_USE ;
typedef int PWSTR ;
typedef TYPE_3__* PWELL_KNOWN_SID ;
typedef int * PULONG ;
typedef int PSID_IDENTIFIER_AUTHORITY ;
typedef TYPE_3__* PSID ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int * FUNC_7 (TYPE_3__*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int ) ;

BOOLEAN
FUNC_10(PSID_IDENTIFIER_AUTHORITY VAR_4,
              UCHAR VAR_5,
              PULONG VAR_6,
              PWSTR VAR_7,
              PWSTR VAR_8,
              SID_NAME_USE VAR_9,
              PSID *VAR_10)
{
    PWELL_KNOWN_SID VAR_11;
    PULONG VAR_12;
    ULONG VAR_13;

    VAR_11 = FUNC_2(FUNC_4(), VAR_1, sizeof(WELL_KNOWN_SID));
    if (VAR_11 == ((void*)0))
        return VAR_0;

    FUNC_0(&VAR_11->ListEntry);

    VAR_11->Sid = FUNC_2(FUNC_4(),
                                    0,
                                    FUNC_6(VAR_5));
    if (VAR_11->Sid == ((void*)0))
    {
        FUNC_3(FUNC_4(), 0, VAR_11);
        return VAR_0;
    }

    FUNC_5(VAR_11->Sid,
                     VAR_4,
                     VAR_5);

    for (VAR_13 = 0; VAR_13 < (ULONG)VAR_5; VAR_13++)
    {
        VAR_12 = FUNC_7(VAR_11->Sid, VAR_13);
        *VAR_12 = VAR_6[VAR_13];
    }



    VAR_11->AccountName.Length = FUNC_9(VAR_7) * sizeof(WCHAR);
    VAR_11->AccountName.MaximumLength = VAR_11->AccountName.Length + sizeof(WCHAR);
    VAR_11->AccountName.Buffer = FUNC_2(FUNC_4(), 0,
                                                   VAR_11->AccountName.MaximumLength);
    if (VAR_11->AccountName.Buffer == ((void*)0))
    {
        FUNC_3(FUNC_4(), 0, VAR_11->Sid);
        FUNC_3(FUNC_4(), 0, VAR_11);
        return VAR_0;
    }

    FUNC_8(VAR_11->AccountName.Buffer,
           VAR_7);



    VAR_11->DomainName.Length = FUNC_9(VAR_8) * sizeof(WCHAR);
    VAR_11->DomainName.MaximumLength = VAR_11->DomainName.Length + sizeof(WCHAR);
    VAR_11->DomainName.Buffer = FUNC_2(FUNC_4(), 0,
                                                  VAR_11->DomainName.MaximumLength);
    if (VAR_11->DomainName.Buffer == ((void*)0))
    {
        FUNC_3(FUNC_4(), 0, VAR_11->AccountName.Buffer);
        FUNC_3(FUNC_4(), 0, VAR_11->Sid);
        FUNC_3(FUNC_4(), 0, VAR_11);
        return VAR_0;
    }

    FUNC_8(VAR_11->DomainName.Buffer,
           VAR_8);

    VAR_11->Use = VAR_9;

    FUNC_1(&VAR_3,
                   &VAR_11->ListEntry);

    if (VAR_10 != ((void*)0))
        *VAR_10 = VAR_11->Sid;

    return VAR_2;
}
