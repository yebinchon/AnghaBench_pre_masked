
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLDOMElement ;
typedef int IXMLDOMDocument ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void)
{
    IXMLDOMDocument *VAR_3;
    IXMLDOMElement *VAR_4, *VAR_5;
    HRESULT VAR_6;
    BSTR VAR_7;

    VAR_3 = FUNC_6(&VAR_1);

    VAR_6 = FUNC_1(VAR_3, FUNC_5("element"), &VAR_4);
    FUNC_9(VAR_6 == VAR_2, "got 0x%08x\n", VAR_6);

    VAR_6 = FUNC_3(VAR_4, ((void*)0));
    FUNC_9(VAR_6 == VAR_0, "got 0x%08x\n", VAR_6);

    VAR_7 = ((void*)0);
    VAR_6 = FUNC_3(VAR_4, &VAR_7);
    FUNC_9(VAR_6 == VAR_2, "got 0x%08x\n", VAR_6);
    FUNC_9(!FUNC_8(VAR_7, FUNC_5("element")), "got %s\n", FUNC_10(VAR_7));
    FUNC_4(VAR_7);

    VAR_6 = FUNC_1(VAR_3, FUNC_5("s:element"), &VAR_5);
    FUNC_9(VAR_6 == VAR_2, "got 0x%08x\n", VAR_6);

    VAR_7 = ((void*)0);
    VAR_6 = FUNC_3(VAR_5, &VAR_7);
    FUNC_9(VAR_6 == VAR_2, "got 0x%08x\n", VAR_6);
    FUNC_9(!FUNC_8(VAR_7, FUNC_5("s:element")), "got %s\n", FUNC_10(VAR_7));
    FUNC_4(VAR_7);

    FUNC_2(VAR_4);
    FUNC_2(VAR_5);
    FUNC_0(VAR_3);
    FUNC_7();
}
