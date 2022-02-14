
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(const char *VAR_4)
{
    BSTR VAR_5;
    HRESULT VAR_6;

    VAR_5 = FUNC_3(VAR_4);

    FUNC_1(VAR_2);
    FUNC_1(VAR_3);
    VAR_6 = FUNC_5(VAR_0, VAR_5);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    FUNC_4(VAR_6 == VAR_1, "parse_script failed: %08x\n", VAR_6);
    FUNC_2(VAR_5);
}
