
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_cmd {int flags; struct mp_cmd* queue_next; } ;
struct cmd_list_ctx {int completed_recursive; int current_valid; TYPE_3__* parent; int mpctx; int current; } ;
struct TYPE_6__ {TYPE_2__* args; } ;
struct TYPE_4__ {struct mp_cmd* p; } ;
struct TYPE_5__ {TYPE_1__ v; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int * VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct mp_cmd*,int *,int *,struct cmd_list_ctx*) ;
 int FUNC_3 (struct mp_cmd*,int *) ;
 int FUNC_4 (struct cmd_list_ctx*) ;

__attribute__((used)) static void FUNC_5(struct cmd_list_ctx *VAR_2)
{
    while (VAR_2->parent->args[0].v.p) {
        struct mp_cmd *VAR_3 = VAR_2->parent->args[0].v.p;
        VAR_2->parent->args[0].v.p = VAR_3->queue_next;

        FUNC_3(VAR_3, ((void*)0));

        if (VAR_3->flags & VAR_0) {

            FUNC_2(VAR_2->mpctx, VAR_3, ((void*)0), ((void*)0), ((void*)0));
        } else {


            VAR_2->completed_recursive = 0;
            VAR_2->current_valid = 1;
            VAR_2->current = FUNC_1();

            FUNC_2(VAR_2->mpctx, VAR_3, ((void*)0), VAR_1, VAR_2);

            VAR_2->current_valid = 0;







            if (!VAR_2->completed_recursive)
                return;
        }
    }

    FUNC_0(VAR_2->parent);
    FUNC_4(VAR_2);
}
