
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ VARIANT_BOOL ;
typedef int IXMLDOMDocumentType ;
typedef int IXMLDOMDocument ;
typedef int * HRESULT ;
typedef int BSTR ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int **) ;
 int * FUNC_5 (int *,int ,scalar_t__*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (int,char*,...) ;
 int VAR_5 ;
 int * FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(void)
{
    static const WCHAR VAR_6[] = {'e','m','a','i','l',0};
    IXMLDOMDocumentType *VAR_7;
    IXMLDOMDocument *VAR_8;
    VARIANT_BOOL VAR_9;
    HRESULT VAR_10;
    BSTR VAR_11;

    VAR_8 = FUNC_8(&VAR_1);

    VAR_10 = FUNC_4(VAR_8, ((void*)0));
    FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_7 = (void*)0xdeadbeef;
    VAR_10 = FUNC_4(VAR_8, &VAR_7);
    FUNC_10(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);
    FUNC_10(VAR_7 == ((void*)0), "got %p\n", VAR_7);

    VAR_10 = FUNC_5(VAR_8, FUNC_7(VAR_5), &VAR_9);
    FUNC_10(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    FUNC_10(VAR_9 == VAR_4, "failed to load XML string\n");

    VAR_7 = ((void*)0);
    VAR_10 = FUNC_4(VAR_8, &VAR_7);
    FUNC_10(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    FUNC_10(VAR_7 != ((void*)0), "got %p\n", VAR_7);

    VAR_10 = FUNC_1(VAR_7, ((void*)0));
    FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_7, &VAR_11);
    FUNC_10(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    FUNC_10(!FUNC_9(VAR_6, VAR_11), "got name %s\n", FUNC_11(VAR_11));
    FUNC_6(VAR_11);

    VAR_10 = FUNC_2(VAR_7, &VAR_11);
    FUNC_10(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    FUNC_10(!FUNC_9(VAR_6, VAR_11), "got name %s\n", FUNC_11(VAR_11));
    FUNC_6(VAR_11);

    FUNC_0(VAR_7);
    FUNC_3(VAR_8);
}
