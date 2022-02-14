
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;
typedef int LPCTSTR ;
typedef int LPBYTE ;
typedef int ENUM_SERVICE_STATUS_PROCESS ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int ,int ,int *,int *,int *,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int * FUNC_6 (int *,int *,int ) ;
 int FUNC_7 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
DWORD
FUNC_8(ENUM_SERVICE_STATUS_PROCESS **VAR_3,
             DWORD VAR_4,
             DWORD VAR_5,
             DWORD VAR_6,
             DWORD VAR_7,
             LPCTSTR VAR_8)
{
    SC_HANDLE VAR_9;
    DWORD VAR_10 = 0;
    DWORD VAR_11 = VAR_7;
    DWORD VAR_12 = 0;
    BOOL VAR_13;

    VAR_9 = FUNC_6(((void*)0),
                               ((void*)0),
                               VAR_2);
    if (VAR_9 == ((void*)0))
    {
        FUNC_7();
        return 0;
    }

    if (VAR_6 == 0)
    {
        VAR_13 = FUNC_1(VAR_9,
                                   VAR_1,
                                   VAR_4,
                                   VAR_5,
                                   (LPBYTE)*VAR_3,
                                   VAR_6,
                                   &VAR_10,
                                   &VAR_12,
                                   &VAR_11,
                                   VAR_8);
        if ((VAR_13 == 0) && (FUNC_2() != VAR_0))
        {
            FUNC_7();
            return 0;
        }

        VAR_6 = VAR_10;
    }

    *VAR_3 = (ENUM_SERVICE_STATUS_PROCESS *)
                      FUNC_4(FUNC_3(),
                                0,
                                VAR_6);
    if (*VAR_3 != ((void*)0))
    {
        if (FUNC_1(VAR_9,
                                 VAR_1,
                                 VAR_4,
                                 VAR_5,
                                 (LPBYTE)*VAR_3,
                                 VAR_6,
                                 &VAR_10,
                                 &VAR_12,
                                 &VAR_11,
                                 VAR_8))
        {
            FUNC_0(VAR_9);
            return VAR_12;
        }
    }

    FUNC_7();
    if (*VAR_3)
        FUNC_5(FUNC_3(), 0, *VAR_3);

    FUNC_0(VAR_9);

    return VAR_12;
}
