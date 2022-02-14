
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int swizzle; } ;
struct shader_reg {int type; int srcmod; TYPE_1__ u; int regnum; scalar_t__ rel_reg; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {void* state; int version; } ;
typedef int DWORD ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct bc_writer*,struct shader_reg const*) ;
 int FUNC_7 (struct bytecode_buffer*,int) ;

__attribute__((used)) static void FUNC_8(struct bc_writer *VAR_3,
                        const struct shader_reg *VAR_4,
                        struct bytecode_buffer *VAR_5) {
    DWORD VAR_6 = (1u << 31);
    DWORD VAR_7;
    if(VAR_4->rel_reg) {
        FUNC_1("Relative addressing not supported in <= ps_3_0\n");
        VAR_3->state = VAR_2;
        return;
    }

    switch(VAR_4->type) {
        case 132:
            VAR_6 |= FUNC_6(VAR_3, VAR_4);
            break;


        case 128:
        case 136:
        case 137:
        case 135:
        case 134:
        case 129:
        case 131:
        case 133:
            VAR_7 = FUNC_2(VAR_4->type);
            VAR_6 |= FUNC_5( VAR_7, VAR_4->regnum );
            break;

        case 130:
            if(VAR_3->version != FUNC_0(2, 1)){
                FUNC_1("Predicate register not supported in ps_2_0\n");
                VAR_3->state = VAR_2;
            }
            if(VAR_4->regnum) {
                FUNC_1("Predicate register with regnum %u not supported\n",
                     VAR_4->regnum);
                VAR_3->state = VAR_2;
            }
            VAR_6 |= FUNC_5( VAR_0, 0 );
            break;

        default:
            FUNC_1("Invalid register type for ps_2_0 shader\n");
            VAR_3->state = VAR_2;
            return;
    }

    VAR_6 |= FUNC_4(VAR_4->u.swizzle) & VAR_1;

    VAR_6 |= FUNC_3(VAR_4->srcmod);
    FUNC_7(VAR_5, VAR_6);
}
