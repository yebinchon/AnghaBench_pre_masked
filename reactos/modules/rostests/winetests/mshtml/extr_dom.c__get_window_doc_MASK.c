
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLWindow2 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static IHTMLDocument2 *FUNC_2(unsigned VAR_1, IHTMLWindow2 *VAR_2)
{
    IHTMLDocument2 *VAR_3;
    HRESULT VAR_4;

    VAR_3 = ((void*)0);
    VAR_4 = FUNC_0(VAR_2, &VAR_3);
    FUNC_1(VAR_4 == VAR_0, "get_document failed: %08x\n", VAR_4);
    FUNC_1(VAR_3 != ((void*)0), "disp == NULL\n");

    return VAR_3;
}
