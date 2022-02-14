
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
typedef char* ULONG ;
struct TYPE_2__ {int Version; char* GroupId; scalar_t__ Attributes; scalar_t__ Reserved; } ;
typedef TYPE_1__ SAM_GROUP_FIXED_DATA ;
typedef int * PSECURITY_DESCRIPTOR ;
typedef int NTSTATUS ;
typedef int LPVOID ;
typedef char* LPCWSTR ;
typedef int * HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int **,char**) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int *,int ,int **) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char*,int ,int **) ;
 int FUNC_8 (int *,char*,int ,int ,...) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static
NTSTATUS
FUNC_11(HANDLE VAR_4,
                            LPCWSTR VAR_5,
                            LPCWSTR VAR_6,
                            ULONG VAR_7)
{
    SAM_GROUP_FIXED_DATA VAR_8;
    WCHAR VAR_9[32];
    HANDLE VAR_10 = ((void*)0);
    HANDLE VAR_11 = ((void*)0);
    PSECURITY_DESCRIPTOR VAR_12 = ((void*)0);
    ULONG VAR_13 = 0;
    NTSTATUS VAR_14;


    VAR_8.Version = 1;
    VAR_8.Reserved = 0;
    VAR_8.GroupId = VAR_7;
    VAR_8.Attributes = 0;

    FUNC_9(VAR_9, L"Groups\\%08lX", VAR_7);

    VAR_14 = FUNC_5(VAR_4,
                              VAR_9,
                              VAR_0,
                              &VAR_10);
    if (!FUNC_0(VAR_14))
        return VAR_14;

    VAR_14 = FUNC_8(VAR_10,
                             L"F",
                             VAR_1,
                             (LPVOID)&VAR_8,
                             sizeof(SAM_GROUP_FIXED_DATA));
    if (!FUNC_0(VAR_14))
        goto done;

    VAR_14 = FUNC_8(VAR_10,
                             L"Name",
                             VAR_3,
                             (LPVOID)VAR_5,
                             (FUNC_10(VAR_5) + 1) * sizeof(WCHAR));
    if (!FUNC_0(VAR_14))
        goto done;

    VAR_14 = FUNC_8(VAR_10,
                             L"AdminComment",
                             VAR_3,
                             (LPVOID)VAR_6,
                             (FUNC_10(VAR_6) + 1) * sizeof(WCHAR));
    if (!FUNC_0(VAR_14))
        goto done;


    VAR_14 = FUNC_3(&VAR_12,
                               &VAR_13);
    if (!FUNC_0(VAR_14))
        goto done;


    VAR_14 = FUNC_8(VAR_10,
                             L"SecDesc",
                             VAR_1,
                             *VAR_12,
                             VAR_13);
    if (!FUNC_0(VAR_14))
        goto done;

    VAR_14 = FUNC_7(VAR_4,
                            L"Groups\\Names",
                            VAR_0,
                            &VAR_11);
    if (!FUNC_0(VAR_14))
        goto done;

    VAR_14 = FUNC_8(VAR_11,
                            VAR_5,
                            VAR_2,
                            (LPVOID)&VAR_7,
                            sizeof(ULONG));

done:
    FUNC_4(&VAR_11);

    if (VAR_12 != ((void*)0))
        FUNC_1(FUNC_2(), 0, VAR_12);

    if (VAR_10 != ((void*)0))
    {
        FUNC_4(&VAR_10);

        if (!FUNC_0(VAR_14))
            FUNC_6(VAR_4,
                             VAR_9);
    }

    return VAR_14;
}
