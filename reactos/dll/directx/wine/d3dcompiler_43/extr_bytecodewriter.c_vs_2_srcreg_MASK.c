
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int swizzle; } ;
struct shader_reg {int type; struct shader_reg* rel_reg; int srcmod; TYPE_1__ u; int regnum; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {void* state; int version; } ;
typedef int DWORD ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct bc_writer*,int ,int,int*) ;
 int FUNC_8 (struct bytecode_buffer*,int) ;

__attribute__((used)) static void FUNC_9(struct bc_writer *VAR_10,
                        const struct shader_reg *VAR_11,
                        struct bytecode_buffer *VAR_12) {
    DWORD VAR_13 = (1u << 31);
    DWORD VAR_14;
    DWORD VAR_15;
    DWORD VAR_16;

    switch(VAR_11->type) {
        case 135:



            switch(VAR_11->u.swizzle) {
                case 130:
                    VAR_15 = VAR_0;
                    break;
                case 129:
                    VAR_15 = VAR_1;
                    break;
                case 128:
                    VAR_15 = VAR_2;
                    break;
                case 131:
                    VAR_15 = VAR_3;
                    break;
                default:
                    VAR_15 = 0;
            }
            VAR_13 |= FUNC_7(VAR_10, VAR_11->regnum, VAR_15, &VAR_14);
            break;

        case 133:
        case 142:



            FUNC_1("Unexpected register type %u\n", VAR_11->type);

        case 138:
        case 132:
        case 141:
        case 143:
        case 139:
        case 140:
        case 137:
            VAR_16 = FUNC_3(VAR_11->type);
            VAR_13 |= FUNC_6( VAR_16, VAR_11->regnum );
            break;

        case 136:
            if(VAR_11->regnum != 0) {
                FUNC_2("Only regnum 0 is supported for the loop index register in vs_2_0\n");
                VAR_10->state = VAR_9;
                return;
            }
            VAR_13 |= FUNC_6( VAR_4, 0 );
            break;

        case 134:
            if(VAR_10->version != FUNC_0(2, 1)){
                FUNC_2("Predicate register is allowed only in vs_2_x\n");
                VAR_10->state = VAR_9;
                return;
            }
            if(VAR_11->regnum > 0) {
                FUNC_2("Only predicate register 0 is supported\n");
                VAR_10->state = VAR_9;
                return;
            }
            VAR_13 |= FUNC_6( VAR_5, 0 );
            break;

        default:
            FUNC_2("Invalid register type for 2.0 vshader\n");
            VAR_10->state = VAR_9;
            return;
    }

    VAR_13 |= FUNC_5(VAR_11->u.swizzle) & VAR_8;

    VAR_13 |= FUNC_4(VAR_11->srcmod);

    if(VAR_11->rel_reg)
        VAR_13 |= VAR_7 & VAR_6;

    FUNC_8(VAR_12, VAR_13);




    if(VAR_13 & VAR_7)
        FUNC_9(VAR_10, VAR_11->rel_reg, VAR_12);
}
