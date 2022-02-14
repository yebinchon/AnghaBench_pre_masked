
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLElement ;
typedef int IHTMLDocument3 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static IHTMLElement *FUNC_6(IHTMLDocument2 *VAR_2, const char *VAR_3)
{
    HRESULT VAR_4;
    IHTMLDocument3 *VAR_5;
    IHTMLElement *VAR_6;
    BSTR VAR_7 = FUNC_4(VAR_3);

    VAR_4 = FUNC_0(VAR_2, &VAR_0, (void**)&VAR_5);
    FUNC_5(VAR_4 == VAR_1, "QueryInterface(IID_IHTMLDocument3) failed: %08x\n", VAR_4);

    VAR_4 = FUNC_2(VAR_5, VAR_7, &VAR_6);
    FUNC_5(VAR_4 == VAR_1, "getElementById failed: %08x\n", VAR_4);
    FUNC_5(VAR_6 != ((void*)0), "result == NULL\n");
    FUNC_3(VAR_7);

    FUNC_1(VAR_5);
    return VAR_6;
}
