
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int thread_id; int ctx; int * site; } ;
typedef TYPE_1__ VBScript ;
typedef int SCRIPTSTATE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;






 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(VBScript *VAR_1, SCRIPTSTATE VAR_2)
{
    switch(VAR_1->state) {
    case 132:
        FUNC_1(VAR_1, 131);
        if(VAR_2 == 131)
            return;

    case 129:
    case 131:
        if(VAR_1->state == 131)
            FUNC_1(VAR_1, 130);
        if(VAR_2 == 130)
            break;

    case 130:
    case 128:
        FUNC_1(VAR_1, VAR_2);

        if(VAR_1->site) {
            FUNC_0(VAR_1->site);
            VAR_1->site = ((void*)0);
        }

        if(VAR_1->ctx)
            FUNC_2(VAR_1->ctx);

        VAR_1->thread_id = 0;
        break;
    case 133:
        break;
    VAR_0;
    }
}
