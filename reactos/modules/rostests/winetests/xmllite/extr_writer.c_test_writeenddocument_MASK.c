
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IXmlWriter ;
typedef int IUnknown ;
typedef int IStream ;
typedef char* HRESULT ;
typedef int HGLOBAL ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *,void**,int *) ;
 char* VAR_0 ;
 char* FUNC_2 (int *,int *) ;
 char* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,int *) ;
 char* FUNC_8 (int *) ;
 char* FUNC_9 (int *,int ) ;
 char* FUNC_10 (int *,int *,char const*,int *) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int,char*,char*) ;
 int * FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(void)
{
    static const WCHAR VAR_5[] = {'a',0};
    static const WCHAR VAR_6[] = {'b',0};
    IXmlWriter *VAR_7;
    IStream *VAR_8;
    HGLOBAL VAR_9;
    HRESULT VAR_10;
    char *VAR_11;

    VAR_10 = FUNC_1(&VAR_1, (void**)&VAR_7, ((void*)0));
    FUNC_11(VAR_10 == VAR_2, "Expected S_OK, got %08x\n", VAR_10);

    VAR_10 = FUNC_8(VAR_7);
    FUNC_11(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_8 = FUNC_12(VAR_7);


    VAR_10 = FUNC_8(VAR_7);
    FUNC_11(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_8(VAR_7);
    FUNC_11(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_9(VAR_7, VAR_4);
    FUNC_11(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_10(VAR_7, ((void*)0), VAR_5, ((void*)0));
    FUNC_11(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_7(VAR_7, (IUnknown*)VAR_8);
    FUNC_11(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_10(VAR_7, ((void*)0), VAR_5, ((void*)0));
    FUNC_11(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_10(VAR_7, ((void*)0), VAR_6, ((void*)0));
    FUNC_11(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_8(VAR_7);
    FUNC_11(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_2(VAR_8, &VAR_9);
    FUNC_11(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_11 = FUNC_3(VAR_9);
    FUNC_11(VAR_11 == ((void*)0), "got %p\n", VAR_11);


    VAR_10 = FUNC_5(VAR_7);
    FUNC_11(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    FUNC_0(VAR_8, "<a><b /></a>");

    FUNC_6(VAR_7);
    FUNC_4(VAR_8);
}
