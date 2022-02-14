
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IOmHistory ;
typedef int IHTMLWindow2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int **) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int *,int *,int *,char*) ;

__attribute__((used)) static void FUNC_5(IHTMLWindow2 *VAR_3)
{
    IOmHistory *VAR_4, *VAR_5;
    HRESULT VAR_6;

    VAR_4 = ((void*)0);
    VAR_6 = FUNC_0(VAR_3, &VAR_4);
    FUNC_3(VAR_6 == VAR_2, "get_history failed: %08x\n", VAR_6);
    FUNC_3(VAR_4 != ((void*)0), "history = NULL\n");

    FUNC_4((IUnknown*)VAR_4, &VAR_0, &VAR_1, "[object]");

    VAR_5 = ((void*)0);
    VAR_6 = FUNC_0(VAR_3, &VAR_5);
    FUNC_3(VAR_6 == VAR_2, "get_history failed: %08x\n", VAR_6);
    FUNC_3(VAR_5 != ((void*)0), "history2 = NULL\n");
    FUNC_3(FUNC_2((IUnknown*)VAR_4, (IUnknown*)VAR_5), "history != history2\n");

    FUNC_1(VAR_5);
    FUNC_1(VAR_4);
}
