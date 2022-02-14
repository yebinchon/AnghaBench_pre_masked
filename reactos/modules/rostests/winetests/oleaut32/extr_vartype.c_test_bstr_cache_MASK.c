
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ BSTR ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int *,int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,char const*) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    BSTR VAR_0, VAR_1, VAR_2[20];
    unsigned VAR_3;

    static const WCHAR VAR_4[] = {'t','e','s','t',0};

    if (FUNC_2("OANOCACHE", ((void*)0), 0)) {
        FUNC_9("BSTR cache is disabled, some tests will be skipped.\n");
        return;
    }

    VAR_0 = FUNC_3(VAR_4);

    FUNC_5(VAR_0);

    FUNC_5(VAR_0);

    FUNC_8(FUNC_6(VAR_0) == 4, "unexpected len\n");
    FUNC_8(!FUNC_7(VAR_0, VAR_4), "string changed\n");

    VAR_1 = FUNC_3(VAR_4);
    FUNC_8(VAR_0 == VAR_1, "str != str2\n");
    FUNC_5(VAR_1);




    for(VAR_3=0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
    {
        DWORD_PTR *VAR_5 = FUNC_1(64);
        VAR_5[0] = 0;
        VAR_2[VAR_3] = (BSTR)(VAR_5 + 1);
    }
    for(VAR_3=0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
        FUNC_5(VAR_2[VAR_3]);


    VAR_0 = FUNC_4(((void*)0), 24);
    FUNC_8(VAR_0 == VAR_2[0], "str != strs[0]\n");


    VAR_1 = FUNC_4(((void*)0), 16);
    FUNC_8(VAR_1 == VAR_2[1], "str2 != strs[1]\n");

    FUNC_5(VAR_0);
    FUNC_5(VAR_1);
    FUNC_5(VAR_0);
    FUNC_5(VAR_1);
}
