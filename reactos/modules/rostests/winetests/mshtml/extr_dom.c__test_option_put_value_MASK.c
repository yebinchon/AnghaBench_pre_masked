
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLOptionElement ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int *,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(unsigned VAR_1, IHTMLOptionElement *VAR_2, const char *VAR_3)
{
    BSTR VAR_4;
    HRESULT VAR_5;

    VAR_4 = FUNC_3(VAR_3);
    VAR_5 = FUNC_0(VAR_2, VAR_4);
    FUNC_1(VAR_4);
    FUNC_4(VAR_5 == VAR_0, "put_value failed: %08x\n", VAR_5);

    FUNC_2(VAR_1, VAR_2, VAR_3);
}
