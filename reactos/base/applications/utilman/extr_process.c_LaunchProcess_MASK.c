
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int si ;
typedef int pi ;
typedef int WCHAR ;
struct TYPE_6__ {int cb; int hThread; int hProcess; int wShowWindow; int dwFlags; } ;
typedef TYPE_1__ STARTUPINFOW ;
typedef TYPE_1__ PROCESS_INFORMATION ;
typedef int LPCWSTR ;
typedef int HANDLE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *,int *,scalar_t__,int ,int *,int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int ,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (TYPE_1__*,int) ;

BOOL FUNC_10(LPCWSTR VAR_10)
{
    STARTUPINFOW VAR_11;
    PROCESS_INFORMATION VAR_12;
    HANDLE VAR_13, VAR_14;
    BOOL VAR_15;
    WCHAR VAR_16[VAR_1];


    FUNC_5(VAR_10, VAR_16, FUNC_0(VAR_16));

    FUNC_9(&VAR_12, sizeof(VAR_12));
    FUNC_9(&VAR_11, sizeof(VAR_11));
    VAR_11.cb = sizeof(VAR_11);
    VAR_11.dwFlags = VAR_2;
    VAR_11.wShowWindow = VAR_3;


    VAR_15 = FUNC_8(FUNC_6(), VAR_7 | VAR_6, &VAR_13);
    if (!VAR_15)
    {
        FUNC_3("OpenProcessToken() failed with error -> %lu\n", FUNC_7());
        return VAR_0;
    }


    VAR_15 = FUNC_4(VAR_13, VAR_5, ((void*)0), VAR_4, VAR_9, &VAR_14);
    if (!VAR_15)
    {
        FUNC_3("DuplicateTokenEx() failed with error -> %lu\n", FUNC_7());
        FUNC_1(VAR_13);
        return VAR_0;
    }


    VAR_15 = FUNC_2(VAR_14,
                                    ((void*)0),
                                    VAR_16,
                                    ((void*)0),
                                    ((void*)0),
                                    VAR_0,
                                    0,
                                    ((void*)0),
                                    ((void*)0),
                                    &VAR_11,
                                    &VAR_12);

    if (!VAR_15)
    {
        FUNC_3("CreateProcessAsUserW() failed with error -> %lu\n", FUNC_7());
        FUNC_1(VAR_13);
        FUNC_1(VAR_14);
        return VAR_0;
    }

    FUNC_1(VAR_12.hProcess);
    FUNC_1(VAR_12.hThread);
    FUNC_1(VAR_13);
    FUNC_1(VAR_14);
    return VAR_8;
}
