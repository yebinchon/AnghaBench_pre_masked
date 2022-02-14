
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;
typedef int * PSECURITY_DESCRIPTOR ;
typedef int * LPTSTR ;
typedef int * LPCTSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int **,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *,int ) ;
 int * FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int ,int *,int,int*) ;
 int VAR_3 ;
 int FUNC_10 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int *) ;

BOOL FUNC_14(LPCTSTR VAR_7)
{
    SC_HANDLE VAR_8 = ((void*)0);
    SC_HANDLE VAR_9 = ((void*)0);
    BOOL VAR_10 = VAR_6;
    DWORD VAR_11 = 0;
    PSECURITY_DESCRIPTOR VAR_12 = ((void*)0);
    LPTSTR VAR_13 = ((void*)0);





    VAR_8 = FUNC_7(((void*)0),
                             ((void*)0),
                             VAR_4);
    if (VAR_8 == ((void*)0))
    {
        FUNC_13(FUNC_12("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_2());
        VAR_10 = VAR_2;
        goto done;
    }

    VAR_9 = FUNC_8(VAR_8, VAR_7, VAR_3);
    if (VAR_9 == ((void*)0))
    {
        FUNC_13(FUNC_12("[SC] OpenService FAILED %lu:\n\n"), FUNC_2());
        VAR_10 = VAR_2;
        goto done;
    }

    if (!FUNC_9(VAR_9,
                                    VAR_0,
                                    (PSECURITY_DESCRIPTOR)&VAR_12,
                                    sizeof(PSECURITY_DESCRIPTOR),
                                    &VAR_11))
    {
        if (VAR_11 == 0)
        {
            FUNC_13(FUNC_12("[SC] QueryServiceObjectSecurity FAILED %lu:\n\n"), FUNC_2());
            VAR_10 = VAR_2;
            goto done;
        }
    }

    VAR_12 = FUNC_4(FUNC_3(), 0, VAR_11);
    if (VAR_12 == ((void*)0))
    {
        FUNC_11(VAR_1);
        FUNC_13(FUNC_12("[SC] HeapAlloc FAILED %lu:\n\n"), FUNC_2());
        VAR_10 = VAR_2;
        goto done;
    }

    if (!FUNC_9(VAR_9,
                                    VAR_0,
                                    VAR_12,
                                    VAR_11,
                                    &VAR_11))
    {
        FUNC_13(FUNC_12("[SC] QueryServiceObjectSecurity FAILED %lu:\n\n"), FUNC_2());
        VAR_10 = VAR_2;
        goto done;
    }

    if (!FUNC_1(VAR_12,
                                                             VAR_5,
                                                             VAR_0,
                                                             &VAR_13,
                                                             ((void*)0)))
    {
        FUNC_13(FUNC_12("[SC] ConvertSecurityDescriptorToStringSecurityDescriptor FAILED %lu:\n\n"), FUNC_2());
        VAR_10 = VAR_2;
        goto done;
    }

    FUNC_13(FUNC_12("\n%s\n"), VAR_13);

done:
    if (VAR_10 == VAR_2)
        FUNC_10();

    if (VAR_13 != ((void*)0))
        FUNC_6(VAR_13);

    if (VAR_12 != ((void*)0))
        FUNC_5(FUNC_3(), 0, VAR_12);

    if (VAR_9)
        FUNC_0(VAR_9);

    if (VAR_8)
        FUNC_0(VAR_8);

    return VAR_10;
}
