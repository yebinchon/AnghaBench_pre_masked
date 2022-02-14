
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int writemask; } ;
struct shader_reg {scalar_t__ type; scalar_t__ rel_reg; TYPE_1__ u; int regnum; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {scalar_t__ version; int state; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct bytecode_buffer*,int) ;
 int FUNC_7 (struct bc_writer*,scalar_t__,struct bytecode_buffer*) ;

__attribute__((used)) static void FUNC_8(struct bc_writer *VAR_4,
                        const struct shader_reg *VAR_5,
                        struct bytecode_buffer *VAR_6,
                        DWORD VAR_7, DWORD VAR_8) {
    DWORD VAR_9 = (1u << 31);
    DWORD VAR_10;

    if(VAR_5->rel_reg) {
        if(VAR_4->version == FUNC_0(3, 0) &&
           VAR_5->type == VAR_0) {
            VAR_9 |= VAR_2 & VAR_1;
        } else {
            FUNC_1("Relative addressing not supported for this shader type or register type\n");
            VAR_4->state = VAR_3;
            return;
        }
    }

    VAR_10 = FUNC_3(VAR_5->type);
    VAR_9 |= FUNC_5( VAR_10, VAR_5->regnum );
    VAR_9 |= FUNC_2(VAR_8);
    VAR_9 |= FUNC_4(VAR_5->u.writemask);
    FUNC_6(VAR_6, VAR_9);




    if(VAR_9 & VAR_2) {
        FUNC_7(VAR_4, VAR_5->rel_reg, VAR_6);
    }
}
