
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_4(DWORD VAR_1, const char *VAR_2)
{
    BSTR VAR_3;
    HRESULT VAR_4;

    VAR_3 = FUNC_1(VAR_2);
    VAR_4 = FUNC_3(VAR_1, VAR_3, ((void*)0));
    FUNC_0(VAR_3);
    FUNC_2(VAR_4 == VAR_0, "parse_script failed: %08x\n", VAR_4);
}
