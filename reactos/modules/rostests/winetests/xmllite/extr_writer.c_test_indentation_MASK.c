
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
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (int *,int *,char const*,int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,int *,char const*,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int,char*,scalar_t__) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static void FUNC_14(void)
{
    static const WCHAR VAR_5[] = {'c','o','m','m','e','n','t',0};
    static const WCHAR VAR_6[] = {'a',0};
    static const WCHAR VAR_7[] = {'b',0};
    IXmlWriter *VAR_8;
    IStream *VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_1(&VAR_0, (void**)&VAR_8, ((void*)0));
    FUNC_11(VAR_10 == VAR_1, "Expected S_OK, got %08x\n", VAR_10);

    VAR_9 = FUNC_12(VAR_8);

    FUNC_13(VAR_8, VAR_4);
    FUNC_13(VAR_8, VAR_3);

    VAR_10 = FUNC_9(VAR_8, VAR_2);
    FUNC_11(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_10(VAR_8, ((void*)0), VAR_6, ((void*)0));
    FUNC_11(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_5(VAR_8, VAR_5);
    FUNC_11(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_10(VAR_8, ((void*)0), VAR_7, ((void*)0));
    FUNC_11(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_7(VAR_8);
    FUNC_11(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_3(VAR_8);
    FUNC_11(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

    FUNC_0(VAR_9,
        "<a>\r\n"
        "  <!--comment-->\r\n"
        "  <b />\r\n"
        "</a>");

    FUNC_2(VAR_9);


    VAR_9 = FUNC_12(VAR_8);

    VAR_10 = FUNC_10(VAR_8, ((void*)0), VAR_6, ((void*)0));
    FUNC_11(VAR_10 == VAR_1, "Unexpected hr %#x.\n", VAR_10);

    VAR_10 = FUNC_6(VAR_8, ((void*)0), VAR_7, ((void*)0), ((void*)0));
    FUNC_11(VAR_10 == VAR_1, "Unexpected hr %#x.\n", VAR_10);

    VAR_10 = FUNC_6(VAR_8, ((void*)0), VAR_7, ((void*)0), ((void*)0));
    FUNC_11(VAR_10 == VAR_1, "Unexpected hr %#x.\n", VAR_10);

    VAR_10 = FUNC_8(VAR_8);
    FUNC_11(VAR_10 == VAR_1, "Unexpected hr %#x.\n", VAR_10);

    VAR_10 = FUNC_3(VAR_8);
    FUNC_11(VAR_10 == VAR_1, "Unexpected hr %#x.\n", VAR_10);

    FUNC_0(VAR_9,
        "<a>\r\n"
        "  <b />\r\n"
        "  <b />\r\n"
        "</a>");

    FUNC_2(VAR_9);

    FUNC_4(VAR_8);
}
