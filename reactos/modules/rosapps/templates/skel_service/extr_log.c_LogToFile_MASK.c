
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int TCHAR ;
typedef int LPVOID ;
typedef int * LPTSTR ;
typedef int * LPCTSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int *,int,int ,int *,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int VAR_7 ;
 int FUNC_11 (int ,int ,int *,int ) ;
 int FUNC_12 (int ,int *,int,int*,int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,int,int ,int *,...) ;
 int FUNC_15 (int *) ;
 int VAR_8 ;

__attribute__((used)) static BOOL
FUNC_16(LPCTSTR VAR_9,
          DWORD VAR_10,
          DWORD VAR_11,
          UINT VAR_12)
{
    LPTSTR VAR_13 = ((void*)0);
    DWORD VAR_14;

    if (!FUNC_10())
        return VAR_0;

    VAR_14 = FUNC_15(VAR_9) + 1;

    if (VAR_12 & VAR_5)
    {
        LPVOID VAR_15;
        DWORD VAR_16;

        VAR_16 = FUNC_2(VAR_2 | VAR_3,
                                ((void*)0),
                                VAR_10,
                                FUNC_9(VAR_4, VAR_7),
                                (LPTSTR)&VAR_15,
                                0,
                                ((void*)0));

        VAR_14 = VAR_14 + VAR_16 + 40;

        VAR_13 = FUNC_5(FUNC_4(),
                              0,
                              VAR_14 * sizeof(TCHAR));
        if (VAR_13)
        {
            FUNC_14(VAR_13,
                       VAR_14,
                       FUNC_13("%s : %s\tErrNum = %lu ExitCode = %lu\r\n"),
                       VAR_9,
                       VAR_15,
                       VAR_10,
                       VAR_11);
        }

        FUNC_7(VAR_15);

    }
    else
    {
        VAR_14 += 2;

        VAR_13 = FUNC_5(FUNC_4(),
                              0,
                              VAR_14 * sizeof(TCHAR));
        if (VAR_13)
        {
            FUNC_14(VAR_13,
                       VAR_14,
                      FUNC_13("%s\r\n"),
                      VAR_9);
        }
    }

    if (VAR_13)
    {
        DWORD VAR_17;

        FUNC_11(VAR_8, 0, ((void*)0), VAR_1);

        FUNC_12(VAR_8,
                  VAR_13,
                  FUNC_15(VAR_13) * sizeof(TCHAR),
                  &VAR_17,
                  ((void*)0));
        if (VAR_17 == 0)
        {
            FUNC_8(FUNC_13("Failed to write to log file"),
                          FUNC_3(),
                          0,
                          VAR_6 | VAR_5);
        }

        FUNC_6(FUNC_4(),
                 0,
                 VAR_13);
    }

    FUNC_0(VAR_8);

    if (VAR_11 > 0)
        FUNC_1(VAR_11);
}
