
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,char const*,int *,char const*) ;
 scalar_t__ FUNC_6 (int *,char const*,char const*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,char const*,char const*,char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int,char*,scalar_t__) ;
 int * FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void)
{
    static const WCHAR VAR_6[] = {'v','a','l','u','e',0};
    static const WCHAR VAR_7[] = {'a',0};
    static const WCHAR VAR_8[] = {'b',0};
    IXmlWriter *VAR_9;
    IStream *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_1(&VAR_2, (void**)&VAR_9, ((void*)0));
    FUNC_9(VAR_11 == VAR_3, "Expected S_OK, got %08x\n", VAR_11);

    VAR_11 = FUNC_8(VAR_9, ((void*)0), VAR_7, ((void*)0));
    FUNC_9(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    VAR_10 = FUNC_10(VAR_9);

    VAR_11 = FUNC_8(VAR_9, VAR_7, ((void*)0), ((void*)0));
    FUNC_9(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_8(VAR_9, ((void*)0), ((void*)0), ((void*)0));
    FUNC_9(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_8(VAR_9, ((void*)0), ((void*)0), VAR_7);
    FUNC_9(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_8(VAR_9, ((void*)0), VAR_7, ((void*)0));
    FUNC_9(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_7(VAR_9, VAR_5);
    FUNC_9(VAR_11 == VAR_4, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_3(VAR_9);
    FUNC_9(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);

    FUNC_0(VAR_10, "<a");

    VAR_11 = FUNC_7(VAR_9, VAR_5);
    FUNC_9(VAR_11 == VAR_4, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_8(VAR_9, ((void*)0), ((void*)0), ((void*)0));
    FUNC_9(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_6(VAR_9, VAR_7, VAR_7);
    FUNC_9(VAR_11 == VAR_4, "got 0x%08x\n", VAR_11);

    FUNC_2(VAR_10);
    FUNC_4(VAR_9);


    VAR_11 = FUNC_1(&VAR_2, (void**)&VAR_9, ((void*)0));
    FUNC_9(VAR_11 == VAR_3, "Expected S_OK, got %08x\n", VAR_11);

    VAR_11 = FUNC_5(VAR_9, ((void*)0), VAR_8, ((void*)0), VAR_6);
    FUNC_9(VAR_11 == VAR_1, "got 0x%08x\n", VAR_11);

    VAR_10 = FUNC_10(VAR_9);

    VAR_11 = FUNC_8(VAR_9, ((void*)0), VAR_7, ((void*)0));
    FUNC_9(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_5(VAR_9, ((void*)0), VAR_8, ((void*)0), VAR_6);
    FUNC_9(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_5(VAR_9, ((void*)0), VAR_8, ((void*)0), ((void*)0));
    FUNC_9(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_3(VAR_9);
    FUNC_9(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);

    FUNC_0(VAR_10,
        "<a><b>value</b><b />");

    FUNC_2(VAR_10);
    FUNC_4(VAR_9);
}
