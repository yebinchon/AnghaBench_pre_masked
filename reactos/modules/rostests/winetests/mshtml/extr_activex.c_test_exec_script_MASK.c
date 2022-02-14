
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IHTMLWindow2 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(IHTMLDocument2 *VAR_1, const char *VAR_2, const char *VAR_3)
{
    IHTMLWindow2 *VAR_4;
    BSTR VAR_5, VAR_6;
    VARIANT VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_0(VAR_1, &VAR_4);
    FUNC_6(VAR_8 == VAR_0, "get_parentWindow failed: %08x\n", VAR_8);

    VAR_5 = FUNC_5(VAR_2);
    VAR_6 = FUNC_5(VAR_3);

    VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_7);
    FUNC_6(VAR_8 == VAR_0, "execScript failed: %08x\n", VAR_8);
    FUNC_3(VAR_6);
    FUNC_4(&VAR_7);

    FUNC_1(VAR_4);
}
