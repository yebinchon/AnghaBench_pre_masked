
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int TCHAR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (int*,int ,int,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int*,int *,int ,int *,int *,int *,int*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int*,int ,int const*) ;
 scalar_t__ FUNC_8 (int*,int ) ;
 int VAR_9 ;

HANDLE FUNC_9(const TCHAR * VAR_10,
                  BOOLEAN VAR_11,
                  BOOLEAN VAR_12)
{
    UINT VAR_13;
    HANDLE VAR_14;
    TCHAR VAR_15[VAR_8];


    if (!VAR_11 && VAR_10[1] == L':')
    {
        VAR_13 = FUNC_1(VAR_10);
        if (VAR_13 == VAR_0)
        {
            FUNC_6(VAR_9, FUNC_5("FSUTIL needs a local device\n"));
            return VAR_5;
        }
    }


    if (VAR_12)
    {
        TCHAR VAR_16[VAR_6 + 1];

        FUNC_7(VAR_15, FUNC_5("\\\\.\\%s\\"), VAR_10);
        if (!FUNC_3(VAR_15, ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), VAR_16, VAR_6 + 1))
        {
            FUNC_4(FUNC_2());
            return VAR_5;
        }

        if (FUNC_8(VAR_16, FUNC_5("NTFS")) != 0)
        {
            FUNC_6(VAR_9, FUNC_5("FSUTIL needs a NTFS device\n"));
            return VAR_5;
        }
    }


    FUNC_7(VAR_15, FUNC_5("\\\\.\\%s"), VAR_10);


    VAR_14 = FUNC_0(VAR_15, VAR_4, VAR_2 | VAR_3,
                         ((void*)0), VAR_7, VAR_1, ((void*)0));
    if (VAR_14 == VAR_5)
    {
        FUNC_4(FUNC_2());
        return VAR_5;
    }

    return VAR_14;
}
