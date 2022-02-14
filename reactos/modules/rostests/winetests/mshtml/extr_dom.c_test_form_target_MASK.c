
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLFormElement ;
typedef int HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int,char*,char const*,...) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(IUnknown *VAR_1)
{
    IHTMLFormElement *VAR_2 = FUNC_5(VAR_1);
    HRESULT VAR_3;
    BSTR VAR_4;
    static const char VAR_5[] = "_blank";

    VAR_4 = FUNC_4(VAR_5);
    VAR_3 = FUNC_2(VAR_2, VAR_4);
    FUNC_6(VAR_3 == VAR_0, "put_target(%s) failed: %08x\n", VAR_5, VAR_3);
    FUNC_3(VAR_4);

    VAR_3 = FUNC_1(VAR_2, &VAR_4);
    FUNC_6(VAR_3 == VAR_0, "get_target failed: %08x\n", VAR_3);
    FUNC_6(!FUNC_7(VAR_4, VAR_5), "Expected %s, got %s\n", VAR_5, FUNC_8(VAR_4));
    FUNC_3(VAR_4);

    FUNC_0(VAR_2);
}
