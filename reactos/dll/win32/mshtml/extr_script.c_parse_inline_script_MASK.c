
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsAString ;
struct TYPE_4__ {int nsscript; } ;
typedef int ScriptHost ;
typedef scalar_t__ PRUnichar ;
typedef TYPE_1__ HTMLScriptElement ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__ const**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,TYPE_1__*,scalar_t__ const*) ;

__attribute__((used)) static void FUNC_7(ScriptHost *VAR_0, HTMLScriptElement *VAR_1)
{
    const PRUnichar *VAR_2;
    nsAString VAR_3;
    nsresult VAR_4;

    FUNC_4(&VAR_3, ((void*)0));
    VAR_4 = FUNC_5(VAR_1->nsscript, &VAR_3);
    FUNC_3(&VAR_3, &VAR_2);

    if(FUNC_1(VAR_4)) {
        FUNC_0("GetText failed: %08x\n", VAR_4);
    }else if(*VAR_2) {
        FUNC_6(VAR_0, VAR_1, VAR_2);
    }

    FUNC_2(&VAR_3);
}
