
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct instruction {TYPE_2__* src; int dstmod; int shift; TYPE_3__ dst; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {scalar_t__* t_regnum; scalar_t__* v_regnum; TYPE_1__* funcs; int state; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ regnum; } ;
struct TYPE_4__ {int (* srcreg ) (struct bc_writer*,TYPE_2__*,struct bytecode_buffer*) ;int (* dstreg ) (struct bc_writer*,TYPE_3__*,struct bytecode_buffer*,int ,int ) ;int (* opcode ) (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;} ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;
 int FUNC_2 (struct bc_writer*,TYPE_3__*,struct bytecode_buffer*,int ,int ) ;
 int FUNC_3 (struct bc_writer*,TYPE_2__*,struct bytecode_buffer*) ;

__attribute__((used)) static void FUNC_4(struct bc_writer *VAR_6,
                             const struct instruction *VAR_7,
                             struct bytecode_buffer *VAR_8) {
    DWORD VAR_9 = VAR_2 & VAR_4;

    if(VAR_7->dst.type == VAR_1 && VAR_7->src[0].type == VAR_0) {
        if(VAR_7->src[0].regnum == VAR_6->t_regnum[0] ||
           VAR_7->src[0].regnum == VAR_6->t_regnum[1] ||
           VAR_7->src[0].regnum == VAR_6->t_regnum[2] ||
           VAR_7->src[0].regnum == VAR_6->t_regnum[3] ||
           VAR_7->src[0].regnum == VAR_6->t_regnum[4] ||
           VAR_7->src[0].regnum == VAR_6->t_regnum[5]) {

            VAR_9 = VAR_3 & VAR_4;
        } else if(VAR_7->src[0].regnum == VAR_6->v_regnum[0] ||
                  VAR_7->src[0].regnum == VAR_6->v_regnum[1]) {

        } else {
            FUNC_0("Unsupported varying -> temp mov in ps_1_4\n");
            VAR_6->state = VAR_5;
            return;
        }
    }

    VAR_6->funcs->opcode(VAR_6, VAR_7, VAR_9, VAR_8);
    VAR_6->funcs->dstreg(VAR_6, &VAR_7->dst, VAR_8, VAR_7->shift, VAR_7->dstmod);
    VAR_6->funcs->srcreg(VAR_6, &VAR_7->src[0], VAR_8);
}
