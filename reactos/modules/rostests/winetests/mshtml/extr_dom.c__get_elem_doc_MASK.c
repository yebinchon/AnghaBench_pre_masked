
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static IHTMLDocument2 *FUNC_5(unsigned VAR_2, IUnknown *VAR_3)
{
    IHTMLElement *VAR_4 = FUNC_3(VAR_2, VAR_3);
    IHTMLDocument2 *VAR_5;
    IDispatch *VAR_6;
    HRESULT VAR_7;

    VAR_6 = ((void*)0);
    VAR_7 = FUNC_2(VAR_4, &VAR_6);
    FUNC_4(VAR_7 == VAR_1, "get_document failed: %08x\n", VAR_7);
    FUNC_4(VAR_6 != ((void*)0), "disp == NULL\n");

    VAR_7 = FUNC_0(VAR_6, &VAR_0, (void**)&VAR_5);
    FUNC_1(VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Could not get IHTMLDocument2 iface: %08x\n", VAR_7);

    return VAR_5;
}
