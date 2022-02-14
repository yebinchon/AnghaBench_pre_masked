
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VARIANT_BOOL ;
typedef void* LONG ;
typedef void IXMLDOMNodeList ;
typedef void IXMLDOMNode ;
typedef int IXMLDOMDocument ;
typedef void* HRESULT ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int *,scalar_t__*) ;
 void* FUNC_2 (int *,int *,void**) ;
 void* FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (void*,void**) ;
 int FUNC_6 (void*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_7 (char*) ;
 char* VAR_5 ;
 int * FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    IXMLDOMDocument *VAR_6;
    IXMLDOMNodeList *VAR_7;
    IXMLDOMNode *VAR_8;
    VARIANT_BOOL VAR_9;
    HRESULT VAR_10;
    LONG VAR_11;

    VAR_6 = FUNC_8(&VAR_1);

    VAR_10 = FUNC_3(VAR_6, ((void*)0), ((void*)0));
    FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_2(VAR_6, ((void*)0), ((void*)0));
    FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_1( VAR_6, FUNC_7(VAR_5), &VAR_9 );
    FUNC_10( VAR_10 == VAR_3, "loadXML failed\n");
    FUNC_10( VAR_9 == VAR_4, "failed to load XML string\n");

    VAR_10 = FUNC_3(VAR_6, ((void*)0), ((void*)0));
    FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_2(VAR_6, ((void*)0), ((void*)0));
    FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_3(VAR_6, FUNC_7("lc"), ((void*)0));
    FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_2(VAR_6, FUNC_7("lc"), ((void*)0));
    FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_3(VAR_6, FUNC_7("lc"), &VAR_8);
    FUNC_10(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    FUNC_6(VAR_8);

    VAR_10 = FUNC_2(VAR_6, FUNC_7("lc"), &VAR_7);
    FUNC_10(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    FUNC_4(VAR_7);

    VAR_7 = (void*)0xdeadbeef;
    VAR_10 = FUNC_2(VAR_6, ((void*)0), &VAR_7);
    FUNC_10(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);
    FUNC_10(VAR_7 == (void*)0xdeadbeef, "got %p\n", VAR_7);

    VAR_8 = (void*)0xdeadbeef;
    VAR_10 = FUNC_3(VAR_6, FUNC_7("nonexistent"), &VAR_8);
    FUNC_10(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);
    FUNC_10(VAR_8 == 0, "got %p\n", VAR_8);

    VAR_7 = (void*)0xdeadbeef;
    VAR_10 = FUNC_2(VAR_6, FUNC_7("nonexistent"), &VAR_7);
    FUNC_10(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    VAR_11 = 1;
    VAR_10 = FUNC_5(VAR_7, &VAR_11);
    FUNC_10(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    FUNC_10(VAR_11 == 0, "got %d\n", VAR_11);
    FUNC_4(VAR_7);

    FUNC_0(VAR_6);
    FUNC_9();
}
