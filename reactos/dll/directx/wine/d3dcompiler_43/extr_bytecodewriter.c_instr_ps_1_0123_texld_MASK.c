
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int swizzle; } ;
struct shader_reg {scalar_t__ type; int regnum; TYPE_1__ u; } ;
struct TYPE_7__ {scalar_t__ type; int regnum; } ;
struct instruction {struct shader_reg* src; int dstmod; int shift; TYPE_3__ dst; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {int* t_regnum; void* state; TYPE_2__* funcs; } ;
struct TYPE_6__ {int (* srcreg ) (struct bc_writer*,struct shader_reg*,struct bytecode_buffer*) ;int (* dstreg ) (struct bc_writer*,TYPE_3__*,struct bytecode_buffer*,int ,int ) ;int (* opcode ) (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;} ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;
 int FUNC_3 (struct bc_writer*,TYPE_3__*,struct bytecode_buffer*,int ,int ) ;
 int FUNC_4 (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;
 int FUNC_5 (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;
 int FUNC_6 (struct bc_writer*,struct instruction const*,int,struct bytecode_buffer*) ;
 int FUNC_7 (struct bc_writer*,TYPE_3__*,struct bytecode_buffer*,int ,int ) ;
 int FUNC_8 (struct bc_writer*,struct shader_reg*,struct bytecode_buffer*) ;

__attribute__((used)) static void FUNC_9(struct bc_writer *VAR_25,
                                  const struct instruction *VAR_26,
                                  struct bytecode_buffer *VAR_27) {
    DWORD VAR_28;
    struct shader_reg VAR_29;
    DWORD VAR_30;

    if(VAR_26->src[1].type != VAR_1 ||
       VAR_26->src[1].regnum > 3) {
        FUNC_1("Unsupported sampler type %u regnum %u\n",
             VAR_26->src[1].type, VAR_26->src[1].regnum);
        VAR_25->state = VAR_20;
        return;
    } else if(VAR_26->dst.type != VAR_2) {
        FUNC_1("Can only sample into a temp register\n");
        VAR_25->state = VAR_20;
        return;
    }

    VAR_28 = VAR_26->src[1].regnum;
    if((VAR_28 == 0 && VAR_26->dst.regnum != VAR_21) ||
       (VAR_28 == 1 && VAR_26->dst.regnum != VAR_22) ||
       (VAR_28 == 2 && VAR_26->dst.regnum != VAR_23) ||
       (VAR_28 == 3 && VAR_26->dst.regnum != VAR_24)) {
        FUNC_1("Sampling from sampler s%u to register r%u is not possible in ps_1_x\n",
             VAR_28, VAR_26->dst.regnum);
        VAR_25->state = VAR_20;
        return;
    }
    if(VAR_26->src[0].type == VAR_0) {

        if(VAR_26->src[0].regnum != VAR_25->t_regnum[VAR_28]) {
            FUNC_1("Cannot sample from s%u with texture address data from interpolator %u\n",
                 VAR_28, VAR_26->src[0].regnum);
            VAR_25->state = VAR_20;
            return;
        }
        VAR_25->funcs->opcode(VAR_25, VAR_26, VAR_15 & VAR_19, VAR_27);


        VAR_25->funcs->dstreg(VAR_25, &VAR_26->dst, VAR_27, VAR_26->shift, VAR_26->dstmod);
    } else if(VAR_26->src[0].type == VAR_2) {

        VAR_30 = (3 << VAR_4) |
            (3 << (VAR_4 + 2)) |
            (3 << (VAR_4 + 4));
        if((VAR_26->src[0].u.swizzle & VAR_30) == (VAR_8 | VAR_11 | VAR_14)) {
            FUNC_0("writing texreg2rgb\n");
            VAR_25->funcs->opcode(VAR_25, VAR_26, VAR_18 & VAR_19, VAR_27);
        } else if(VAR_26->src[0].u.swizzle == (VAR_7 | VAR_10 | VAR_13 | VAR_5)) {
            FUNC_0("writing texreg2ar\n");
            VAR_25->funcs->opcode(VAR_25, VAR_26, VAR_16 & VAR_19, VAR_27);
        } else if(VAR_26->src[0].u.swizzle == (VAR_9 | VAR_12 | VAR_14 | VAR_6)) {
            FUNC_0("writing texreg2gb\n");
            VAR_25->funcs->opcode(VAR_25, VAR_26, VAR_17 & VAR_19, VAR_27);
        } else {
            FUNC_1("Unsupported src addr swizzle in dependent texld: 0x%08x\n", VAR_26->src[0].u.swizzle);
            VAR_25->state = VAR_20;
            return;
        }





        VAR_25->funcs->dstreg(VAR_25, &VAR_26->dst, VAR_27, VAR_26->shift, VAR_26->dstmod);
        VAR_29 = VAR_26->src[0];
        VAR_29.u.swizzle = VAR_3;
        VAR_25->funcs->srcreg(VAR_25, &VAR_29, VAR_27);
    } else {
        FUNC_1("Invalid address data source register\n");
        VAR_25->state = VAR_20;
        return;
    }
}
