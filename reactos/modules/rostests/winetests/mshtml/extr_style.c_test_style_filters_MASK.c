
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLStyle ;
typedef int IHTMLElement2 ;
typedef int IHTMLElement ;
typedef int IHTMLCurrentStyle2 ;
typedef int IHTMLCurrentStyle ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_12(IHTMLElement *VAR_3)
{
    IHTMLElement2 *VAR_4 = FUNC_6((IUnknown*)VAR_3);
    IHTMLCurrentStyle2 *VAR_5;
    IHTMLCurrentStyle *VAR_6;
    IHTMLStyle *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_3(VAR_3, &VAR_7);
    FUNC_7(VAR_8 == VAR_0, "get_style failed: %08x\n", VAR_8);

    VAR_8 = FUNC_2(VAR_4, &VAR_6);
    FUNC_7(VAR_8 == VAR_0, "get_style failed: %08x\n", VAR_8);

    VAR_5 = FUNC_5((IUnknown*)VAR_6);

    FUNC_10(VAR_7, ((void*)0));
    FUNC_9(VAR_5, ((void*)0));
    FUNC_8(VAR_7, "alpha(opacity=50.0040)");
    FUNC_9(VAR_5, "alpha(opacity=50.0040)");
    FUNC_8(VAR_7, "alpha(opacity=100)");

    FUNC_4(VAR_7);

    VAR_8 = FUNC_3(VAR_3, &VAR_7);
    FUNC_7(VAR_8 == VAR_0, "get_style failed: %08x\n", VAR_8);

    FUNC_10(VAR_7, "alpha(opacity=100)");
    FUNC_8(VAR_7, "xxx(a,b,c) alpha(opacity=100)");
    FUNC_8(VAR_7, ((void*)0));
    FUNC_8(VAR_7, "alpha(opacity=100)");
    FUNC_11(VAR_7, "filter", VAR_2);
    FUNC_11(VAR_7, "filter", VAR_1);
    FUNC_10(VAR_7, ((void*)0));


    FUNC_0(VAR_5);
    FUNC_4(VAR_7);
    FUNC_1(VAR_4);
}
