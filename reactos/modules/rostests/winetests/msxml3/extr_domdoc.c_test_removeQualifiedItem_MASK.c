
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VARIANT_BOOL ;
typedef int LONG ;
typedef int IXMLDOMNodeList ;
typedef void IXMLDOMNode ;
typedef int IXMLDOMNamedNodeMap ;
typedef int IXMLDOMElement ;
typedef int IXMLDOMDocument ;
typedef void* HRESULT ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int **) ;
 void* FUNC_2 (int *,int *,scalar_t__*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *,int*) ;
 void* FUNC_7 (int *,int *,int *,void**) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int *,int,void**) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (void*,int **) ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_12 (char*) ;
 char* VAR_5 ;
 int * FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int,char*,...) ;

__attribute__((used)) static void FUNC_16(void)
{
    IXMLDOMDocument *VAR_6;
    IXMLDOMElement *VAR_7;
    IXMLDOMNode *VAR_8, *VAR_9;
    IXMLDOMNodeList *VAR_10;
    IXMLDOMNamedNodeMap *VAR_11;
    VARIANT_BOOL VAR_12;
    LONG VAR_13;
    HRESULT VAR_14;

    VAR_6 = FUNC_13(&VAR_1);

    VAR_14 = FUNC_2( VAR_6, FUNC_12(VAR_5), &VAR_12 );
    FUNC_15( VAR_14 == VAR_3, "loadXML failed\n");
    FUNC_15( VAR_12 == VAR_4, "failed to load XML string\n");

    VAR_14 = FUNC_1(VAR_6, &VAR_7);
    FUNC_15( VAR_14 == VAR_3, "ret %08x\n", VAR_14);

    VAR_14 = FUNC_4(VAR_7, &VAR_10);
    FUNC_15( VAR_14 == VAR_3, "ret %08x\n", VAR_14);

    VAR_14 = FUNC_9(VAR_10, 1, &VAR_8);
    FUNC_15( VAR_14 == VAR_3, "ret %08x\n", VAR_14);
    FUNC_8(VAR_10);

    VAR_14 = FUNC_11(VAR_8, &VAR_11);
    FUNC_15( VAR_14 == VAR_3, "ret %08x\n", VAR_14);
    FUNC_10(VAR_8);

    VAR_14 = FUNC_6(VAR_11, &VAR_13);
    FUNC_15( VAR_14 == VAR_3, "ret %08x\n", VAR_14);
    FUNC_15( VAR_13 == 3, "length %d\n", VAR_13);

    VAR_14 = FUNC_7(VAR_11, ((void*)0), ((void*)0), ((void*)0));
    FUNC_15( VAR_14 == VAR_0, "ret %08x\n", VAR_14);

    VAR_9 = (void*)0xdeadbeef;
    VAR_14 = FUNC_7(VAR_11, ((void*)0), ((void*)0), &VAR_9);
    FUNC_15( VAR_14 == VAR_0, "ret %08x\n", VAR_14);
    FUNC_15( VAR_9 == (void*)0xdeadbeef, "got %p\n", VAR_9);


    VAR_14 = FUNC_7(VAR_11, FUNC_12("id"), ((void*)0), ((void*)0));
    FUNC_15( VAR_14 == VAR_3, "ret %08x\n", VAR_14);


    VAR_14 = FUNC_7(VAR_11, FUNC_12("id"), ((void*)0), ((void*)0));
    FUNC_15( VAR_14 == VAR_2, "ret %08x\n", VAR_14);

    VAR_14 = FUNC_7(VAR_11, FUNC_12("vr"), ((void*)0), &VAR_9);
    FUNC_15( VAR_14 == VAR_3, "ret %08x\n", VAR_14);
    FUNC_10(VAR_9);

    FUNC_5( VAR_11 );
    FUNC_3( VAR_7 );
    FUNC_0( VAR_6 );
    FUNC_14();
}
