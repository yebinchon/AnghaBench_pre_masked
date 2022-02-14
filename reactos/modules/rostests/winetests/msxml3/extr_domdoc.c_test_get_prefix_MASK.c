
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT_BOOL ;
typedef int IXMLDOMElement ;
typedef int IXMLDOMDocumentFragment ;
typedef int IXMLDOMDocument ;
typedef int IXMLDOMComment ;
typedef int IXMLDOMCDATASection ;
typedef int * HRESULT ;
typedef int * BSTR ;


 int FUNC_0 (int *,int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int **) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *,int **) ;
 int * FUNC_9 (int *,int *,int **) ;
 int * FUNC_10 (int *,int **) ;
 int * FUNC_11 (int *,int ,int **) ;
 int * FUNC_12 (int *,int **) ;
 int * FUNC_13 (int *,int **) ;
 int * FUNC_14 (int *,int ,int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *,int **) ;
 int * FUNC_17 (int *,int **) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 int * FUNC_20 (int *) ;
 int FUNC_21 () ;
 char* VAR_4 ;
 scalar_t__ FUNC_22 (int *,int ) ;
 int FUNC_23 (int,char*,...) ;
 int * FUNC_24 (int *) ;

__attribute__((used)) static void FUNC_25(void)
{
    IXMLDOMDocumentFragment *VAR_5;
    IXMLDOMCDATASection *VAR_6;
    IXMLDOMElement *VAR_7;
    IXMLDOMComment *VAR_8;
    IXMLDOMDocument *VAR_9;
    VARIANT_BOOL VAR_10;
    HRESULT VAR_11;
    BSTR VAR_12;

    VAR_9 = FUNC_20(&VAR_1);



    VAR_12 = (void*)0xdeadbeef;
    VAR_11 = FUNC_13(VAR_9, &VAR_12);
    FUNC_0(VAR_11, VAR_2);
    FUNC_23(VAR_12 == ((void*)0), "got %p\n", VAR_12);

    VAR_11 = FUNC_13(VAR_9, ((void*)0));
    FUNC_0(VAR_11, VAR_0);


    VAR_11 = FUNC_8(VAR_9, ((void*)0), &VAR_6);
    FUNC_23(VAR_11 == VAR_3, "got %08x\n", VAR_11 );

    VAR_12 = (void*)0xdeadbeef;
    VAR_11 = FUNC_2(VAR_6, &VAR_12);
    FUNC_23(VAR_11 == VAR_2, "got %08x\n", VAR_11);
    FUNC_23( VAR_12 == 0, "got %p\n", VAR_12);

    VAR_11 = FUNC_2(VAR_6, ((void*)0));
    FUNC_23(VAR_11 == VAR_0, "got %08x\n", VAR_11);
    FUNC_1(VAR_6);


    VAR_11 = FUNC_9(VAR_9, ((void*)0), &VAR_8);
    FUNC_23(VAR_11 == VAR_3, "got %08x\n", VAR_11 );

    VAR_12 = (void*)0xdeadbeef;
    VAR_11 = FUNC_4(VAR_8, &VAR_12);
    FUNC_23(VAR_11 == VAR_2, "got %08x\n", VAR_11);
    FUNC_23( VAR_12 == 0, "got %p\n", VAR_12);

    VAR_11 = FUNC_4(VAR_8, ((void*)0));
    FUNC_23(VAR_11 == VAR_0, "got %08x\n", VAR_11);
    FUNC_3(VAR_8);


    VAR_11 = FUNC_10(VAR_9, &VAR_5);
    FUNC_23(VAR_11 == VAR_3, "got %08x\n", VAR_11 );

    VAR_12 = (void*)0xdeadbeef;
    VAR_11 = FUNC_6(VAR_5, &VAR_12);
    FUNC_23(VAR_11 == VAR_2, "got %08x\n", VAR_11);
    FUNC_23( VAR_12 == 0, "got %p\n", VAR_12);

    VAR_11 = FUNC_6(VAR_5, ((void*)0));
    FUNC_23(VAR_11 == VAR_0, "got %08x\n", VAR_11);
    FUNC_5(VAR_5);


    VAR_11 = FUNC_11(VAR_9, FUNC_19("elem"), &VAR_7);
    FUNC_23( VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_17(VAR_7, ((void*)0));
    FUNC_23( VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

    VAR_12 = (void*)0xdeadbeef;
    VAR_11 = FUNC_17(VAR_7, &VAR_12);
    FUNC_23( VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);
    FUNC_23( VAR_12 == 0, "got %p\n", VAR_12);

    FUNC_15(VAR_7);


    VAR_11 = FUNC_11(VAR_9, FUNC_19("a:elem"), &VAR_7);
    FUNC_23( VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);

    VAR_12 = (void*)0xdeadbeef;
    VAR_11 = FUNC_17(VAR_7, &VAR_12);
    FUNC_23( VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);
    FUNC_23( FUNC_22(VAR_12, FUNC_19("a")) == 0, "expected prefix \"a\"\n");
    FUNC_18(VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_11 = FUNC_16(VAR_7, &VAR_12);
    FUNC_23( VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);
    FUNC_23( VAR_12 == 0, "got %p\n", VAR_12);

    FUNC_15(VAR_7);

    VAR_11 = FUNC_14(VAR_9, FUNC_19(VAR_4), &VAR_10);
    FUNC_0(VAR_11, VAR_3);

    VAR_11 = FUNC_12(VAR_9, &VAR_7);
    FUNC_0(VAR_11, VAR_3);

    VAR_12 = (void*)0xdeadbeef;
    VAR_11 = FUNC_17(VAR_7, &VAR_12);
    FUNC_0(VAR_11, VAR_2);
    FUNC_23(VAR_12 == ((void*)0), "got %p\n", VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_11 = FUNC_16(VAR_7, &VAR_12);
    FUNC_0(VAR_11, VAR_2);
    FUNC_23(VAR_12 == ((void*)0), "got %s\n", FUNC_24(VAR_12));

    FUNC_7(VAR_9);
    FUNC_21();
}
