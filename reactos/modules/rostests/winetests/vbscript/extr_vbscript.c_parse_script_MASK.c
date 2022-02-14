
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptParse ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,int *,int ,int ,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(IActiveScriptParse *VAR_3, const char *VAR_4)
{
    BSTR VAR_5;
    HRESULT VAR_6;

    FUNC_2(VAR_0);
    FUNC_2(VAR_1);

    VAR_5 = FUNC_4(VAR_4);
    VAR_6 = FUNC_1(VAR_3, VAR_5, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_3(VAR_5);
    FUNC_5(VAR_6 == VAR_2, "ParseScriptText failed: %08x\n", VAR_6);

    FUNC_0(VAR_0);
    FUNC_0(VAR_1);
}
