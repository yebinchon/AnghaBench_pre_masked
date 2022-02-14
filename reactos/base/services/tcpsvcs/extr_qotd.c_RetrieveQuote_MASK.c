
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SOCKET ;
typedef char* LPSTR ;
typedef int INT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (char*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (scalar_t__,char*,int,int*,int *) ;
 int FUNC_11 (int ,char*) ;
 int VAR_7 ;
 int FUNC_12 () ;
 int FUNC_13 (unsigned int) ;
 int VAR_8 ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static BOOL
FUNC_15(SOCKET VAR_9)
{
    HANDLE VAR_10;
    WCHAR VAR_11[VAR_5 + 20];
    DWORD VAR_12;
    LPSTR VAR_13;
    LPSTR VAR_14;
    INT VAR_15;
    INT VAR_16 = 0;
    INT VAR_17;

    if(!FUNC_5(VAR_11, VAR_5))
    {
        FUNC_9(L"QOTD: Getting system path failed", FUNC_3(), 0, VAR_4);
        return VAR_0;
    }
    FUNC_14(VAR_11, VAR_8);


    FUNC_9(L"QOTD: Opening quotes file", 0, 0, VAR_4);
    VAR_10 = FUNC_1(VAR_11,
                        VAR_2,
                        0,
                        ((void*)0),
                        VAR_6,
                        VAR_1,
                        ((void*)0));
    if (VAR_10 == VAR_3)
    {
        FUNC_9(L"QOTD: Error opening quotes file", FUNC_3(), 0, VAR_4);
    }
    else
    {
        DWORD VAR_18 = FUNC_2(VAR_10, ((void*)0));
        VAR_13 = (LPSTR)FUNC_7(FUNC_4(), 0, VAR_18 + 1);
        if (!VAR_13)
        {
            FUNC_0(VAR_10);
            return VAR_0;
        }

        FUNC_10(VAR_10,
                 VAR_13,
                 VAR_18,
                 &VAR_12,
                 ((void*)0));
        FUNC_0(VAR_10);

        VAR_13[VAR_18] = 0;

        if (VAR_12 != VAR_18)
        {
            FUNC_8(FUNC_4(), 0, VAR_13);
            return VAR_0;
        }

        VAR_14 = VAR_13;
        while (*VAR_14)
        {
            if (*VAR_14 == '%')
                VAR_16++;
            VAR_14++;
        }


        FUNC_13((unsigned int) FUNC_6());
        VAR_15 = FUNC_12() % VAR_16;


        VAR_14 = VAR_13;
        for (VAR_17 = 1; VAR_17 <= VAR_15; VAR_17++)
        {

            VAR_14++;

            if (VAR_17 == VAR_15)
            {
                LPSTR VAR_19 = VAR_14;

                while (*VAR_14 != '%' && *VAR_14 != '\0')
                    VAR_14++;

                *VAR_14 = 0;


                if (!FUNC_11(VAR_9, VAR_19))
                    FUNC_9(L"QOTD: Error sending data", 0, 0, VAR_4);
                break;
            }
            else
            {
                while (*VAR_14 != '%' && *VAR_14 != '\0')
                    VAR_14++;


                VAR_14 += 2;
            }
        }

        FUNC_8(FUNC_4(), 0, VAR_13);
        return VAR_7;
    }

    return VAR_0;
}
