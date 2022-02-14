
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLStyle ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;
typedef int IHTMLCurrentStyle ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(IHTMLDocument2 *VAR_1)
{
    IHTMLCurrentStyle *VAR_2;
    IHTMLElement *VAR_3;
    IHTMLStyle *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_1, &VAR_3);
    FUNC_7(VAR_5 == VAR_0, "get_body failed: %08x\n", VAR_5);

    VAR_5 = FUNC_3(VAR_3, &VAR_4);
    FUNC_7(VAR_5 == VAR_0, "get_style failed: %08x\n", VAR_5);

    FUNC_8(VAR_4);

    VAR_2 = FUNC_5(VAR_3);
    FUNC_9(VAR_2);
    FUNC_0(VAR_2);
    FUNC_2(VAR_3);

    VAR_3 = FUNC_6(VAR_1, "divid");
    FUNC_11(VAR_3);

    FUNC_10(VAR_4);
    FUNC_4(VAR_4);
    FUNC_2(VAR_3);
}
