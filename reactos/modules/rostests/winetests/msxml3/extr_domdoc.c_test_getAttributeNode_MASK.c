
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT_BOOL ;
typedef int IXMLDOMElement ;
typedef int IXMLDOMDocument ;
typedef int IXMLDOMAttribute ;
typedef int HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int ,char*,int *) ;
 char* VAR_6 ;

__attribute__((used)) static void FUNC_13(void)
{
    IXMLDOMAttribute *VAR_7;
    IXMLDOMDocument *VAR_8;
    IXMLDOMElement *VAR_9;
    VARIANT_BOOL VAR_10;
    HRESULT VAR_11;
    BSTR VAR_12;

    VAR_8 = FUNC_10(&VAR_1);

    VAR_11 = FUNC_4(VAR_8, FUNC_9(VAR_6), &VAR_10);
    FUNC_0(VAR_11, VAR_3);

    VAR_11 = FUNC_3(VAR_8, &VAR_9);
    FUNC_0(VAR_11, VAR_3);

    VAR_12 = FUNC_7(VAR_5);
    VAR_11 = FUNC_6(VAR_9, VAR_12, ((void*)0));
    FUNC_0(VAR_11, VAR_0);

    VAR_7 = (IXMLDOMAttribute*)0xdeadbeef;
    VAR_11 = FUNC_6(VAR_9, VAR_12, &VAR_7);
    FUNC_0(VAR_11, VAR_0);
    FUNC_12(VAR_7 == ((void*)0), "got %p\n", VAR_7);
    FUNC_8(VAR_12);

    VAR_12 = FUNC_7(VAR_4);
    VAR_11 = FUNC_6(VAR_9, VAR_12, ((void*)0));
    FUNC_0(VAR_11, VAR_2);

    VAR_7 = (IXMLDOMAttribute*)0xdeadbeef;
    VAR_11 = FUNC_6(VAR_9, VAR_12, &VAR_7);
    FUNC_0(VAR_11, VAR_2);
    FUNC_12(VAR_7 == ((void*)0), "got %p\n", VAR_7);
    FUNC_8(VAR_12);

    VAR_11 = FUNC_6(VAR_9, FUNC_9("foo:b"), &VAR_7);
    FUNC_0(VAR_11, VAR_3);
    FUNC_1(VAR_7);

    VAR_11 = FUNC_6(VAR_9, FUNC_9("b"), &VAR_7);
    FUNC_0(VAR_11, VAR_2);

    VAR_11 = FUNC_6(VAR_9, FUNC_9("a"), &VAR_7);
    FUNC_0(VAR_11, VAR_3);
    FUNC_1(VAR_7);

    FUNC_5(VAR_9);
    FUNC_2(VAR_8);
    FUNC_11();
}
