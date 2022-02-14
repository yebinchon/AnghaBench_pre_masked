
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLSelectElement ;
typedef int IHTMLFormElement ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(IHTMLSelectElement *VAR_1)
{
    IHTMLFormElement *VAR_2;
    HRESULT VAR_3;

    VAR_2 = (IHTMLFormElement*)0xdeadbeef;
    VAR_3 = FUNC_0(VAR_1, &VAR_2);
    FUNC_1(VAR_3 == VAR_0, "get_form failed: %08x\n", VAR_3);
    FUNC_1(VAR_2 == ((void*)0), "got %p\n", VAR_2);
}
