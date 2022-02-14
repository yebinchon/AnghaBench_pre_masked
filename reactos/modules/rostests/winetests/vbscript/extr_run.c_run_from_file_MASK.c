
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(const char *VAR_4)
{
    BSTR VAR_5;
    HRESULT VAR_6;

    VAR_5 = FUNC_1(VAR_4);
    if(!VAR_5)
        return;

    VAR_3 = VAR_0;
    VAR_6 = FUNC_3(VAR_1, VAR_5, ((void*)0));
    FUNC_0(VAR_5);
    FUNC_2(VAR_6 == VAR_2, "parse_script failed: %08x\n", VAR_6);
}
