
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int writemask; } ;
struct shader_reg {int type; TYPE_1__ u; int regnum; scalar_t__ rel_reg; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {void* state; int version; } ;
typedef int DWORD ;


 int FUNC_0 (int,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct bc_writer*,struct shader_reg const*) ;
 int FUNC_7 (struct bytecode_buffer*,int) ;

__attribute__((used)) static void FUNC_8(struct bc_writer *VAR_4,
                          const struct shader_reg *VAR_5,
                          struct bytecode_buffer *VAR_6,
                          DWORD VAR_7, DWORD VAR_8) {
    DWORD VAR_9 = (1u << 31);
    DWORD VAR_10;

    if(VAR_5->rel_reg) {
        FUNC_1("Relative addressing not supported for destination registers\n");
        VAR_4->state = VAR_3;
        return;
    }

    switch(VAR_5->type) {
        case 128:
        case 132:
        case 131:
            VAR_10 = FUNC_3(VAR_5->type);
            VAR_9 |= FUNC_5( VAR_10, VAR_5->regnum );
            break;

        case 129:
            if(VAR_4->version != FUNC_0(2, 1)){
                FUNC_1("Predicate register not supported in ps_2_0\n");
                VAR_4->state = VAR_3;
            }
            VAR_9 |= FUNC_5( VAR_0, VAR_5->regnum );
            break;


        case 130:
            VAR_9 |= FUNC_6(VAR_4, VAR_5);
            break;

        default:
            FUNC_1("Invalid dest register type for 2.x pshader\n");
            VAR_4->state = VAR_3;
            return;
    }

    VAR_9 |= (VAR_7 << VAR_2) & VAR_1;
    VAR_9 |= FUNC_2(VAR_8);

    VAR_9 |= FUNC_4(VAR_5->u.writemask);
    FUNC_7(VAR_6, VAR_9);
}
