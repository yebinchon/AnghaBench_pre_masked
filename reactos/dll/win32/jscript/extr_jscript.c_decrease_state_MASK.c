
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* name; int * disp; struct TYPE_9__* next; } ;
typedef TYPE_2__ named_item_t ;
struct TYPE_10__ {int * site; scalar_t__ thread_id; TYPE_1__* ctx; } ;
struct TYPE_8__ {int state; int * global; int * site; int * secmgr; TYPE_2__* named_items; int * host_global; } ;
typedef int SCRIPTSTATE ;
typedef TYPE_3__ JScript ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;





 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(JScript *VAR_0, SCRIPTSTATE VAR_1)
{
    if(VAR_0->ctx) {
        switch(VAR_0->ctx->state) {
        case 132:
            FUNC_6(VAR_0, 131);
            if(VAR_1 == 131)
                return;

        case 129:
        case 131:
            FUNC_7(VAR_0);

            if(VAR_0->ctx->state == 131)
                FUNC_6(VAR_0, 130);
            if(VAR_1 == 130)
                return;

        case 130:
            if(VAR_0->ctx->host_global) {
                FUNC_3(VAR_0->ctx->host_global);
                VAR_0->ctx->host_global = ((void*)0);
            }

            if(VAR_0->ctx->named_items) {
                named_item_t *VAR_2, *VAR_3;

                VAR_2 = VAR_0->ctx->named_items;
                while(VAR_2) {
                    VAR_3 = VAR_2->next;

                    if(VAR_2->disp)
                        FUNC_3(VAR_2->disp);
                    FUNC_8(VAR_2->name);
                    FUNC_8(VAR_2);
                    VAR_2 = VAR_3;
                }

                VAR_0->ctx->named_items = ((void*)0);
            }

            if(VAR_0->ctx->secmgr) {
                FUNC_4(VAR_0->ctx->secmgr);
                VAR_0->ctx->secmgr = ((void*)0);
            }

            if(VAR_0->ctx->site) {
                FUNC_2(VAR_0->ctx->site);
                VAR_0->ctx->site = ((void*)0);
            }

            if(VAR_0->ctx->global) {
                FUNC_9(VAR_0->ctx->global);
                VAR_0->ctx->global = ((void*)0);
            }

        case 128:
            FUNC_6(VAR_0, VAR_1);
            break;
        default:
            FUNC_5(0);
        }

        FUNC_6(VAR_0, VAR_1);
    }else if(VAR_1 == 128) {
        if(VAR_0->site)
            FUNC_1(VAR_0->site, VAR_1);
    }else {
        FUNC_0("NULL ctx\n");
    }

    if(VAR_1 == 128)
        VAR_0->thread_id = 0;

    if(VAR_0->site) {
        FUNC_2(VAR_0->site);
        VAR_0->site = ((void*)0);
    }
}
