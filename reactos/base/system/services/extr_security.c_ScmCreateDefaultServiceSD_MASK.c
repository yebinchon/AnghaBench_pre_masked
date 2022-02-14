
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PSECURITY_DESCRIPTOR ;
typedef scalar_t__ NTSTATUS ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__*) ;
 int * FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

DWORD
FUNC_7(
    PSECURITY_DESCRIPTOR *VAR_5)
{
    PSECURITY_DESCRIPTOR VAR_6 = ((void*)0);
    DWORD VAR_7 = 0;
    NTSTATUS VAR_8;
    DWORD VAR_9 = VAR_1;


    VAR_8 = FUNC_2(VAR_4,
                                         ((void*)0),
                                         &VAR_7);
    if (VAR_8 != VAR_3)
    {
        VAR_9 = FUNC_6(VAR_8);
        goto done;
    }

    FUNC_0("BufferLength %lu\n", VAR_7);

    VAR_6 = FUNC_3(FUNC_5(),
                                  VAR_2,
                                  VAR_7);
    if (VAR_6 == ((void*)0))
    {
        VAR_9 = VAR_0;
        goto done;
    }
    FUNC_0("pRelativeSD %p\n", VAR_6);

    VAR_8 = FUNC_2(VAR_4,
                                         VAR_6,
                                         &VAR_7);
    if (!FUNC_1(VAR_8))
    {
        VAR_9 = FUNC_6(VAR_8);
        goto done;
    }

    *VAR_5 = VAR_6;

done:
    if (VAR_9 != VAR_1)
    {
        if (VAR_6 != ((void*)0))
            FUNC_4(FUNC_5(), 0, VAR_6);
    }

    return VAR_9;
}
