
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLElement ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(IHTMLElement *VAR_1, const char *VAR_2)
{
    BSTR VAR_3 = FUNC_2(VAR_2);
    HRESULT VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_3);
    FUNC_3(VAR_4 == VAR_0, "put_innerHTML failed: %08x\n", VAR_4);

    FUNC_1(VAR_3);
}
