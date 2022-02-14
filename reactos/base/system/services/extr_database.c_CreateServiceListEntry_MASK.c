
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dwServiceType; } ;
struct TYPE_9__ {int * lpImage; int * pSecurityDescriptor; TYPE_2__ Status; int bDeleted; scalar_t__ dwErrorControl; scalar_t__ dwTag; int dwStartType; TYPE_1__* lpGroup; int lpServiceName; int * lpDisplayName; } ;
struct TYPE_7__ {int lpGroupName; } ;
typedef TYPE_3__* PSERVICE ;
typedef int * LPWSTR ;
typedef int* LPCWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,char*,int *,int *,int ,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (int **) ;
 scalar_t__ FUNC_6 (int*,TYPE_3__**,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int **) ;
 scalar_t__ FUNC_10 (int ,char*,int **) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int VAR_7 ;

__attribute__((used)) static DWORD
FUNC_13(LPCWSTR VAR_8,
                       HKEY VAR_9)
{
    PSERVICE VAR_10 = ((void*)0);
    LPWSTR VAR_11 = ((void*)0);
    LPWSTR VAR_12 = ((void*)0);
    DWORD VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;
    DWORD VAR_16;
    DWORD VAR_17;
    DWORD VAR_18;

    FUNC_1("Service: '%S'\n", VAR_8);
    if (*VAR_8 == L'{')
        return VAR_0;

    VAR_13 = sizeof(DWORD);
    VAR_14 = FUNC_4(VAR_9,
                               L"Type",
                               ((void*)0),
                               ((void*)0),
                               (LPBYTE)&VAR_15,
                               &VAR_13);
    if (VAR_14 != VAR_0)
        return VAR_0;

    if (((VAR_15 & ~VAR_2) != VAR_5) &&
        ((VAR_15 & ~VAR_2) != VAR_6) &&
        (VAR_15 != VAR_3) &&
        (VAR_15 != VAR_1))
        return VAR_0;

    FUNC_1("Service type: %lx\n", VAR_15);

    VAR_13 = sizeof(DWORD);
    VAR_14 = FUNC_4(VAR_9,
                               L"Start",
                               ((void*)0),
                               ((void*)0),
                               (LPBYTE)&VAR_16,
                               &VAR_13);
    if (VAR_14 != VAR_0)
        return VAR_0;

    FUNC_1("Start type: %lx\n", VAR_16);

    VAR_13 = sizeof(DWORD);
    VAR_14 = FUNC_4(VAR_9,
                               L"ErrorControl",
                               ((void*)0),
                               ((void*)0),
                               (LPBYTE)&VAR_17,
                               &VAR_13);
    if (VAR_14 != VAR_0)
        return VAR_0;

    FUNC_1("Error control: %lx\n", VAR_17);

    VAR_14 = FUNC_4(VAR_9,
                               L"Tag",
                               ((void*)0),
                               ((void*)0),
                               (LPBYTE)&VAR_18,
                               &VAR_13);
    if (VAR_14 != VAR_0)
        VAR_18 = 0;

    FUNC_1("Tag: %lx\n", VAR_18);

    VAR_14 = FUNC_10(VAR_9,
                            L"Group",
                            &VAR_12);
    if (VAR_14 != VAR_0)
        VAR_12 = ((void*)0);

    FUNC_1("Group: %S\n", VAR_12);

    VAR_14 = FUNC_10(VAR_9,
                            L"DisplayName",
                            &VAR_11);
    if (VAR_14 != VAR_0)
        VAR_11 = ((void*)0);

    FUNC_1("Display name: %S\n", VAR_11);

    VAR_14 = FUNC_6(VAR_8,
                                        &VAR_10,
                                        VAR_15,
                                        VAR_16);
    if (VAR_14 != VAR_0)
        goto done;

    VAR_10->dwErrorControl = VAR_17;
    VAR_10->dwTag = VAR_18;

    if (VAR_12 != ((void*)0))
    {
        VAR_14 = FUNC_11(VAR_10, VAR_12);
        if (VAR_14 != VAR_0)
            goto done;
    }

    if (VAR_11 != ((void*)0))
    {
        VAR_10->lpDisplayName = VAR_11;
        VAR_11 = ((void*)0);
    }

    FUNC_1("ServiceName: '%S'\n", VAR_10->lpServiceName);
    if (VAR_10->lpGroup != ((void*)0))
    {
        FUNC_1("Group: '%S'\n", VAR_10->lpGroup->lpGroupName);
    }
    FUNC_1("Start %lx  Type %lx  Tag %lx  ErrorControl %lx\n",
           VAR_10->dwStartType,
           VAR_10->Status.dwServiceType,
           VAR_10->dwTag,
           VAR_10->dwErrorControl);

    if (FUNC_8(VAR_9))
        VAR_10->bDeleted = VAR_7;
    else
        FUNC_7(VAR_10);

    if (VAR_10->Status.dwServiceType & VAR_4)
    {
        VAR_14 = FUNC_9(VAR_9,
                                            &VAR_10->pSecurityDescriptor);
        if (VAR_14 != VAR_0)
            goto done;


        if (VAR_10->pSecurityDescriptor == ((void*)0))
        {
            FUNC_1("No security descriptor found! Assign default security descriptor!\n");
            VAR_14 = FUNC_5(&VAR_10->pSecurityDescriptor);
            if (VAR_14 != VAR_0)
                goto done;

            VAR_14 = FUNC_12(VAR_9,
                                                 VAR_10->pSecurityDescriptor);
            if (VAR_14 != VAR_0)
                goto done;
        }
    }

done:
    if (VAR_12 != ((void*)0))
        FUNC_3(FUNC_2(), 0, VAR_12);

    if (VAR_11 != ((void*)0))
        FUNC_3(FUNC_2(), 0, VAR_11);

    if (VAR_10 != ((void*)0))
    {
        FUNC_0(VAR_10->lpImage == ((void*)0));
    }

    return VAR_14;
}
