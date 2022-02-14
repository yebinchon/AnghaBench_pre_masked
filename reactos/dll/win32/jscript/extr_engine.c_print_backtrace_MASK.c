
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int host_global; int * stack; int global; TYPE_4__* call_ctx; } ;
typedef TYPE_3__ script_ctx_t ;
struct TYPE_10__ {unsigned int this_obj; unsigned int argc; int flags; TYPE_2__* function; TYPE_1__* base_scope; struct TYPE_10__* prev_frame; } ;
typedef TYPE_4__ call_frame_t ;
struct TYPE_8__ {unsigned int param_cnt; scalar_t__* params; scalar_t__ name; } ;
struct TYPE_7__ {scalar_t__ frame; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (TYPE_4__*,unsigned int) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(script_ctx_t *VAR_1)
{
    unsigned VAR_2 = 0, VAR_3;
    call_frame_t *VAR_4;

    for(VAR_4 = VAR_1->call_ctx; VAR_4; VAR_4 = VAR_4->prev_frame) {
        FUNC_0("%u\t", VAR_2);
        VAR_2++;

        if(VAR_4->this_obj && VAR_4->this_obj != FUNC_4(VAR_1->global) && VAR_4->this_obj != VAR_1->host_global)
            FUNC_0("%p->", VAR_4->this_obj);
        FUNC_0("%s(", VAR_4->function->name ? FUNC_2(VAR_4->function->name) : "[unnamed]");
        if(VAR_4->base_scope && VAR_4->base_scope->frame) {
            for(VAR_3=0; VAR_3 < VAR_4->argc; VAR_3++) {
                if(VAR_3 < VAR_4->function->param_cnt)
                    FUNC_0("%s%s=%s", VAR_3 ? ", " : "", FUNC_2(VAR_4->function->params[VAR_3]),
                         FUNC_1(VAR_1->stack[FUNC_3(VAR_4, -VAR_3-1)]));
                else
                    FUNC_0("%s%s", VAR_3 ? ", " : "", FUNC_1(VAR_1->stack[FUNC_3(VAR_4, -VAR_3-1)]));
            }
        }else {
            FUNC_0("[detached frame]");
        }
        FUNC_0(")\n");

        if(!(VAR_4->flags & VAR_0)) {
            FUNC_0("%u\t[native code]\n", VAR_2);
            VAR_2++;
        }
    }
}
