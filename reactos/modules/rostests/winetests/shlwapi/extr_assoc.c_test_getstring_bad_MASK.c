
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_2 (int,int) ;
 int VAR_14 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int,char*,...) ;
 int VAR_15 ;
 int FUNC_5 (int ,int ,int *,int ,char*,int*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    static const WCHAR VAR_16[] = {'O','p','e','n','W','i','t','h','.','e','x','e',0};
    WCHAR VAR_17[VAR_8];
    HRESULT VAR_18;
    DWORD VAR_19;

    if (!&FUNC_5)
    {
        FUNC_6("AssocQueryStringW() is missing\n");
        return;
    }

    VAR_19 = 0xdeadbeef;
    VAR_18 = FUNC_5(0, VAR_0, ((void*)0), VAR_15, ((void*)0), &VAR_19);
    FUNC_2(VAR_6, VAR_18);
    FUNC_4(VAR_19 == 0xdeadbeef, "got %u\n", VAR_19);

    VAR_19 = 0xdeadbeef;
    VAR_18 = FUNC_5(0, VAR_0, VAR_11, VAR_15, ((void*)0), &VAR_19);
    FUNC_4(VAR_18 == VAR_5 ||
       VAR_18 == FUNC_1(VAR_4),
       "Unexpected result : %08x\n", VAR_18);
    FUNC_4(VAR_19 == 0xdeadbeef, "got %u\n", VAR_19);

    VAR_19 = FUNC_0(VAR_17);
    VAR_18 = FUNC_5(0, VAR_0, VAR_12, VAR_15, VAR_17, &VAR_19);
    FUNC_4(VAR_18 == VAR_5 ||
       VAR_18 == FUNC_1(VAR_4) ||
       VAR_18 == VAR_10 ,
       "Unexpected result : %08x\n", VAR_18);
    if (VAR_18 == VAR_10)
    {
        FUNC_4(VAR_19 < FUNC_0(VAR_17), "got %u\n", VAR_19);
        FUNC_4(!FUNC_3(VAR_17 + VAR_19 - FUNC_0(VAR_16), VAR_16), "wrong data\n");
    }

    VAR_19 = 0xdeadbeef;
    VAR_18 = FUNC_5(0, VAR_0, VAR_13, VAR_14, ((void*)0), &VAR_19);
    FUNC_4(VAR_18 == FUNC_1(VAR_2) ||
       VAR_18 == FUNC_1(VAR_4),
       "Unexpected result : %08x\n", VAR_18);
    FUNC_4(VAR_19 == 0xdeadbeef, "got %u\n", VAR_19);

    VAR_18 = FUNC_5(0, VAR_0, VAR_13, VAR_15, ((void*)0), ((void*)0));
    FUNC_4(VAR_18 == VAR_7 ||
       VAR_18 == VAR_6,
       "Unexpected result : %08x\n", VAR_18);

    VAR_19 = 0xdeadbeef;
    VAR_18 = FUNC_5(0, VAR_1, ((void*)0), VAR_15, ((void*)0), &VAR_19);
    FUNC_2(VAR_6, VAR_18);
    FUNC_4(VAR_19 == 0xdeadbeef, "got %u\n", VAR_19);

    VAR_19 = 0xdeadbeef;
    VAR_18 = FUNC_5(0, VAR_1, VAR_11, VAR_15, ((void*)0), &VAR_19);
    FUNC_4(VAR_18 == VAR_5 ||
       VAR_18 == FUNC_1(VAR_4),
       "Unexpected result : %08x\n", VAR_18);
    FUNC_4(VAR_19 == 0xdeadbeef, "got %u\n", VAR_19);

    VAR_19 = 0xdeadbeef;
    VAR_18 = FUNC_5(0, VAR_1, VAR_12, VAR_15, ((void*)0), &VAR_19);
    FUNC_4(VAR_18 == VAR_5 ||
       VAR_18 == FUNC_1(VAR_4) ||
       VAR_18 == FUNC_1(VAR_3) ||
       VAR_18 == VAR_9,
       "Unexpected result : %08x\n", VAR_18);
    FUNC_4((VAR_18 == VAR_9 && VAR_19 < FUNC_0(VAR_17)) || VAR_19 == 0xdeadbeef,
       "got hr=%08x and len=%u\n", VAR_18, VAR_19);

    VAR_19 = 0xdeadbeef;
    VAR_18 = FUNC_5(0, VAR_1, VAR_13, VAR_14, ((void*)0), &VAR_19);
    FUNC_4(VAR_18 == FUNC_1(VAR_2) ||
       VAR_18 == FUNC_1(VAR_4) ||
       VAR_18 == VAR_5,
       "Unexpected result : %08x\n", VAR_18);
    FUNC_4(VAR_19 == 0xdeadbeef, "got %u\n", VAR_19);

    VAR_18 = FUNC_5(0, VAR_1, VAR_13, VAR_15, ((void*)0), ((void*)0));
    FUNC_4(VAR_18 == VAR_7 ||
       VAR_18 == VAR_6,
       "Unexpected result : %08x\n", VAR_18);
}
