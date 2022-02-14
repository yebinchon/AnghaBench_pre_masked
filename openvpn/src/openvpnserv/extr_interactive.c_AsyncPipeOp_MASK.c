
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ async_op_t ;
typedef int OVERLAPPED ;
typedef int LPVOID ;
typedef scalar_t__* LPHANDLE ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int *,int*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int *,int ,int *,int*,int *) ;
 int FUNC_6 (scalar_t__,int ,int,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int,scalar_t__*,int ,int ) ;
 int FUNC_8 (scalar_t__,int ,int,int *,int *) ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__* FUNC_10 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static DWORD
FUNC_11(async_op_t VAR_9, HANDLE VAR_10, LPVOID VAR_11, DWORD VAR_12, DWORD VAR_13, LPHANDLE VAR_14)
{
    DWORD VAR_15;
    BOOL VAR_16;
    HANDLE VAR_17;
    DWORD VAR_18, VAR_19 = 0;
    OVERLAPPED VAR_20;
    LPHANDLE VAR_21 = ((void*)0);

    VAR_17 = FUNC_4(&VAR_20);
    if (!VAR_17)
    {
        goto out;
    }

    VAR_21 = FUNC_10((VAR_13 + 1) * sizeof(HANDLE));
    if (!VAR_21)
    {
        goto out;
    }

    if (VAR_9 == VAR_8)
    {
        VAR_16 = FUNC_8(VAR_10, VAR_11, VAR_12, ((void*)0), &VAR_20);
    }
    else
    {
        VAR_16 = FUNC_6(VAR_10, VAR_11, VAR_12, ((void*)0), &VAR_20);
    }
    if (!VAR_16 && FUNC_2() != VAR_0 && FUNC_2() != VAR_1)
    {
        goto out;
    }

    VAR_21[0] = VAR_17;
    for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
    {
        VAR_21[VAR_15 + 1] = VAR_14[VAR_15];
    }

    VAR_18 = FUNC_7(VAR_13 + 1, VAR_21, VAR_2,
                                 VAR_9 == VAR_7 ? VAR_3 : VAR_4);
    if (VAR_18 != VAR_6)
    {
        FUNC_0(VAR_10);
        goto out;
    }

    if (VAR_9 == VAR_7)
    {
        FUNC_5(VAR_10, ((void*)0), 0, ((void*)0), &VAR_19, ((void*)0));
    }
    else
    {
        FUNC_3(VAR_10, &VAR_20, &VAR_19, VAR_5);
    }

out:
    FUNC_1(&VAR_17);
    FUNC_9(VAR_21);
    return VAR_19;
}
