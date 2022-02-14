
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ei ;
typedef char WCHAR ;
typedef int VARIANT ;
struct TYPE_3__ {int parse; } ;
typedef TYPE_1__ ScriptHost ;
typedef int HTMLInnerWindow ;
typedef int HRESULT ;
typedef int GUID ;
typedef int EXCEPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,int *,int *,char const*,int ,int ,int ,int *,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const*,int *) ;
 TYPE_1__* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int) ;

HRESULT FUNC_8(HTMLInnerWindow *VAR_3, const WCHAR *VAR_4, const WCHAR *VAR_5, VARIANT *VAR_6)
{
    ScriptHost *VAR_7;
    EXCEPINFO VAR_8;
    GUID VAR_9;
    HRESULT VAR_10;

    static const WCHAR VAR_11[] = {'"',0};

    if(!FUNC_5(VAR_5, &VAR_9)) {
        FUNC_4("Could not find script GUID\n");
        return VAR_0;
    }

    VAR_7 = FUNC_6(VAR_3, &VAR_9);
    if(!VAR_7) {
        FUNC_0("No script host\n");
        return VAR_1;
    }

    if(!VAR_7->parse) {
        FUNC_0("script_host->parse == NULL\n");
        return VAR_1;
    }

    FUNC_7(&VAR_8, 0, sizeof(VAR_8));
    FUNC_3(">>>\n");
    VAR_10 = FUNC_1(VAR_7->parse, VAR_4, ((void*)0), ((void*)0), VAR_11, 0, 0, VAR_2, VAR_6, &VAR_8);
    if(FUNC_2(VAR_10))
        FUNC_3("<<<\n");
    else
        FUNC_4("<<< %08x\n", VAR_10);

    return VAR_10;
}
