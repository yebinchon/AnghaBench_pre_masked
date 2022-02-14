
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VARIANT_BOOL ;
typedef int VARIANT ;
typedef scalar_t__ LONG ;
typedef int IXMLDOMSchemaCollection ;
typedef int IXMLDOMNodeList ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMElement ;
typedef int IXMLDOMDocument2 ;
typedef int IXMLDOMDocument ;
typedef int IXMLDOMAttribute ;
typedef int HRESULT ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int ,scalar_t__*) ;
 int FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,int ,scalar_t__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int **) ;
 int FUNC_12 (int *,int **) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int,int **) ;
 int FUNC_15 (int *,scalar_t__*) ;
 int FUNC_16 (int *,int *,void**) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int **) ;
 int FUNC_19 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (char const*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 char* VAR_8 ;
 int * FUNC_24 (int *) ;
 int * FUNC_25 (int *) ;
 int FUNC_26 () ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (int,char*,...) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int *,int *) ;
 int FUNC_31 (int *) ;

__attribute__((used)) static void FUNC_32(void)
{
    IXMLDOMDocument *VAR_9, *VAR_10, *VAR_11;
    IXMLDOMDocument2 *VAR_12, *VAR_13;
    IXMLDOMNode *VAR_14;
    IXMLDOMSchemaCollection *VAR_15;
    VARIANT_BOOL VAR_16;
    VARIANT VAR_17;
    IXMLDOMElement *VAR_18;
    IXMLDOMNodeList *VAR_19;
    IXMLDOMAttribute *VAR_20;
    LONG VAR_21, VAR_22;
    HRESULT VAR_23;
    const CHAR VAR_24[] =
    "<root id='0'>"
    "   <!-- comment node 0 -->"
    "   text node 0"
    "   <x attr='val'></x>"
    "   <?foo value='PI for x'?>"
    "   <![CDATA[ cdata ]]>"
    "</root>";

    if (!FUNC_27(&VAR_0, &VAR_3)) return;
    if (!FUNC_27(&VAR_1, &VAR_5)) return;

    VAR_12 = FUNC_25(&VAR_3);
    VAR_15 = FUNC_24(&VAR_5);

    FUNC_20(&VAR_17);

    FUNC_29(FUNC_5(VAR_12, FUNC_21(VAR_8), &VAR_16));
    FUNC_28(VAR_16 == VAR_7, "failed to load XML string\n");

    FUNC_22(VAR_12);


    FUNC_30(VAR_12, VAR_15);
    FUNC_23(VAR_12);

    FUNC_29(FUNC_4(VAR_12, &VAR_14));
    FUNC_29(FUNC_18(VAR_14, &VAR_9));


    FUNC_29(FUNC_6(VAR_9, &VAR_3, (void**)&VAR_13));
    FUNC_28( VAR_13 != VAR_12, "got %p, doc %p\n", VAR_13, VAR_12);
    FUNC_23(VAR_13);
    FUNC_3(VAR_13);

    FUNC_29(FUNC_18(VAR_14, &VAR_10));
    FUNC_17(VAR_14);

    FUNC_28(VAR_9 != VAR_10, "got %p, expected %p. original %p\n", VAR_10, VAR_9, VAR_12);


    FUNC_29(FUNC_5(VAR_12, FUNC_21(VAR_8), &VAR_16));
    FUNC_28(VAR_16 == VAR_7, "failed to load XML string\n");


    FUNC_23(VAR_12);

    FUNC_29(FUNC_4(VAR_12, &VAR_14));
    FUNC_29(FUNC_18(VAR_14, &VAR_11));
    FUNC_17(VAR_14);

    FUNC_29(FUNC_6(VAR_11, &VAR_3, (void**)&VAR_13));
    FUNC_28(VAR_11 != VAR_9 && VAR_11 != VAR_10 && VAR_13 != VAR_12, "got %p, (%p, %p, %p)\n", VAR_11, VAR_12, VAR_9, VAR_10);
    FUNC_23(VAR_13);


    FUNC_31(VAR_13);
    FUNC_22(VAR_13);
    FUNC_22(VAR_12);


    VAR_23 = FUNC_9(VAR_9, FUNC_21(VAR_24), &VAR_16);
    FUNC_0(VAR_23, VAR_6);
    FUNC_28(VAR_16 == VAR_7, "failed to load XML string\n");

    VAR_23 = FUNC_8(VAR_9, &VAR_18);
    FUNC_0(VAR_23, VAR_6);

    VAR_23 = FUNC_12(VAR_18, &VAR_19);
    FUNC_0(VAR_23, VAR_6);

    VAR_23 = FUNC_15(VAR_19, &VAR_22);
    FUNC_0(VAR_23, VAR_6);

    for(VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
        VAR_23 = FUNC_14(VAR_19, VAR_21, &VAR_14);
        FUNC_0(VAR_23, VAR_6);

        VAR_23 = FUNC_18(VAR_14, ((void*)0));
        FUNC_0(VAR_23, VAR_2);

        FUNC_17(VAR_14);
    }
    FUNC_10(VAR_18);


    VAR_23 = FUNC_14(VAR_19, 2, &VAR_14);
    FUNC_0(VAR_23, VAR_6);
    VAR_23 = FUNC_16(VAR_14, &VAR_4, (void**)&VAR_18);
    FUNC_0(VAR_23, VAR_6);
    FUNC_17(VAR_14);

    VAR_23 = FUNC_11(VAR_18, FUNC_21("attr"), &VAR_20);
    FUNC_0(VAR_23, VAR_6);
    FUNC_28(VAR_20 != ((void*)0), "attr == NULL\n");
    FUNC_10(VAR_18);
    VAR_23 = FUNC_2(VAR_20, ((void*)0));
    FUNC_0(VAR_23, VAR_2);
    FUNC_1(VAR_20);
    FUNC_13(VAR_19);

    FUNC_19(VAR_15);
    FUNC_7(VAR_9);
    FUNC_7(VAR_10);
    FUNC_7(VAR_11);
    FUNC_3(VAR_12);
    FUNC_3(VAR_13);
    FUNC_26();
}
