
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
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct bc_writer*,struct shader_reg const*) ;
 int FUNC_5 (struct bytecode_buffer*,int) ;

__attribute__((used)) static void FUNC_6(struct bc_writer *VAR_5, const struct shader_reg *VAR_6,
                          struct bytecode_buffer *VAR_7) {
    DWORD VAR_8 = (1u << 31);
    if(VAR_6->rel_reg) {
        FUNC_0("Relative addressing not supported in <= ps_3_0\n");
        VAR_5->state = VAR_4;
        return;
    }

    switch(VAR_6->type) {
        case 129:
            VAR_8 |= FUNC_4(VAR_5, VAR_6);
            break;


        case 128:
        case 130:
            VAR_8 |= FUNC_3( VAR_6->type, VAR_6->regnum );
            break;

        default:
            FUNC_0("Invalid register type for ps_1_4 shader\n");
            VAR_5->state = VAR_4;
            return;
    }

    VAR_8 |= FUNC_2(VAR_6->u.swizzle) & VAR_3;

    if(VAR_6->srcmod == VAR_0 || VAR_6->srcmod == VAR_1 ||
       VAR_6->srcmod == VAR_2) {
        FUNC_0("Invalid source modifier %u for ps_1_4\n", VAR_6->srcmod);
        VAR_5->state = VAR_4;
        return;
    }
    VAR_8 |= FUNC_1(VAR_6->srcmod);
    FUNC_5(VAR_7, VAR_8);
}
