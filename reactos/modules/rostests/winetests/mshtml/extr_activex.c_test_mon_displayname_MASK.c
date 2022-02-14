
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPOLESTR ;
typedef int IMoniker ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int ,char const*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(IMoniker *VAR_2, const char *VAR_3, const char *VAR_4)
{
    LPOLESTR VAR_5;
    DWORD VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_2, ((void*)0), ((void*)0), &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "GetDisplayName failed: %08x\n", VAR_7);
    FUNC_4(!FUNC_5(VAR_5, VAR_3) || FUNC_3(VAR_4 && !FUNC_5(VAR_5, VAR_4)),
        "display_name = %s\n", FUNC_6(VAR_5));
    FUNC_0(VAR_5);

    VAR_7 = FUNC_2(VAR_2, &VAR_6);
    FUNC_4(VAR_7 == VAR_1, "IsSystemMoniker failed: %08x\n", VAR_7);
    FUNC_4(VAR_6 == VAR_0, "mksys = %d\n", VAR_6);
}
