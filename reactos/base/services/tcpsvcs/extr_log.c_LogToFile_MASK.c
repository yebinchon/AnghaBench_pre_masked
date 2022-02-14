
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
typedef int UINT ;
struct TYPE_4__ {int hEvent; } ;
typedef int TCHAR ;
typedef int SIZE_T ;
typedef int * LPWSTR ;
typedef int * LPCWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int *,int,int ,int *,int ,int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int*,scalar_t__) ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,scalar_t__,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int VAR_9 ;
 int FUNC_10 (int ,int ,int ,int *) ;
 int VAR_10 ;

 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int *,int,int*,TYPE_1__*) ;
 int FUNC_13 (int *,int,char*,int *,...) ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_14 (int *) ;

__attribute__((used)) static VOID
FUNC_15(LPCWSTR VAR_13,
          DWORD VAR_14,
          DWORD VAR_15,
          UINT VAR_16)
{
    LPWSTR VAR_17 = ((void*)0);
    SIZE_T VAR_18;

    VAR_18 = FUNC_14(VAR_13) + 1;

    if (VAR_16 & VAR_7)
    {
        LPWSTR VAR_19;
        DWORD VAR_20;

        VAR_20 = FUNC_1(VAR_3 | VAR_4,
                                 ((void*)0),
                                 VAR_14,
                                 FUNC_9(VAR_6, VAR_10),
                                 (LPWSTR)&VAR_19,
                                 0,
                                 ((void*)0));

        VAR_18 = VAR_18 + VAR_20 + 40;

        VAR_17 = FUNC_5(FUNC_4(),
                              0,
                              VAR_18 * sizeof(TCHAR));
        if (VAR_17)
        {
            FUNC_13(VAR_17,
                       VAR_18,
                       L"%s : %s\tErrNum = %lu ExitCode = %lu\r\n",
                       VAR_13,
                       VAR_19,
                       VAR_14,
                       VAR_15);
        }

        FUNC_7(VAR_19);

    }
    else
    {
        VAR_18 += 2;

        VAR_17 = FUNC_5(FUNC_4(),
                              0,
                              VAR_18 * sizeof(TCHAR));
        if (VAR_17)
        {
            FUNC_13(VAR_17,
                       VAR_18,
                      L"%s\r\n",
                      VAR_13);
        }
    }


    VAR_18 = FUNC_14(VAR_17);
    if (VAR_18 > (VAR_9 / sizeof(WCHAR)))
    {
        FUNC_10(VAR_1, 0, 0, ((void*)0));
    }

    if (VAR_17)
    {
        DWORD VAR_21;
        DWORD VAR_22;
        BOOL VAR_23;

        VAR_23 = FUNC_12(VAR_11,
                         VAR_17,
                         (DWORD)VAR_18 * sizeof(WCHAR),
                         &VAR_21,
                         &VAR_12);
        if (!VAR_23)
        {
            if (FUNC_2() != VAR_0)
            {
                VAR_23 = VAR_2;
            }
            else
            {

                VAR_22 = FUNC_11(VAR_12.hEvent, VAR_5);

                 switch (VAR_22)
                 {

                    case 128:
                    {
                         VAR_23 = FUNC_3(VAR_11,
                                                    &VAR_12,
                                                    &VAR_21,
                                                    VAR_2);
                         break;
                    }

                    default:



                         VAR_23 = VAR_2;
                         break;
                 }
            }
        }

        if (!VAR_23 || VAR_21 == 0)
        {
            FUNC_8(L"Failed to write to log file",
                          FUNC_2(),
                          0,
                          VAR_8 | VAR_7);
        }

        FUNC_6(FUNC_4(),
                 0,
                 VAR_17);
    }

    if (VAR_15 > 0)
        FUNC_0(VAR_15);
}
