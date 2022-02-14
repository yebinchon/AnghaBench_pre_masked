
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {char* lpLocalName; char* lpRemoteName; int * lpProvider; int dwType; } ;
typedef TYPE_1__ NETRESOURCE ;
typedef char* LPWSTR ;
typedef int INT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;
 char* FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,int,scalar_t__) ;
 scalar_t__ FUNC_11 (int *,TYPE_1__*,int *,int *,int,char*,scalar_t__*,scalar_t__*) ;
 char FUNC_12 (char) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*) ;
 char* FUNC_15 (char*,char*) ;

INT
FUNC_16(
    INT VAR_10,
    WCHAR **VAR_11)
{
    DWORD VAR_12, VAR_13, VAR_14;

    if (VAR_10 == 2)
    {
        VAR_12 = FUNC_2(((void*)0));
        if (VAR_12 == VAR_6)
            FUNC_7(VAR_3);
        else
            FUNC_6(VAR_12);

        return 0;
    }
    else if (VAR_10 == 3)
    {
        if (!FUNC_9(VAR_11[2]))
        {
            FUNC_8(3952, L"DeviceName");
            return 1;
        }

        VAR_12 = FUNC_2(VAR_11[2]);
        if (VAR_12 == VAR_6)
            FUNC_7(VAR_3);
        else
            FUNC_6(VAR_12);

        return 0;
    }

    VAR_14 = 0;
    if (FUNC_13(VAR_11[2], L"/DELETE") == 0)
    {
        VAR_14 = 3;
    }
    else
    {
        if ((VAR_11[2][0] != '*' && VAR_11[2][1] != 0) &&
            !FUNC_9(VAR_11[2]))
        {
            FUNC_8(3952, L"DeviceName");
            return 1;
        }
    }

    if (FUNC_13(VAR_11[3], L"/DELETE") == 0)
    {
        VAR_14 = 2;
    }

    if (VAR_14 != 0)
    {
        if (!FUNC_9(VAR_11[VAR_14]) || VAR_11[VAR_14][0] == L'*')
        {
            FUNC_8(3952, L"DeviceName");
            return 1;
        }

        VAR_12 = FUNC_10(VAR_11[VAR_14], VAR_2, VAR_4);
        if (VAR_12 != VAR_6)
            FUNC_6(VAR_12);

        return VAR_12;
    }
    else
    {
        BOOL VAR_15 = VAR_4;
        NETRESOURCE VAR_16;
        WCHAR VAR_17[256];
        DWORD VAR_18 = 0, VAR_19 = FUNC_0(VAR_17);

        VAR_13 = FUNC_14(VAR_11[3]);
        if (VAR_13 < 4)
        {
            FUNC_8(3952, L"Name");
            return 1;
        }

        if (VAR_11[3][0] != L'\\' || VAR_11[3][1] != L'\\')
        {
            FUNC_8(3952, L"Name");
            return 1;
        }

        if (VAR_10 > 4)
        {
            LPWSTR VAR_20;
            VAR_13 = FUNC_14(VAR_11[4]);
            if (VAR_13 > 12)
            {
                VAR_20 = FUNC_4(FUNC_3(), 0, (VAR_13 + 1) * sizeof(WCHAR));
                if (VAR_20)
                {
                    INT VAR_21;
                    for (VAR_21 = 0; VAR_21 < VAR_13; ++VAR_21)
                        VAR_20[VAR_21] = FUNC_12(VAR_11[4][VAR_21]);

                    if (FUNC_15(VAR_20, L"/PERSISTENT:") == VAR_20)
                    {
                        LPWSTR VAR_22 = VAR_20 + 12;
                        if (VAR_13 == 14 && VAR_22[0] == 'N' && VAR_22[1] == 'O')
                        {
                            VAR_15 = VAR_4;
                        }
                        else if (VAR_13 == 15 && VAR_22[0] == 'Y' && VAR_22[1] == 'E' && VAR_22[2] == 'S')
                        {
                            VAR_15 = VAR_9;
                        }
                        else
                        {
                            FUNC_5(FUNC_3(), 0, VAR_20);
                            FUNC_8(3952, L"Persistent");
                            return 1;
                        }
                    }
                    FUNC_5(FUNC_3(), 0, VAR_20);
                }
            }

        }

        VAR_16.dwType = VAR_7;
        VAR_16.lpLocalName = (VAR_11[2][0] != L'*') ? VAR_11[2] : ((void*)0);
        VAR_16.lpRemoteName = VAR_11[3];
        VAR_16.lpProvider = ((void*)0);

        VAR_12 = FUNC_11(((void*)0), &VAR_16, ((void*)0), ((void*)0), VAR_1 | (VAR_15 ? VAR_2 : 0), VAR_17, &VAR_19, &VAR_18);
        if (VAR_11[2][0] == L'*' && VAR_12 == VAR_6 && VAR_18 == VAR_0)
            FUNC_1(VAR_8, VAR_5, VAR_11[3], VAR_17);
        else if (VAR_12 != VAR_6)
            FUNC_6(VAR_12);

        return VAR_12;
    }
}
