
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLElement2 ;
typedef int IHTMLElement ;
typedef int IHTMLCurrentStyle ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static IHTMLCurrentStyle *FUNC_4(unsigned VAR_2, IHTMLElement *VAR_3)
{
    IHTMLCurrentStyle *VAR_4;
    IHTMLElement2 *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_2(VAR_3, &VAR_0, (void**)&VAR_5);
    FUNC_3(VAR_6 == VAR_1, "Could not get IHTMLElement2 iface: %08x\n", VAR_6);

    VAR_4 = ((void*)0);
    VAR_6 = FUNC_1(VAR_5, &VAR_4);
    FUNC_3(VAR_6 == VAR_1, "get_currentStyle failed: %08x\n", VAR_6);
    FUNC_3(VAR_4 != ((void*)0), "cstyle = %p\n", VAR_4);

    FUNC_0(VAR_5);
    return VAR_4;
}
