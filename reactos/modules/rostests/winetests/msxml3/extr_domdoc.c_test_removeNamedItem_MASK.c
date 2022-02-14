
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
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (int *,int *,void**) ;
 int FUNC_8 (int *,void*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,void**) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_15 (int ) ;
 int VAR_5 ;
 int * FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int,char*,...) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_19(void)
{
    IXMLDOMDocument *VAR_7;
    IXMLDOMElement *VAR_8;
    IXMLDOMNode *VAR_9, *VAR_10, *VAR_11;
    IXMLDOMNodeList *VAR_12;
    IXMLDOMNamedNodeMap * VAR_13;
    VARIANT_BOOL VAR_14;
    BSTR VAR_15;
    LONG VAR_16;
    HRESULT VAR_17;

    VAR_7 = FUNC_16(&VAR_1);

    VAR_17 = FUNC_2( VAR_7, FUNC_15(VAR_5), &VAR_14 );
    FUNC_18( VAR_17 == VAR_3, "loadXML failed\n");
    FUNC_18( VAR_14 == VAR_4, "failed to load XML string\n");

    VAR_17 = FUNC_1( VAR_7, &VAR_8 );
    FUNC_18( VAR_17 == VAR_3, "ret %08x\n", VAR_17);

    VAR_17 = FUNC_4( VAR_8, &VAR_12 );
    FUNC_18( VAR_17 == VAR_3, "ret %08x\n", VAR_17);

    VAR_17 = FUNC_10( VAR_12, 1, &VAR_9 );
    FUNC_18( VAR_17 == VAR_3, "ret %08x\n", VAR_17);

    VAR_17 = FUNC_12( VAR_9, &VAR_13 );
    FUNC_18( VAR_17 == VAR_3, "ret %08x\n", VAR_17);

    VAR_17 = FUNC_6( VAR_13, &VAR_16 );
    FUNC_18( VAR_17 == VAR_3, "ret %08x\n", VAR_17);
    FUNC_18( VAR_16 == 3, "length %d\n", VAR_16);

    VAR_10 = (void*)0xdeadbeef;
    VAR_17 = FUNC_7( VAR_13, ((void*)0), &VAR_10);
    FUNC_18 ( VAR_17 == VAR_0, "ret %08x\n", VAR_17);
    FUNC_18 ( VAR_10 == (void*)0xdeadbeef, "got %p\n", VAR_10);

    VAR_10 = (void*)0xdeadbeef;
    VAR_15 = FUNC_13(VAR_6);
    VAR_17 = FUNC_7( VAR_13, VAR_15, &VAR_10);
    FUNC_18 ( VAR_17 == VAR_3, "ret %08x\n", VAR_17);

    VAR_11 = (void*)0xdeadbeef;
    VAR_17 = FUNC_7( VAR_13, VAR_15, &VAR_11);
    FUNC_18 ( VAR_17 == VAR_2, "ret %08x\n", VAR_17);
    FUNC_18 ( VAR_11 == ((void*)0), "got %p\n", VAR_11 );

    VAR_17 = FUNC_6( VAR_13, &VAR_16 );
    FUNC_18( VAR_17 == VAR_3, "ret %08x\n", VAR_17);
    FUNC_18( VAR_16 == 2, "length %d\n", VAR_16);

    VAR_17 = FUNC_8( VAR_13, VAR_10, ((void*)0));
    FUNC_18 ( VAR_17 == VAR_3, "ret %08x\n", VAR_17);
    FUNC_11(VAR_10);

    VAR_17 = FUNC_6( VAR_13, &VAR_16 );
    FUNC_18( VAR_17 == VAR_3, "ret %08x\n", VAR_17);
    FUNC_18( VAR_16 == 3, "length %d\n", VAR_16);

    VAR_17 = FUNC_7( VAR_13, VAR_15, ((void*)0));
    FUNC_18 ( VAR_17 == VAR_3, "ret %08x\n", VAR_17);

    VAR_17 = FUNC_6( VAR_13, &VAR_16 );
    FUNC_18( VAR_17 == VAR_3, "ret %08x\n", VAR_17);
    FUNC_18( VAR_16 == 2, "length %d\n", VAR_16);

    VAR_17 = FUNC_7( VAR_13, VAR_15, ((void*)0));
    FUNC_18 ( VAR_17 == VAR_2, "ret %08x\n", VAR_17);

    FUNC_14(VAR_15);

    FUNC_5( VAR_13 );
    FUNC_11( VAR_9 );
    FUNC_9( VAR_12 );
    FUNC_3( VAR_8 );
    FUNC_0( VAR_7 );

    FUNC_17();
}
