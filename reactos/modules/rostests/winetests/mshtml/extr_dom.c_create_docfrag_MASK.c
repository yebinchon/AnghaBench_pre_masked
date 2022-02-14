
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLDocument3 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static IHTMLDocument2 *FUNC_4(IHTMLDocument2 *VAR_2)
{
    IHTMLDocument2 *VAR_3;
    IHTMLDocument3 *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_0(VAR_2, &VAR_0, (void**)&VAR_4);
    FUNC_3(VAR_5 == VAR_1, "Could not get IHTMLDocument3 iface: %08x\n", VAR_5);

    VAR_5 = FUNC_2(VAR_4, &VAR_3);
    FUNC_1(VAR_4);
    FUNC_3(VAR_5 == VAR_1, "createDocumentFragment failed: %08x\n", VAR_5);
    FUNC_3(VAR_3 != ((void*)0), "frag == NULL\n");

    return VAR_3;
}
