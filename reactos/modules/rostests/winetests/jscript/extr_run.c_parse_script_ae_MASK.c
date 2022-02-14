
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, HRESULT VAR_2)
{
    BSTR VAR_3;
    HRESULT VAR_4;

    VAR_3 = FUNC_1(VAR_1);
    VAR_4 = FUNC_3(VAR_0, VAR_3);
    FUNC_0(VAR_3);
    FUNC_2(VAR_4 == VAR_2, "parse_script failed: %08x, expected %08x\n", VAR_4, VAR_2);
}
