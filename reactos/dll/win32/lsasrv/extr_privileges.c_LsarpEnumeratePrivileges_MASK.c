
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
typedef int UNICODE_NULL ;
typedef size_t ULONG ;
struct TYPE_12__ {size_t Name; int Luid; } ;
struct TYPE_9__ {int Length; int MaximumLength; TYPE_3__* Buffer; } ;
struct TYPE_11__ {TYPE_1__ Name; int LocalValue; } ;
struct TYPE_10__ {size_t Entries; TYPE_3__* Privileges; } ;
typedef TYPE_2__* PLSAPR_PRIVILEGE_ENUM_BUFFER ;
typedef TYPE_3__* PLSAPR_POLICY_PRIVILEGE_DEF ;
typedef scalar_t__ NTSTATUS ;
typedef int LSAPR_POLICY_PRIVILEGE_DEF ;
typedef size_t DWORD ;
typedef scalar_t__ BOOLEAN ;


 size_t FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,size_t) ;
 scalar_t__ VAR_4 ;
 TYPE_5__* VAR_5 ;
 int FUNC_5 (TYPE_3__*,size_t,int) ;
 int FUNC_6 (size_t) ;

NTSTATUS
FUNC_7(DWORD *VAR_6,
                         PLSAPR_PRIVILEGE_ENUM_BUFFER VAR_7,
                         DWORD VAR_8)
{
    PLSAPR_POLICY_PRIVILEGE_DEF VAR_9 = ((void*)0);
    ULONG VAR_10;
    ULONG VAR_11 = 0;
    ULONG VAR_12 = 0;
    ULONG VAR_13;
    BOOLEAN VAR_14 = VAR_0;
    NTSTATUS VAR_15 = VAR_3;

    VAR_10 = *VAR_6;

    for (; VAR_10 < FUNC_0(VAR_5); VAR_10++)
    {
        FUNC_4("EnumIndex: %lu\n", VAR_10);
        FUNC_4("Privilege Name: %S\n", VAR_5[VAR_10].Name);
        FUNC_4("Name Length: %lu\n", FUNC_6(VAR_5[VAR_10].Name));

        if ((VAR_12 +
             FUNC_6(VAR_5[VAR_10].Name) * sizeof(WCHAR) +
             sizeof(UNICODE_NULL) +
             sizeof(LSAPR_POLICY_PRIVILEGE_DEF)) > VAR_8)
        {
            VAR_14 = VAR_4;
            break;
        }

        VAR_12 += (FUNC_6(VAR_5[VAR_10].Name) * sizeof(WCHAR) +
                           sizeof(UNICODE_NULL) + sizeof(LSAPR_POLICY_PRIVILEGE_DEF));
        VAR_11++;
    }

    FUNC_4("EnumCount: %lu\n", VAR_11);
    FUNC_4("RequiredLength: %lu\n", VAR_12);

    if (VAR_11 == 0)
        goto done;

    VAR_9 = FUNC_1(VAR_11 * sizeof(LSAPR_POLICY_PRIVILEGE_DEF));
    if (VAR_9 == ((void*)0))
    {
        VAR_15 = VAR_1;
        goto done;
    }

    VAR_10 = *VAR_6;

    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++, VAR_10++)
    {
        VAR_9[VAR_13].LocalValue = VAR_5[VAR_10].Luid;

        VAR_9[VAR_13].Name.Length = (USHORT)FUNC_6(VAR_5[VAR_10].Name) * sizeof(WCHAR);
        VAR_9[VAR_13].Name.MaximumLength = (USHORT)VAR_9[VAR_13].Name.Length + sizeof(UNICODE_NULL);

        VAR_9[VAR_13].Name.Buffer = FUNC_1(VAR_9[VAR_13].Name.MaximumLength);
        if (VAR_9[VAR_13].Name.Buffer == ((void*)0))
        {
            VAR_15 = VAR_1;
            goto done;
        }

        FUNC_5(VAR_9[VAR_13].Name.Buffer,
               VAR_5[VAR_10].Name,
               VAR_9[VAR_13].Name.Length);
    }

done:
    if (FUNC_3(VAR_15))
    {
        VAR_7->Entries = VAR_11;
        VAR_7->Privileges = VAR_9;
        *VAR_6 += VAR_11;
    }
    else
    {
        if (VAR_9 != ((void*)0))
        {
            for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
            {
                if (VAR_9[VAR_13].Name.Buffer != ((void*)0))
                    FUNC_2(VAR_9[VAR_13].Name.Buffer);
            }

            FUNC_2(VAR_9);
        }
    }

    if ((VAR_15 == VAR_3) && (VAR_14 != VAR_0))
        VAR_15 = VAR_2;

    return VAR_15;
}
