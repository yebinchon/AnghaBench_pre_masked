
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLWindow2 ;
typedef int IHTMLFrameBase2 ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static IHTMLWindow2 *FUNC_4(unsigned VAR_2, IUnknown *VAR_3)
{
    IHTMLFrameBase2 *VAR_4;
    IHTMLWindow2 *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_2(VAR_3, &VAR_0, (void**)&VAR_4);
    FUNC_3(VAR_6 == VAR_1, "Could not get IHTMFrameBase2 iface: %08x\n", VAR_6);

    VAR_5 = ((void*)0);
    VAR_6 = FUNC_1(VAR_4, &VAR_5);
    FUNC_0(VAR_4);
    FUNC_3(VAR_6 == VAR_1, "get_contentWindow failed: %08x\n", VAR_6);
    FUNC_3(VAR_5 != ((void*)0), "contentWindow = NULL\n");

    return VAR_5;
}
