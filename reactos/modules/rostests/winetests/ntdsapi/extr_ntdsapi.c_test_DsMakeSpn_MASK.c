
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,char const*,int,char const*,scalar_t__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int,char*,scalar_t__,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    DWORD VAR_2;
    WCHAR VAR_3[256];
    DWORD VAR_4;
    static const WCHAR VAR_5[] = {'c','l','a','s','s',0};
    static const WCHAR VAR_6[] = {'h','o','s','t',0};
    static const WCHAR VAR_7[] = {'i','n','s','t','a','n','c','e',0};
    static const WCHAR VAR_8[] = {'r','e','f','e','r','r','e','r',0};
    static const WCHAR VAR_9[] = {'c','l','a','s','s','/','h','o','s','t',0};
    static const WCHAR VAR_10[] = {'c','l','a','s','s','/','i','n','s','t','a','n','c','e','/','h','o','s','t',0};
    static const WCHAR VAR_11[] = {'c','l','a','s','s','/','i','n','s','t','a','n','c','e',':','5','5','5','/','h','o','s','t',0};
    static const WCHAR VAR_12[] = {'c','l','a','s','s','/','i','n','s','t','a','n','c','e',':','5','5','5','/','h','o','s','t',0};
    static const WCHAR VAR_13[] = {'c','l','a','s','s','/','h','o','s','t',':','5','5','5',0};

    VAR_3[0] = '\0';

    VAR_4 = FUNC_0(VAR_3);
    VAR_2 = FUNC_1(((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), &VAR_4, VAR_3);
    FUNC_4(VAR_2 == VAR_0, "DsMakeSpnW should have failed with ERROR_INVALID_PARAMETER instead of %d\n", VAR_2);

    VAR_4 = FUNC_0(VAR_3);
    VAR_2 = FUNC_1(((void*)0), VAR_6, ((void*)0), 0, ((void*)0), &VAR_4, VAR_3);
    FUNC_4(VAR_2 == VAR_0, "DsMakeSpnW should have failed with ERROR_INVALID_PARAMETER instead of %d\n", VAR_2);

    VAR_4 = FUNC_0(VAR_3);
    VAR_2 = FUNC_1(VAR_5, VAR_6, ((void*)0), 0, ((void*)0), &VAR_4, VAR_3);
    FUNC_4(VAR_2 == VAR_1, "DsMakeSpnW should have succeeded instead of failing with %d\n", VAR_2);
    FUNC_4(!FUNC_2(VAR_3, VAR_9), "DsMakeSpnW returned unexpected SPN %s\n", FUNC_5(VAR_3));
    FUNC_4(VAR_4 == FUNC_3(VAR_9) + 1, "DsMakeSpnW should have returned spn_length of %d instead of %d\n", FUNC_3(VAR_9) + 1, VAR_4);

    VAR_4 = FUNC_0(VAR_3);
    VAR_2 = FUNC_1(VAR_5, VAR_6, VAR_7, 0, ((void*)0), &VAR_4, VAR_3);
    FUNC_4(VAR_2 == VAR_1, "DsMakeSpnW should have succeeded instead of failing with %d\n", VAR_2);
    FUNC_4(!FUNC_2(VAR_3, VAR_10), "DsMakeSpnW returned unexpected SPN %s\n", FUNC_5(VAR_3));
    FUNC_4(VAR_4 == FUNC_3(VAR_10) + 1, "DsMakeSpnW should have returned spn_length of %d instead of %d\n", FUNC_3(VAR_10) + 1, VAR_4);

    VAR_4 = FUNC_0(VAR_3);
    VAR_2 = FUNC_1(VAR_5, VAR_6, VAR_7, 555, ((void*)0), &VAR_4, VAR_3);
    FUNC_4(VAR_2 == VAR_1, "DsMakeSpnW should have succeeded instead of failing with %d\n", VAR_2);
    FUNC_4(!FUNC_2(VAR_3, VAR_11), "DsMakeSpnW returned unexpected SPN %s\n", FUNC_5(VAR_3));
    FUNC_4(VAR_4 == FUNC_3(VAR_11) + 1, "DsMakeSpnW should have returned spn_length of %d instead of %d\n", FUNC_3(VAR_11) + 1, VAR_4);

    VAR_4 = FUNC_0(VAR_3);
    VAR_2 = FUNC_1(VAR_5, VAR_6, VAR_7, 555, VAR_8, &VAR_4, VAR_3);
    FUNC_4(VAR_2 == VAR_1, "DsMakeSpnW should have succeeded instead of failing with %d\n", VAR_2);
    FUNC_4(!FUNC_2(VAR_3, VAR_12), "DsMakeSpnW returned unexpected SPN %s\n", FUNC_5(VAR_3));
    FUNC_4(VAR_4 == FUNC_3(VAR_12) + 1, "DsMakeSpnW should have returned spn_length of %d instead of %d\n", FUNC_3(VAR_12) + 1, VAR_4);

    VAR_4 = FUNC_0(VAR_3);
    VAR_2 = FUNC_1(VAR_5, VAR_6, ((void*)0), 555, VAR_8, &VAR_4, VAR_3);
    FUNC_4(VAR_2 == VAR_1, "DsMakeSpnW should have succeeded instead of failing with %d\n", VAR_2);
    FUNC_4(!FUNC_2(VAR_3, VAR_13), "DsMakeSpnW returned unexpected SPN %s\n", FUNC_5(VAR_3));
    FUNC_4(VAR_4 == FUNC_3(VAR_13) + 1, "DsMakeSpnW should have returned spn_length of %d instead of %d\n", FUNC_3(VAR_13) + 1, VAR_4);
}
