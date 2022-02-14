
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLTxtRange ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;
typedef int IHTMLBodyElement ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static IHTMLTxtRange *FUNC_6(IHTMLDocument2 *VAR_2)
{
    IHTMLBodyElement *VAR_3;
    IHTMLTxtRange *VAR_4;
    IHTMLElement *VAR_5;
    HRESULT VAR_6;

    VAR_5 = FUNC_4(VAR_2);
    VAR_6 = FUNC_2(VAR_5, &VAR_0, (void**)&VAR_3);
    FUNC_5(VAR_6 == VAR_1, "QueryInterface failed: %08x\n", VAR_6);
    FUNC_3(VAR_5);

    VAR_6 = FUNC_1(VAR_3, &VAR_4);
    FUNC_0(VAR_3);
    FUNC_5(VAR_6 == VAR_1, "createTextRange failed: %08x\n", VAR_6);

    return VAR_4;
}
