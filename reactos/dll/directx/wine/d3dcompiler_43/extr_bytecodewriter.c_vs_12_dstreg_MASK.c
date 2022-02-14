
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
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (char*,int) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct bc_writer*,int ,int ,int*) ;
 int FUNC_7 (struct bytecode_buffer*,int) ;

__attribute__((used)) static void FUNC_8(struct bc_writer *VAR_6, const struct shader_reg *VAR_7,
                         struct bytecode_buffer *VAR_8,
                         DWORD VAR_9, DWORD VAR_10) {
    DWORD VAR_11 = (1u << 31);
    DWORD VAR_12;

    if(VAR_7->rel_reg) {
        FUNC_2("Relative addressing not supported for destination registers\n");
        VAR_6->state = VAR_4;
        return;
    }

    switch(VAR_7->type) {
        case 131:
            VAR_11 |= FUNC_6(VAR_6, VAR_7->regnum, VAR_7->u.writemask, &VAR_12);
            break;

        case 129:
        case 134:



            FUNC_1("Unexpected register type %u\n", VAR_7->type);

        case 132:
        case 128:
        case 133:
            VAR_11 |= FUNC_5( VAR_7->type, VAR_7->regnum );
            VAR_12 = VAR_5;
            break;

        case 135:
            if(VAR_7->regnum != 0) {
                FUNC_2("Only a0 exists\n");
                VAR_6->state = VAR_4;
                return;
            }
            VAR_11 |= FUNC_5( VAR_0, 0 );
            VAR_12 = VAR_5;
            break;

        case 130:
            if(VAR_6->version != FUNC_0(2, 1)){
                FUNC_2("Predicate register is allowed only in vs_2_x\n");
                VAR_6->state = VAR_4;
                return;
            }
            if(VAR_7->regnum != 0) {
                FUNC_2("Only predicate register p0 exists\n");
                VAR_6->state = VAR_4;
                return;
            }
            VAR_11 |= FUNC_5( VAR_1, 0 );
            VAR_12 = VAR_5;
            break;

        default:
            FUNC_2("Invalid register type for 1.x-2.x vertex shader\n");
            VAR_6->state = VAR_4;
            return;
    }





    VAR_11 |= (VAR_9 << VAR_3) & VAR_2;
    VAR_11 |= FUNC_3(VAR_10);

    if(VAR_12) {
        VAR_11 |= FUNC_4(VAR_7->u.writemask);
    }
    FUNC_7(VAR_8, VAR_11);
}
