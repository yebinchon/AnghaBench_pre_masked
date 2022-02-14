
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;
typedef int * LPCWSTR ;
typedef int INFCONTEXT ;
typedef int * HINF ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,char*,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *,char const*,char*,int,int*) ;
 int FUNC_7 (int *,int ,char*,int,int*) ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (int *,char*,char*,int) ;
 char* FUNC_10 (char**,char,int ) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*,int *,int) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (char*,int *,int) ;

void FUNC_15(HINF VAR_3, LPCWSTR VAR_4, LPCWSTR VAR_5)
{
    WCHAR VAR_6[VAR_1];
    WCHAR VAR_7[VAR_1];
    WCHAR VAR_8[VAR_2];
    INFCONTEXT VAR_9;
    DWORD VAR_10;
    int VAR_11;

    static const WCHAR VAR_12[] = {'S','o','u','r','c','e','D','i','r',0};

    static const WCHAR VAR_13[] = {
        'C','u','s','t','o','m','D','e','s','t','i','n','a','t','i','o','n',0
    };

    if (!FUNC_6(((void*)0), VAR_3, VAR_4, VAR_13,
                           VAR_6, VAR_1, &VAR_10))
        return;

    if (!FUNC_4(VAR_3, VAR_6, ((void*)0), &VAR_9))
        return;

    do
    {
        LPWSTR VAR_14, VAR_15, VAR_16, VAR_17 = ((void*)0);
        DWORD VAR_18 = 0;

        FUNC_6(&VAR_9, ((void*)0), ((void*)0), ((void*)0),
                          VAR_7, VAR_1, &VAR_10);




        if (!(VAR_14 = FUNC_13(VAR_7, '=')))
        {
            FUNC_7(&VAR_9, 0, ((void*)0), 0, &VAR_10);
            VAR_16 = FUNC_2(FUNC_1(), 0, VAR_10 * sizeof(WCHAR));
            VAR_17 = VAR_16;
            FUNC_7(&VAR_9, 0, VAR_16, VAR_10, &VAR_10);
            VAR_14 = VAR_7;
        }
        else
        {
            VAR_16 = VAR_7;
            *(VAR_14++) = '\0';
        }


        while (*VAR_14 == ' ')
            VAR_14++;


        VAR_15 = FUNC_13(VAR_14, ',');
        if (VAR_15) {
            *VAR_15 = '\0';
            VAR_18 = FUNC_14(VAR_15+1, ((void*)0), 10);
        }


        if (VAR_5 && !FUNC_11(VAR_14, VAR_12))
            FUNC_12(VAR_8, VAR_5, VAR_2);
        else
            FUNC_9(VAR_3, VAR_14, VAR_8, VAR_2);


        if (VAR_18 & 0x04)
            FUNC_0("Need to support changing paths - default will be used\n");


        while ((VAR_15 = FUNC_10(&VAR_16, ',', VAR_0)))
        {
            VAR_11 = FUNC_14(VAR_15, ((void*)0), 10);
            FUNC_8(VAR_3, VAR_11, VAR_8);
        }
        FUNC_3(FUNC_1(), 0, VAR_17);
    } while (FUNC_5(&VAR_9, &VAR_9));
}
