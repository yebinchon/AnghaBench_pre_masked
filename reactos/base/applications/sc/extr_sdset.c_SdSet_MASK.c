
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int * SC_HANDLE ;
typedef int * PSECURITY_DESCRIPTOR ;
typedef int LPCTSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int **,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int ,int ) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int ,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;

BOOL FUNC_10(LPCTSTR VAR_6, LPCTSTR VAR_7)
{
    SC_HANDLE VAR_8 = ((void*)0);
    SC_HANDLE VAR_9 = ((void*)0);
    BOOL VAR_10 = VAR_4;
    ULONG VAR_11 = 0;
    PSECURITY_DESCRIPTOR VAR_12 = ((void*)0);





    VAR_8 = FUNC_4(((void*)0),
                             ((void*)0),
                             VAR_2);
    if (VAR_8 == ((void*)0))
    {
        FUNC_9(FUNC_8("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_2());
        VAR_10 = VAR_1;
        goto done;
    }

    VAR_9 = FUNC_5(VAR_8, VAR_6, VAR_5);
    if (VAR_9 == ((void*)0))
    {
        FUNC_9(FUNC_8("[SC] OpenService FAILED %lu:\n\n"), FUNC_2());
        VAR_10 = VAR_1;
        goto done;
    }

    if (!FUNC_1(VAR_7,
                                                             VAR_3,
                                                             &VAR_12,
                                                             &VAR_11))
    {
        FUNC_9(FUNC_8("[SC] ConvertStringSecurityDescriptorToSecurityDescriptor FAILED %lu:\n\n"), FUNC_2());
        VAR_10 = VAR_1;
        goto done;
    }

    if (!FUNC_7(VAR_9,
                                  VAR_0,
                                  VAR_12))
    {
        FUNC_9(FUNC_8("[SC] SetServiceObjectSecurity FAILED %lu:\n\n"), FUNC_2());
        VAR_10 = VAR_1;
        goto done;
    }

done:
    if (VAR_10 == VAR_1)
        FUNC_6();

    if (VAR_12 != ((void*)0))
        FUNC_3(VAR_12);

    if (VAR_9)
        FUNC_0(VAR_9);

    if (VAR_8)
        FUNC_0(VAR_8);

    return VAR_10;
}
