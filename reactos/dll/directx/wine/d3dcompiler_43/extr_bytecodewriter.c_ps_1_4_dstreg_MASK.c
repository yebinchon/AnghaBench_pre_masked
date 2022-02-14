
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int writemask; } ;
struct shader_reg {int type; TYPE_1__ u; int regnum; scalar_t__ rel_reg; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {void* state; } ;
typedef int DWORD ;




 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct bc_writer*,struct shader_reg const*) ;
 int FUNC_5 (struct bytecode_buffer*,int) ;

__attribute__((used)) static void FUNC_6(struct bc_writer *VAR_3, const struct shader_reg *VAR_4,
                          struct bytecode_buffer *VAR_5,
                          DWORD VAR_6, DWORD VAR_7) {
    DWORD VAR_8 = (1u << 31);

    if(VAR_4->rel_reg) {
        FUNC_0("Relative addressing not supported for destination registers\n");
        VAR_3->state = VAR_2;
        return;
    }

    switch(VAR_4->type) {
        case 128:
            VAR_8 |= FUNC_3( VAR_4->type, VAR_4->regnum );
            break;


        case 129:
            VAR_8 |= FUNC_4(VAR_3, VAR_4);
            break;

        default:
            FUNC_0("Invalid dest register type for 1.x pshader\n");
            VAR_3->state = VAR_2;
            return;
    }

    VAR_8 |= (VAR_6 << VAR_1) & VAR_0;
    VAR_8 |= FUNC_1(VAR_7);

    VAR_8 |= FUNC_2(VAR_4->u.writemask);
    FUNC_5(VAR_5, VAR_8);
}
