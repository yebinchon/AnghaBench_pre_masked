
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int ULONG ;
typedef scalar_t__* PWCHAR ;
typedef int * PINFCONTEXT ;
typedef int PCWSTR ;
typedef int INT ;
typedef int HKEY ;
typedef int HINF ;
typedef int Buffer ;
typedef int BOOL ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int **) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int *) ;
 scalar_t__ FUNC_5 (int *,int,scalar_t__*,int,int *) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_8 (int *,scalar_t__*,int *) ;
 int VAR_5 ;
 int FUNC_9 (int ,scalar_t__*,int *,int) ;
 int FUNC_10 (scalar_t__*) ;
 size_t FUNC_11 (scalar_t__*) ;

__attribute__((used)) static BOOL
FUNC_12(HINF VAR_6, PCWSTR VAR_7, BOOL VAR_8)
{
    WCHAR VAR_9[VAR_4];
    PWCHAR VAR_10;
    ULONG VAR_11;
    size_t VAR_12;

    PINFCONTEXT VAR_13 = ((void*)0);
    HKEY VAR_14;
    BOOL VAR_15;

    VAR_15 = FUNC_1(VAR_6, VAR_7, ((void*)0), &VAR_13) == 0;
    if (!VAR_15)
        return VAR_5;

    for (VAR_15 = VAR_5; VAR_15; VAR_15 = (FUNC_2(VAR_13, VAR_13) == 0))
    {

        if (FUNC_5(VAR_13, 1, VAR_9, sizeof(VAR_9)/sizeof(WCHAR), ((void*)0)) != 0)
            continue;
        if (!FUNC_10(VAR_9))
            continue;


        VAR_12 = FUNC_11(VAR_9);
        if (FUNC_5(VAR_13, 2, VAR_9 + VAR_12, sizeof(VAR_9)/sizeof(WCHAR) - (ULONG)VAR_12, ((void*)0)) != 0)
            *VAR_9 = 0;

        FUNC_0("KeyName: <%S>\n", VAR_9);


        if (FUNC_4(VAR_13, 4, (INT*)&VAR_11) != 0)
            VAR_11 = 0;

        if (VAR_8)
        {
            if (!VAR_11)
                VAR_11 = VAR_2;
            else if (!(VAR_11 & VAR_2))
                continue;
        }
        else
        {
            if (VAR_11 & VAR_2)
                continue;
        }

        FUNC_0("Flags: 0x%x\n", VAR_11);

        if (VAR_8 || (VAR_11 & VAR_3))
        {
            if (FUNC_8(((void*)0), VAR_9, &VAR_14) != VAR_0)
            {
                FUNC_0("RegOpenKey(%S) failed\n", VAR_9);
                continue;
            }
        }
        else
        {
            if (FUNC_7(((void*)0), VAR_9, &VAR_14) != VAR_0)
            {
                FUNC_0("RegCreateKey(%S) failed\n", VAR_9);
                continue;
            }
        }


        if (FUNC_5(VAR_13, 3, VAR_9, sizeof(VAR_9)/sizeof(WCHAR), ((void*)0)) == 0)
        {
            VAR_10 = VAR_9;
        }
        else
        {
            VAR_10 = ((void*)0);
        }


        if (!FUNC_9(VAR_14, VAR_10, VAR_13, VAR_11))
        {
            FUNC_6(VAR_14);
            return VAR_1;
        }

        FUNC_6(VAR_14);
    }

    FUNC_3(VAR_13);

    return VAR_5;
}
