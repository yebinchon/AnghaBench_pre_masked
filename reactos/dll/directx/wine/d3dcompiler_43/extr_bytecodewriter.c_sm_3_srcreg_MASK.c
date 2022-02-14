
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int swizzle; } ;
struct shader_reg {scalar_t__ type; scalar_t__ regnum; struct shader_reg* rel_reg; int srcmod; TYPE_1__ u; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {scalar_t__ version; void* state; } ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (struct bytecode_buffer*,int) ;

__attribute__((used)) static void FUNC_8(struct bc_writer *VAR_7,
                        const struct shader_reg *VAR_8,
                        struct bytecode_buffer *VAR_9) {
    DWORD VAR_10 = (1u << 31);
    DWORD VAR_11;

    VAR_11 = FUNC_3(VAR_8->type);
    VAR_10 |= FUNC_6( VAR_11, VAR_8->regnum );
    VAR_10 |= FUNC_5(VAR_8->u.swizzle) & VAR_5;
    VAR_10 |= FUNC_4(VAR_8->srcmod);

    if(VAR_8->rel_reg) {
        if(VAR_8->type == VAR_1 && VAR_7->version == FUNC_0(3, 0)) {
            FUNC_2("c%u[...] is unsupported in ps_3_0\n", VAR_8->regnum);
            VAR_7->state = VAR_6;
            return;
        }
        if(((VAR_8->rel_reg->type == VAR_0 && VAR_7->version == FUNC_1(3, 0)) ||
           VAR_8->rel_reg->type == VAR_2) &&
           VAR_8->rel_reg->regnum == 0) {
            VAR_10 |= VAR_4 & VAR_3;
        } else {
            FUNC_2("Unsupported relative addressing register\n");
            VAR_7->state = VAR_6;
            return;
        }
    }

    FUNC_7(VAR_9, VAR_10);




    if(VAR_10 & VAR_4) {
        FUNC_8(VAR_7, VAR_8->rel_reg, VAR_9);
    }
}
