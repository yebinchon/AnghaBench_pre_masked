
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; scalar_t__ regnum; } ;
struct instruction {int dstmod; TYPE_2__* src; int shift; TYPE_3__ dst; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {scalar_t__* t_regnum; scalar_t__* v_regnum; TYPE_1__* funcs; void* state; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ regnum; } ;
struct TYPE_5__ {int (* srcreg ) (struct bc_writer*,TYPE_2__*,struct bytecode_buffer*) ;int (* dstreg ) (struct bc_writer*,TYPE_3__*,struct bytecode_buffer*,int ,int) ;int (* opcode ) (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;} ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;
 int FUNC_2 (struct bc_writer*,TYPE_3__*,struct bytecode_buffer*,int ,int) ;
 int FUNC_3 (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;
 int FUNC_4 (struct bc_writer*,TYPE_3__*,struct bytecode_buffer*,int ,int) ;
 int FUNC_5 (struct bc_writer*,TYPE_2__*,struct bytecode_buffer*) ;

__attribute__((used)) static void FUNC_6(struct bc_writer *VAR_11,
                                const struct instruction *VAR_12,
                                struct bytecode_buffer *VAR_13) {
    DWORD VAR_14 = VAR_3 & VAR_5;

    if(VAR_12->dst.type == VAR_2 && VAR_12->src[0].type == VAR_1) {
        if((VAR_12->dst.regnum == VAR_7 && VAR_12->src[0].regnum == VAR_11->t_regnum[0]) ||
           (VAR_12->dst.regnum == VAR_8 && VAR_12->src[0].regnum == VAR_11->t_regnum[1]) ||
           (VAR_12->dst.regnum == VAR_9 && VAR_12->src[0].regnum == VAR_11->t_regnum[2]) ||
           (VAR_12->dst.regnum == VAR_10 && VAR_12->src[0].regnum == VAR_11->t_regnum[3])) {
            if(VAR_12->dstmod & VAR_0) {
                VAR_11->funcs->opcode(VAR_11, VAR_12, VAR_4 & VAR_5, VAR_13);

                VAR_11->funcs->dstreg(VAR_11, &VAR_12->dst, VAR_13, VAR_12->shift, VAR_12->dstmod & (~VAR_0));
                return;
            } else {
                FUNC_0("A varying -> temp copy is only supported with the SATURATE modifier in <=ps_1_3\n");
                VAR_11->state = VAR_6;
                return;
            }
        } else if(VAR_12->src[0].regnum == VAR_11->v_regnum[0] ||
                  VAR_12->src[0].regnum == VAR_11->v_regnum[1]) {

        } else {
            FUNC_0("Unsupported varying -> temp mov in <= ps_1_3\n");
            VAR_11->state = VAR_6;
            return;
        }
    }

    VAR_11->funcs->opcode(VAR_11, VAR_12, VAR_14, VAR_13);
    VAR_11->funcs->dstreg(VAR_11, &VAR_12->dst, VAR_13, VAR_12->shift, VAR_12->dstmod);
    VAR_11->funcs->srcreg(VAR_11, &VAR_12->src[0], VAR_13);
}
