
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WIN32_FIND_DATAW ;
typedef char WCHAR ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef char* BSTR ;


 int FUNC_0 (char const*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,int,char*,int *) ;
 scalar_t__ FUNC_4 (int ,char*,char**) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char const*) ;
 scalar_t__ VAR_3 ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_4 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int,char*,scalar_t__,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static void FUNC_13(void)
{
    static const WCHAR VAR_5[] = {'t','e','s','t','_','d','i','r','1',0};
    static const WCHAR VAR_6[] = {'t','e','s','t','_','d','i','r','2',0};
    static const WCHAR VAR_7[] = {'t','e','s','t','_','d','i','r','*',0};
    static const WCHAR VAR_8[] = {'t','e','s','t','_','d','i','*',0};
    static const WCHAR VAR_9[] = {'.',0};

    WIN32_FIND_DATAW VAR_10;
    HANDLE VAR_11;
    WCHAR VAR_12[VAR_2], VAR_13[VAR_2];
    BSTR VAR_14, VAR_15;
    HRESULT VAR_16;

    VAR_16 = FUNC_4(VAR_4, ((void*)0), ((void*)0));
    FUNC_10(VAR_16 == VAR_0, "GetAbsolutePathName returned %x, expected E_POINTER\n", VAR_16);

    VAR_16 = FUNC_4(VAR_4, ((void*)0), &VAR_15);
    FUNC_10(VAR_16 == VAR_3, "GetAbsolutePathName returned %x, expected S_OK\n", VAR_16);
    FUNC_3(VAR_9, VAR_2, VAR_12, ((void*)0));
    FUNC_10(!FUNC_9(VAR_12, VAR_15), "result = %s, expected %s\n", FUNC_12(VAR_15), FUNC_12(VAR_12));
    FUNC_7(VAR_15);

    VAR_11 = FUNC_2(VAR_8, &VAR_10);
    if(VAR_11 != VAR_1) {
        FUNC_11("GetAbsolutePathName tests\n");
        FUNC_1(VAR_11);
        return;
    }

    VAR_14 = FUNC_6(VAR_7);
    VAR_16 = FUNC_4(VAR_4, VAR_14, &VAR_15);
    FUNC_10(VAR_16 == VAR_3, "GetAbsolutePathName returned %x, expected S_OK\n", VAR_16);
    FUNC_3(VAR_7, VAR_2, VAR_13, ((void*)0));
    FUNC_10(!FUNC_9(VAR_13, VAR_15), "result = %s, expected %s\n", FUNC_12(VAR_15), FUNC_12(VAR_13));
    FUNC_7(VAR_15);

    FUNC_10(FUNC_0(VAR_5, ((void*)0)), "CreateDirectory(%s) failed\n", FUNC_12(VAR_5));
    VAR_16 = FUNC_4(VAR_4, VAR_14, &VAR_15);
    FUNC_10(VAR_16 == VAR_3, "GetAbsolutePathName returned %x, expected S_OK\n", VAR_16);
    FUNC_3(VAR_5, VAR_2, VAR_12, ((void*)0));
    FUNC_10(!FUNC_9(VAR_12, VAR_15) || FUNC_8(!FUNC_9(VAR_13, VAR_15)), "result = %s, expected %s\n",
                FUNC_12(VAR_15), FUNC_12(VAR_12));
    FUNC_7(VAR_15);

    FUNC_10(FUNC_0(VAR_6, ((void*)0)), "CreateDirectory(%s) failed\n", FUNC_12(VAR_6));
    VAR_16 = FUNC_4(VAR_4, VAR_14, &VAR_15);
    FUNC_10(VAR_16 == VAR_3, "GetAbsolutePathName returned %x, expected S_OK\n", VAR_16);
    if(!FUNC_9(VAR_12, VAR_15) || !FUNC_9(VAR_13, VAR_15)) {
        FUNC_10(!FUNC_9(VAR_12, VAR_15) || FUNC_8(!FUNC_9(VAR_13, VAR_15)), "result = %s, expected %s\n",
                FUNC_12(VAR_15), FUNC_12(VAR_12));
    }else {
        FUNC_3(VAR_6, VAR_2, VAR_12, ((void*)0));
        FUNC_10(!FUNC_9(VAR_12, VAR_15), "result = %s, expected %s\n",
                FUNC_12(VAR_15), FUNC_12(VAR_12));
    }
    FUNC_7(VAR_15);

    FUNC_7(VAR_14);
    VAR_14 = FUNC_6(VAR_8);
    VAR_16 = FUNC_4(VAR_4, VAR_14, &VAR_15);
    FUNC_10(VAR_16 == VAR_3, "GetAbsolutePathName returned %x, expected S_OK\n", VAR_16);
    FUNC_3(VAR_8, VAR_2, VAR_12, ((void*)0));
    FUNC_10(!FUNC_9(VAR_12, VAR_15), "result = %s, expected %s\n", FUNC_12(VAR_15), FUNC_12(VAR_12));
    FUNC_7(VAR_15);
    FUNC_7(VAR_14);

    FUNC_5(VAR_5);
    FUNC_5(VAR_6);
}
