
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VARIANT_BOOL ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMElement ;
typedef int IXMLDOMDocument ;
typedef int IXMLDOMAttribute ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;
typedef int * BSTR ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (int *,int ,int **) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ,int **) ;
 scalar_t__ FUNC_10 (int *,int *,void**) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int **) ;
 scalar_t__ FUNC_13 (int *,int **) ;
 scalar_t__ FUNC_14 (int *,int **) ;
 scalar_t__ FUNC_15 (int *,int **) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_17 (char const*) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 () ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int,char*,scalar_t__) ;
 int * FUNC_22 (int *) ;

__attribute__((used)) static void FUNC_23(void)
{
    static const CHAR VAR_6[] =
        "<?xml version=\"1.0\"?>\n"
        "<XMI xmi.version=\"1.1\" xmlns:Model=\"http://omg.org/mof.Model/1.3\">"
        "  <XMI.content>"
        "    <Model:Package name=\"WinePackage\" Model:name2=\"name2 attr\" />"
        "  </XMI.content>"
        "</XMI>";

    IXMLDOMDocument *VAR_7;
    IXMLDOMElement *VAR_8;
    IXMLDOMNode *VAR_9;

    VARIANT_BOOL VAR_10;
    HRESULT VAR_11;
    BSTR VAR_12;

    VAR_7 = FUNC_18(&VAR_1);

    VAR_11 = FUNC_6(VAR_7, FUNC_17(VAR_6), &VAR_10);
    FUNC_0(VAR_11, VAR_4);
    FUNC_21(VAR_10 == VAR_5, "got %d\n", VAR_10);

    VAR_12 = (void *)0xdeadbeef;
    VAR_11 = FUNC_5(VAR_7, &VAR_12);
    FUNC_0(VAR_11, VAR_3);
    FUNC_21(VAR_12 == ((void*)0), "got %p\n", VAR_12);

    VAR_11 = FUNC_7(VAR_7, FUNC_17("//XMI.content"), &VAR_9 );
    FUNC_0(VAR_11, VAR_4);
    if(VAR_11 == VAR_4)
    {
        IXMLDOMAttribute *VAR_13;
        IXMLDOMNode *VAR_14;

        VAR_11 = FUNC_12(VAR_9, &VAR_14);
        FUNC_0(VAR_11, VAR_4);
        FUNC_21(VAR_14 != ((void*)0), "got %p\n", VAR_14);


        VAR_11 = FUNC_15(VAR_14, ((void*)0));
        FUNC_0(VAR_11, VAR_0);


        VAR_11 = FUNC_15(VAR_14, &VAR_12);
        FUNC_0(VAR_11, VAR_4);
        FUNC_21( !FUNC_20( VAR_12, FUNC_17("Model")), "got %s\n", FUNC_22(VAR_12));
        FUNC_16(VAR_12);

        VAR_11 = FUNC_14(VAR_14, &VAR_12);
        FUNC_0(VAR_11, VAR_4);
        FUNC_21(!FUNC_20( VAR_12, FUNC_17("Model:Package")), "got %s\n", FUNC_22(VAR_12));
        FUNC_16(VAR_12);


        VAR_11 = FUNC_13(VAR_14, ((void*)0));
        FUNC_0(VAR_11, VAR_0);


        VAR_11 = FUNC_13(VAR_14, &VAR_12);
        FUNC_0(VAR_11, VAR_4);
        FUNC_21(!FUNC_20( VAR_12, FUNC_17("http://omg.org/mof.Model/1.3")), "got %s\n", FUNC_22(VAR_12));
        FUNC_16(VAR_12);

        VAR_11 = FUNC_10(VAR_14, &VAR_2, (void**)&VAR_8);
        FUNC_0(VAR_11, VAR_4);

        VAR_11 = FUNC_9(VAR_8, FUNC_17("Model:name2"), &VAR_13);
        FUNC_0(VAR_11, VAR_4);

        VAR_11 = FUNC_2(VAR_13, &VAR_12);
        FUNC_0(VAR_11, VAR_4);
        FUNC_21(!FUNC_20( VAR_12, FUNC_17("Model:name2")), "got %s\n", FUNC_22(VAR_12));
        FUNC_16(VAR_12);

        VAR_11 = FUNC_3(VAR_13, &VAR_12);
        FUNC_0(VAR_11, VAR_4);
        FUNC_21(!FUNC_20( VAR_12, FUNC_17("Model")), "got %s\n", FUNC_22(VAR_12));
        FUNC_16(VAR_12);

        FUNC_1(VAR_13);
        FUNC_8(VAR_8);

        FUNC_11(VAR_14);
        FUNC_11(VAR_9);
    }

    FUNC_4(VAR_7);

    FUNC_19();
}
