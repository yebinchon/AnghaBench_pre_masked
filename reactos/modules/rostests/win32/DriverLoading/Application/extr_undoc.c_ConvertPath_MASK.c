
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_12__ {int Length; int Buffer; } ;
struct TYPE_13__ {TYPE_1__ Name; } ;
typedef TYPE_2__* POBJECT_NAME_INFORMATION ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_2__* LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,int ,int *,int ,int ,int *) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,TYPE_2__*,int) ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (scalar_t__,int ,TYPE_2__*,int,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (char*,int,char*) ;

BOOL
FUNC_9(LPCWSTR VAR_12,
            LPWSTR VAR_13)
{
    LPWSTR VAR_14 = ((void*)0);
    DWORD VAR_15;

    if (VAR_12)
    {
        VAR_15 = FUNC_2(VAR_12,
                                0,
                                0);
        if (!VAR_15)
            return VAR_1;

        VAR_15 = (VAR_15 + 1) * sizeof(WCHAR);

        VAR_14 = FUNC_4(FUNC_3(),
                               0,
                               VAR_15);
        if (!VAR_14)
            return VAR_1;

        if (FUNC_2(VAR_12,
                             VAR_14,
                             VAR_15))
        {
            HANDLE VAR_16;
            POBJECT_NAME_INFORMATION VAR_17;
            NTSTATUS VAR_18;
            DWORD VAR_19;

            VAR_16 = FUNC_0(VAR_14,
                                  VAR_3 | VAR_4,
                                  0,
                                  ((void*)0),
                                  VAR_7,
                                  VAR_2,
                                  ((void*)0));

            FUNC_5(FUNC_3(), 0, VAR_14);

            if(VAR_16 == VAR_5)
            {
                FUNC_8(L"[%x] Failed to open %s\n", FUNC_1(), VAR_0);
                return VAR_1;
            }

            VAR_15 = VAR_6 * sizeof(WCHAR);
            VAR_17 = FUNC_4(FUNC_3(), 0, VAR_15);
            if (!VAR_17)
                return VAR_1;

            VAR_18 = FUNC_6(VAR_16,
                                   VAR_8,
                                   VAR_17,
                                   VAR_15,
                                   &VAR_15);
            if (VAR_18 == VAR_9)
            {
                VAR_19 = VAR_17->Name.Length / sizeof(WCHAR);
                FUNC_7(VAR_13, VAR_17->Name.Buffer, VAR_19);
                VAR_13[VAR_19] = VAR_11;

                FUNC_5(FUNC_3(), 0, VAR_17);

                return VAR_10;
            }

            FUNC_5(FUNC_3(), 0, VAR_17);
        }
    }

    return VAR_1;
}
