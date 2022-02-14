
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int swizzle; } ;
struct shader_reg {int type; scalar_t__ srcmod; TYPE_1__ u; int regnum; scalar_t__ rel_reg; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {void* state; } ;
typedef int DWORD ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct bc_writer*,struct shader_reg const*) ;
 int FUNC_5 (struct bc_writer*,struct shader_reg const*) ;
 int FUNC_6 (struct bytecode_buffer*,int) ;

__attribute__((used)) static void FUNC_7(struct bc_writer *VAR_7, const struct shader_reg *VAR_8,
                             struct bytecode_buffer *VAR_9) {
    DWORD VAR_10 = (1u << 31);
    if(VAR_8->rel_reg) {
        FUNC_0("Relative addressing not supported in <= ps_3_0\n");
        VAR_7->state = VAR_6;
        return;
    }

    switch(VAR_8->type) {
        case 129:
            VAR_10 |= FUNC_5(VAR_7, VAR_8);
            break;





        case 128:
            VAR_10 |= FUNC_4(VAR_7, VAR_8);
            break;

        case 130:
            VAR_10 |= FUNC_3( VAR_8->type, VAR_8->regnum );
            break;

        default:
            FUNC_0("Invalid register type for <= ps_1_3 shader\n");
            VAR_7->state = VAR_6;
            return;
    }

    VAR_10 |= FUNC_2(VAR_8->u.swizzle) & VAR_5;

    if(VAR_8->srcmod == VAR_3 || VAR_8->srcmod == VAR_2 ||
       VAR_8->srcmod == VAR_0 || VAR_8->srcmod == VAR_1 ||
       VAR_8->srcmod == VAR_4) {
        FUNC_0("Invalid source modifier %u for <= ps_1_3\n", VAR_8->srcmod);
        VAR_7->state = VAR_6;
        return;
    }
    VAR_10 |= FUNC_1(VAR_8->srcmod);
    FUNC_6(VAR_9, VAR_10);
}
