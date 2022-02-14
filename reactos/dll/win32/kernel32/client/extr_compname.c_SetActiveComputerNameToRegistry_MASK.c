
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef scalar_t__ LPCWSTR ;
typedef int * HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,int ,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *,int *,int ,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,scalar_t__) ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static
BOOL
FUNC_10(LPCWSTR VAR_7,
                                LPCWSTR VAR_8,
                                LPCWSTR VAR_9,
                                LPCWSTR VAR_10)
{
    OBJECT_ATTRIBUTES VAR_11;
    UNICODE_STRING VAR_12;
    UNICODE_STRING VAR_13;
    HANDLE VAR_14, VAR_15;
    SIZE_T VAR_16;
    ULONG VAR_17;
    NTSTATUS VAR_18;

    VAR_16 = FUNC_9(VAR_10);
    if (VAR_16 > ((VAR_2 / sizeof(WCHAR)) - 1))
    {
        return VAR_0;
    }

    FUNC_8(&VAR_12, VAR_7);
    FUNC_1(&VAR_11,
                               &VAR_12,
                               VAR_3,
                               ((void*)0),
                               ((void*)0));

    VAR_18 = FUNC_6(&VAR_14,
                       VAR_1,
                       &VAR_11);
    if (!FUNC_2(VAR_18))
    {
        FUNC_0(VAR_18);
        return VAR_0;
    }

    FUNC_8(&VAR_12, VAR_8);
    FUNC_1(&VAR_11,
                               &VAR_12,
                               VAR_3,
                               VAR_14,
                               ((void*)0));

    VAR_18 = FUNC_4(&VAR_15,
                         VAR_1,
                         &VAR_11,
                         0,
                         ((void*)0),
                         VAR_4,
                         &VAR_17);
    if (!FUNC_2(VAR_18))
    {
        FUNC_3(VAR_14);
        FUNC_0(VAR_18);
        return VAR_0;
    }

    FUNC_8(&VAR_13, VAR_9);

    VAR_18 = FUNC_7(VAR_15,
                           &VAR_13,
                           0,
                           VAR_5,
                           (PVOID)VAR_10,
                           (VAR_16 + 1) * sizeof(WCHAR));
    if (!FUNC_2(VAR_18))
    {
        FUNC_3(VAR_15);
        FUNC_3(VAR_14);
        FUNC_0(VAR_18);
        return VAR_0;
    }

    FUNC_5(VAR_15);
    FUNC_3(VAR_15);
    FUNC_3(VAR_14);

    return VAR_6;
}
