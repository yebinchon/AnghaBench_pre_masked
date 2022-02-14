
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int script_state; int * script; int * parse; int * parse_proc; } ;
typedef TYPE_1__ ScriptHost ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;




 int VAR_0 ;

__attribute__((used)) static void FUNC_5(ScriptHost *VAR_1)
{
    if(!VAR_1->script)
        return;

    switch(VAR_1->script_state) {
    case 131:
        FUNC_4(VAR_1->script, 130);

    case 128:
    case 130:
    case 129:
        FUNC_2(VAR_1->script);

    default:
        if(VAR_1->parse_proc) {
            FUNC_0(VAR_1->parse_proc);
            VAR_1->parse_proc = ((void*)0);
        }

        if(VAR_1->parse) {
            FUNC_1(VAR_1->parse);
            VAR_1->parse = ((void*)0);
        }
    }

    FUNC_3(VAR_1->script);
    VAR_1->script = ((void*)0);
    VAR_1->script_state = VAR_0;
}
