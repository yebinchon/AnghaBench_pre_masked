
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int regnum; } ;
struct instruction {TYPE_2__* src; int dstmod; int shift; TYPE_3__ dst; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {TYPE_1__* funcs; void* state; } ;
struct TYPE_5__ {scalar_t__ type; int regnum; } ;
struct TYPE_4__ {int (* srcreg ) (struct bc_writer*,TYPE_2__*,struct bytecode_buffer*) ;int (* dstreg ) (struct bc_writer*,TYPE_3__*,struct bytecode_buffer*,int ,int ) ;int (* opcode ) (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;
 int FUNC_2 (struct bc_writer*,TYPE_3__*,struct bytecode_buffer*,int ,int ) ;
 int FUNC_3 (struct bc_writer*,TYPE_2__*,struct bytecode_buffer*) ;

__attribute__((used)) static void FUNC_4(struct bc_writer *VAR_5,
                               const struct instruction *VAR_6,
                               struct bytecode_buffer *VAR_7) {
    if(VAR_6->src[1].type != VAR_0 ||
       VAR_6->src[1].regnum > 5) {
        FUNC_0("Unsupported sampler type %u regnum %u\n",
             VAR_6->src[1].type, VAR_6->src[1].regnum);
        VAR_5->state = VAR_4;
        return;
    } else if(VAR_6->dst.type != VAR_1) {
        FUNC_0("Can only sample into a temp register\n");
        VAR_5->state = VAR_4;
        return;
    }

    if(VAR_6->src[1].regnum != VAR_6->dst.regnum) {
        FUNC_0("Sampling from sampler s%u to register r%u is not possible in ps_1_4\n",
             VAR_6->src[1].regnum, VAR_6->dst.regnum);
        VAR_5->state = VAR_4;
        return;
    }

    VAR_5->funcs->opcode(VAR_5, VAR_6, VAR_2 & VAR_3, VAR_7);
    VAR_5->funcs->dstreg(VAR_5, &VAR_6->dst, VAR_7, VAR_6->shift, VAR_6->dstmod);
    VAR_5->funcs->srcreg(VAR_5, &VAR_6->src[0], VAR_7);
}
