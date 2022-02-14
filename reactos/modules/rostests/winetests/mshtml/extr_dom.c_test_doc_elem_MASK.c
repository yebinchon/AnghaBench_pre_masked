
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLElement ;
typedef int IHTMLDocument3 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,char*) ;
 int * FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(IHTMLDocument2 *VAR_2)
{
    IHTMLDocument2 *VAR_3, *VAR_4;
    IHTMLElement *VAR_5;
    IHTMLDocument3 *VAR_6;
    HRESULT VAR_7;
    BSTR VAR_8;

    VAR_7 = FUNC_0(VAR_2, &VAR_0, (void**)&VAR_6);
    FUNC_10(VAR_7 == VAR_1, "QueryInterface(IID_IHTMLDocument3) failed: %08x\n", VAR_7);

    VAR_7 = FUNC_2(VAR_2, &VAR_8);
    FUNC_10(VAR_7 == VAR_1, "toString failed: %08x\n", VAR_7);
    FUNC_10(!FUNC_11(VAR_8, "[object]"),
            "toString returned %s, expected [object]\n", FUNC_15(VAR_8));
    FUNC_6(VAR_8);

    VAR_7 = FUNC_4(VAR_6, &VAR_5);
    FUNC_3(VAR_6);
    FUNC_10(VAR_7 == VAR_1, "get_documentElement failed: %08x\n", VAR_7);

    FUNC_14((IUnknown*)VAR_5, "HTML");
    FUNC_13((IUnknown*)VAR_5, "HTML");

    VAR_3 = FUNC_7(VAR_2);
    VAR_4 = FUNC_8((IUnknown*)VAR_5);
    FUNC_10(FUNC_9((IUnknown *)VAR_3, (IUnknown *)VAR_4), "doc_node != owner_doc\n");
    FUNC_1(VAR_4);

    VAR_4 = FUNC_8((IUnknown*)VAR_3);
    FUNC_10(!VAR_4, "owner_doc = %p\n", VAR_4);
    FUNC_1(VAR_3);

    FUNC_12((IUnknown*)VAR_5);

    FUNC_5(VAR_5);
}
