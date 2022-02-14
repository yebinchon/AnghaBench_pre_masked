
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ITypeLib ;
typedef scalar_t__ HRESULT ;
typedef int * HINSTANCE ;
typedef scalar_t__ BSTR ;


 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__*,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,char const*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(void)
{
    ITypeLib *VAR_1;
    HINSTANCE VAR_2;
    size_t VAR_3;
    BSTR VAR_4;
    HRESULT VAR_5;

    static const WCHAR VAR_6[] = {'\\','s','c','r','r','u','n','.','d','l','l',0};
    static const WCHAR VAR_7[] = {'\\','m','s','h','t','m','l','.','t','l','b',0};

    VAR_2 = FUNC_4("scrrun.dll");
    FUNC_8(VAR_2 != ((void*)0), "Could not load scrrun.dll\n");

    VAR_1 = ((void*)0);
    VAR_5 = FUNC_1(VAR_2, ((void*)0), &VAR_4, &VAR_1);
    FUNC_8(VAR_5 == VAR_0, "AtlLoadTypeLib failed: %08x\n", VAR_5);
    FUNC_2(VAR_2);

    VAR_3 = FUNC_6(VAR_4);
    FUNC_8(VAR_3 > FUNC_0(VAR_6)
       && FUNC_7(VAR_4+VAR_3-FUNC_0(VAR_6), VAR_6),
       "unexpected path %s\n", FUNC_9(VAR_4));
    FUNC_5(VAR_4);
    FUNC_8(VAR_1 != ((void*)0), "typelib == NULL\n");
    FUNC_3(VAR_1);

    VAR_2 = FUNC_4("mshtml.dll");
    FUNC_8(VAR_2 != ((void*)0), "Could not load mshtml.dll\n");

    VAR_1 = ((void*)0);
    VAR_5 = FUNC_1(VAR_2, ((void*)0), &VAR_4, &VAR_1);
    FUNC_8(VAR_5 == VAR_0, "AtlLoadTypeLib failed: %08x\n", VAR_5);
    FUNC_2(VAR_2);

    VAR_3 = FUNC_6(VAR_4);
    FUNC_8(VAR_3 > FUNC_0(VAR_7)
       && FUNC_7(VAR_4+VAR_3-FUNC_0(VAR_7), VAR_7),
       "unexpected path %s\n", FUNC_9(VAR_4));
    FUNC_5(VAR_4);
    FUNC_8(VAR_1 != ((void*)0), "typelib == NULL\n");
    FUNC_3(VAR_1);
}
