
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsAString ;
struct TYPE_6__ {int parsed; int nsscript; } ;
typedef int ScriptHost ;
typedef scalar_t__ PRUnichar ;
typedef TYPE_1__ HTMLScriptElement ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__ const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__ const**) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,TYPE_1__*,scalar_t__ const*) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_13(ScriptHost *VAR_2, HTMLScriptElement *VAR_3)
{
    nsAString VAR_4, VAR_5;
    const PRUnichar *VAR_6;
    nsresult VAR_7;

    FUNC_7(&VAR_5, ((void*)0));
    VAR_7 = FUNC_8(VAR_3->nsscript, &VAR_5);
    if(FUNC_2(VAR_7)) {
        const PRUnichar *VAR_8;

        FUNC_6(&VAR_5, &VAR_8);
        if(*VAR_8) {
            FUNC_3("deferring event %s script evaluation\n", FUNC_4(VAR_8));
            FUNC_5(&VAR_5);
            return;
        }
    }else {
        FUNC_0("GetEvent failed: %08x\n", VAR_7);
    }
    FUNC_5(&VAR_5);

    FUNC_7(&VAR_4, ((void*)0));
    VAR_7 = FUNC_9(VAR_3->nsscript, &VAR_4);
    FUNC_6(&VAR_4, &VAR_6);

    if(FUNC_1(VAR_7)) {
        FUNC_0("GetSrc failed: %08x\n", VAR_7);
    }else if(*VAR_6) {
        VAR_3->parsed = VAR_1;
        FUNC_10(VAR_2, VAR_3, VAR_6);
    }else {
        FUNC_11(VAR_2, VAR_3);
    }

    FUNC_5(&VAR_4);

    FUNC_12(VAR_3, VAR_0);
}
