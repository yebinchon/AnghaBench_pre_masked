
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_3__ {int script; } ;
typedef TYPE_1__ ScriptHost ;
typedef int IActiveScriptProperty ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (int ,int *,void**) ;
 int VAR_0 ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static void FUNC_5(ScriptHost *VAR_1, DWORD VAR_2, VARIANT *VAR_3)
{
    IActiveScriptProperty *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_3(VAR_1->script, &VAR_0,
            (void**)&VAR_4);
    if(FUNC_0(VAR_5)) {
        FUNC_4("Could not get IActiveScriptProperty iface: %08x\n", VAR_5);
        return;
    }

    VAR_5 = FUNC_2(VAR_4, VAR_2, ((void*)0), VAR_3);
    FUNC_1(VAR_4);
    if(FUNC_0(VAR_5))
        FUNC_4("SetProperty(%x) failed: %08x\n", VAR_2, VAR_5);
}
