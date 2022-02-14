
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
 scalar_t__ FUNC_6 (int *,int *,char const*,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void)
{
    static const WCHAR VAR_2[] = {'a',0};
    static const WCHAR VAR_3[] = {'b',0};
    IXmlWriter *VAR_4;
    IStream *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_1(&VAR_0, (void**)&VAR_4, ((void*)0));
    FUNC_7(VAR_6 == VAR_1, "Expected S_OK, got %08x\n", VAR_6);

    VAR_5 = FUNC_8(VAR_4);

    VAR_6 = FUNC_6(VAR_4, ((void*)0), VAR_2, ((void*)0));
    FUNC_7(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);

    VAR_6 = FUNC_6(VAR_4, ((void*)0), VAR_3, ((void*)0));
    FUNC_7(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);

    VAR_6 = FUNC_5(VAR_4);
    FUNC_7(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);

    VAR_6 = FUNC_5(VAR_4);
    FUNC_7(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);

    VAR_6 = FUNC_3(VAR_4);
    FUNC_7(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);

    FUNC_0(VAR_5, "<a><b /></a>");

    FUNC_4(VAR_4);
    FUNC_2(VAR_5);
}
