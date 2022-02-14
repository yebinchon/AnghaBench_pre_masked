
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int,char*,int,...) ;
 int FUNC_7 (char const*,char const*,char*,int ,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    DWORD VAR_1;
    WCHAR VAR_2[64] = {0};

    static const WCHAR VAR_3[] = {'T','e','s','t','A','p','p',0};
    static const WCHAR VAR_4[] = {'A','K','e','y',0};
    static const WCHAR VAR_5[] = {'A','n','o','t','h','e','r','K','e','y',0};
    static const WCHAR VAR_6[] = {'J','u','n','k','K','e','y',0};
    static const WCHAR VAR_7[] = {'C',':','\\','t','e','s','t','.','i','n','i',0};
    WCHAR VAR_8[VAR_0];

    FUNC_5(VAR_8, VAR_7);

    if (!FUNC_10(VAR_8))
        return;

    if(0){

        FUNC_7(((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
        FUNC_7(((void*)0), VAR_4, VAR_2, FUNC_0(VAR_2), VAR_8);
        FUNC_7(VAR_3, VAR_4, ((void*)0), FUNC_0(VAR_2), VAR_8);
    }

    VAR_1 = FUNC_7(VAR_3, VAR_4, VAR_2, 0, VAR_8);
    FUNC_6(VAR_1 == 0, "SHGetIniStringW should have given 0, instead: %d\n", VAR_1);


    VAR_2[0] = 0;
    FUNC_3(0xdeadbeef);
    VAR_1 = FUNC_7(VAR_3, ((void*)0), VAR_2, FUNC_0(VAR_2), VAR_8);
    FUNC_6(VAR_1 == 4, "SHGetIniStringW should have given 4, instead: %d\n", VAR_1);
    FUNC_6(!FUNC_4(VAR_2, VAR_4), "Expected %s, got: %s, %d\n",
                FUNC_9(VAR_4), FUNC_9(VAR_2), FUNC_2());

    VAR_1 = FUNC_7(VAR_3, VAR_4, VAR_2, FUNC_0(VAR_2), VAR_8);
    FUNC_6(VAR_1 == 1, "SHGetIniStringW should have given 1, instead: %d\n", VAR_1);
    FUNC_6(!FUNC_8(VAR_2, "1"), "Expected L\"1\", got: %s\n", FUNC_9(VAR_2));

    VAR_1 = FUNC_7(VAR_3, VAR_5, VAR_2, FUNC_0(VAR_2), VAR_8);
    FUNC_6(VAR_1 == 4, "SHGetIniStringW should have given 4, instead: %d\n", VAR_1);
    FUNC_6(!FUNC_8(VAR_2, "asdf"), "Expected L\"asdf\", got: %s\n", FUNC_9(VAR_2));

    VAR_2[0] = 1;
    VAR_1 = FUNC_7(VAR_3, VAR_6, VAR_2, FUNC_0(VAR_2), VAR_8);
    FUNC_6(VAR_1 == 0, "SHGetIniStringW should have given 0, instead: %d\n", VAR_1);
    FUNC_6(*VAR_2 == 0, "Expected L\"\", got: %s\n", FUNC_9(VAR_2));

    FUNC_1(VAR_8);
}
