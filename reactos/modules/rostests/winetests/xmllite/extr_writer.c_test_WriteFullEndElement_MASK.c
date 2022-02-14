
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
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int *,char const*,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int,char*,scalar_t__) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static void FUNC_12(void)
{
    static const WCHAR VAR_5[] = {'a',0};
    IXmlWriter *VAR_6;
    IStream *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_1(&VAR_0, (void**)&VAR_6, ((void*)0));
    FUNC_9(VAR_8 == VAR_1, "Expected S_OK, got %08x\n", VAR_8);


    VAR_7 = FUNC_10(VAR_6);

    FUNC_11(VAR_6, VAR_4);
    FUNC_11(VAR_6, VAR_3);

    VAR_8 = FUNC_7(VAR_6, VAR_2);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_8(VAR_6, ((void*)0), VAR_5, ((void*)0));
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_6(VAR_6);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_5(VAR_6);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_3(VAR_6);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    FUNC_0(VAR_7,
        "<a></a>");
    FUNC_2(VAR_7);


    VAR_7 = FUNC_10(VAR_6);

    FUNC_11(VAR_6, VAR_4);
    FUNC_11(VAR_6, VAR_3);

    VAR_8 = FUNC_7(VAR_6, VAR_2);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_8(VAR_6, ((void*)0), VAR_5, ((void*)0));
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_8(VAR_6, ((void*)0), VAR_5, ((void*)0));
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_6(VAR_6);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_5(VAR_6);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_3(VAR_6);
    FUNC_9(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);

    FUNC_0(VAR_7,
        "<a>\r\n"
        "  <a></a>\r\n"
        "</a>");

    FUNC_4(VAR_6);
    FUNC_2(VAR_7);
}
