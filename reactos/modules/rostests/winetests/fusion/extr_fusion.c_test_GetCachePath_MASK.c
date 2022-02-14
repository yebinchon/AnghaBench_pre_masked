
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int *,int,char*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int ,char*,int,int *,int,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int,char*,scalar_t__,...) ;
 int FUNC_10 (char*,int,scalar_t__*) ;
 scalar_t__ FUNC_11 (int,char*,scalar_t__*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char const*) ;
 int FUNC_14 (int *,int *,int *,char*,int *,int *) ;

__attribute__((used)) static void FUNC_15(void)
{
    CHAR VAR_8[VAR_6];
    WCHAR VAR_9[VAR_6];
    WCHAR VAR_10[VAR_6];
    WCHAR VAR_11[VAR_6];
    WCHAR VAR_12[VAR_6];
    DWORD VAR_13;
    HRESULT VAR_14;

    static const WCHAR VAR_15[] = {'\\',0};
    static const WCHAR VAR_16[] = {'n','o','c','h','a','n','g','e',0};
    static const WCHAR VAR_17[] = {'a','s','s','e','m','b','l','y',0};
    static const WCHAR VAR_18[] = {'G','A','C',0};

    if (!&FUNC_11)
    {
        FUNC_12("GetCachePath not implemented\n");
        return;
    }

    FUNC_0(VAR_8, VAR_6);
    FUNC_1(VAR_3, 0, VAR_8, -1, VAR_9, VAR_6);
    FUNC_7(VAR_10, VAR_9);
    FUNC_4(VAR_10, VAR_15);
    FUNC_4(VAR_10, VAR_17);
    FUNC_4(VAR_10, VAR_15);
    FUNC_4(VAR_10, VAR_18);


    VAR_13 = 0;
    VAR_14 = FUNC_11(VAR_0, ((void*)0), &VAR_13);
    FUNC_9(VAR_14 == VAR_5, "Expected E_NOT_SUFFICIENT_BUFFER, got %08x\n", VAR_14);
    FUNC_9(VAR_13 == FUNC_8(VAR_10) + 1,
       "Expected %d, got %d\n", FUNC_8(VAR_10) + 1, VAR_13);


    VAR_13 = VAR_6;
    VAR_14 = FUNC_11(VAR_0, ((void*)0), &VAR_13);
    FUNC_9(VAR_14 == VAR_5, "Expected E_NOT_SUFFICIENT_BUFFER, got %08x\n", VAR_14);
    FUNC_9(VAR_13 == FUNC_8(VAR_10) + 1,
       "Expected %d, got %d\n", FUNC_8(VAR_10) + 1, VAR_13);


    VAR_14 = FUNC_11(VAR_0, ((void*)0), ((void*)0));
    FUNC_9(VAR_14 == VAR_4, "Expected E_INVALIDARG, got %08x\n", VAR_14);


    FUNC_7(VAR_12, VAR_16);
    VAR_14 = FUNC_11(VAR_0, VAR_12, ((void*)0));
    FUNC_9(VAR_14 == VAR_4, "Expected E_INVALIDARG, got %08x\n", VAR_14);
    FUNC_9( !FUNC_5( VAR_16, VAR_12 ), "Expected %s,  got %s\n", FUNC_13(VAR_16), FUNC_13(VAR_12));


    FUNC_7(VAR_12, VAR_16);
    VAR_13 = VAR_6;
    VAR_14 = FUNC_11(VAR_0, VAR_12, &VAR_13);
    FUNC_9(VAR_14 == VAR_7, "Expected S_OK, got %08x\n", VAR_14);
    FUNC_9( !FUNC_5( VAR_10, VAR_12 ), "Expected %s,  got %s\n", FUNC_13(VAR_10), FUNC_13(VAR_12));


    FUNC_7(VAR_12, VAR_16);
    VAR_13 = FUNC_8(VAR_10);
    VAR_14 = FUNC_11(VAR_0, VAR_12, &VAR_13);
    FUNC_9(VAR_14 == VAR_5, "Expected E_NOT_SUFFICIENT_BUFFER, got %08x\n", VAR_14);
    FUNC_9( !FUNC_5( VAR_16, VAR_12 ), "Expected %s,  got %s\n", FUNC_13(VAR_16), FUNC_13(VAR_12));

    FUNC_7(VAR_10, VAR_9);
    FUNC_4(VAR_10, VAR_15);
    FUNC_4(VAR_10, VAR_17);


    FUNC_7(VAR_12, VAR_16);
    VAR_13 = VAR_6;
    VAR_14 = FUNC_11(VAR_1, VAR_12, &VAR_13);
    FUNC_9(VAR_14 == VAR_7 ||
       FUNC_3(VAR_14 == VAR_4),
       "Expected S_OK, got %08x\n", VAR_14);
    if (VAR_14 == VAR_7)
        FUNC_9( !FUNC_5( VAR_10, VAR_12 ), "Expected %s,  got %s\n", FUNC_13(VAR_10), FUNC_13(VAR_12));

    if (&FUNC_10)
    {
        CHAR VAR_19[VAR_6];
        CHAR VAR_20[VAR_6];
        CHAR VAR_21[VAR_6];
        CHAR VAR_22[VAR_6];

        if (VAR_14 == VAR_7)
        {
            FUNC_6(VAR_21, "NativeImages_");



            FUNC_6(VAR_22, "%s\\%s\\%s%s_32");

        }
        else
        {
            FUNC_6(VAR_21, "NativeImages1_");
            FUNC_6(VAR_22, "%s\\%s\\%s%s");
        }

        FUNC_10(VAR_11, VAR_6, &VAR_13);
        FUNC_2(VAR_3, 0, VAR_11, -1, VAR_19, VAR_6, 0, 0);

        FUNC_14(VAR_20, VAR_22, VAR_8, "assembly", VAR_21, VAR_19);
        FUNC_1(VAR_3, 0, VAR_20, -1, VAR_10, VAR_6);


        FUNC_7(VAR_12, VAR_16);
        VAR_13 = VAR_6;
        VAR_14 = FUNC_11(VAR_2, VAR_12, &VAR_13);
        FUNC_9(VAR_14 == VAR_7, "Expected S_OK, got %08x\n", VAR_14);
        FUNC_9( !FUNC_5( VAR_10, VAR_12 ), "Expected %s,  got %s\n", FUNC_13(VAR_10), FUNC_13(VAR_12));
    }


    FUNC_7(VAR_12, VAR_16);
    VAR_13 = VAR_6;
    VAR_14 = FUNC_11(VAR_0 | VAR_1, VAR_12, &VAR_13);
    FUNC_9(VAR_14 == VAR_4, "Expected E_INVALIDARG, got %08x\n", VAR_14);
    FUNC_9( !FUNC_5( VAR_16, VAR_12 ), "Expected %s,  got %s\n", FUNC_13(VAR_16), FUNC_13(VAR_12));
}
