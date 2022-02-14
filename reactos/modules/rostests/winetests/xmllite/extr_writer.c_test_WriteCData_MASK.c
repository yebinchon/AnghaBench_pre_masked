
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IXmlWriter ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,void**,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (int *,int *,char const*,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(void)
{
    static const WCHAR VAR_4[] = {']',']','>',0};
    static const WCHAR VAR_5[] = {'a',']',']','>','b',0};
    static const WCHAR VAR_6[] = {'a',0};
    static const WCHAR VAR_7[] = {'b',0};
    IXmlWriter *VAR_8;
    IStream *VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_1(&VAR_1, (void**)&VAR_8, ((void*)0));
    FUNC_7(VAR_10 == VAR_2, "Expected S_OK, got %08x\n", VAR_10);

    FUNC_9(VAR_8, VAR_3);

    VAR_10 = FUNC_5(VAR_8, VAR_6);
    FUNC_7(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_9 = FUNC_8(VAR_8);

    VAR_10 = FUNC_6(VAR_8, ((void*)0), VAR_7, ((void*)0));
    FUNC_7(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_5(VAR_8, VAR_6);
    FUNC_7(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_5(VAR_8, ((void*)0));
    FUNC_7(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_5(VAR_8, VAR_4);
    FUNC_7(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_5(VAR_8, VAR_5);
    FUNC_7(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_3(VAR_8);
    FUNC_7(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    FUNC_0(VAR_9,
        "<b>"
        "<![CDATA[a]]>"
        "<![CDATA[]]>"
        "<![CDATA[]]]]>"
        "<![CDATA[>]]>"
        "<![CDATA[a]]]]>"
        "<![CDATA[>b]]>");

    FUNC_4(VAR_8);
    FUNC_2(VAR_9);
}
