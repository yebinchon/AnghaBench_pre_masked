
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int swizzle; } ;
struct shader_reg {int type; int srcmod; TYPE_3__ u; TYPE_2__* rel_reg; int regnum; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {void* state; } ;
struct TYPE_4__ {int const swizzle; } ;
struct TYPE_5__ {int const type; TYPE_1__ u; int regnum; } ;
typedef int DWORD ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct bc_writer*,int ,int,int*) ;
 int FUNC_6 (struct bytecode_buffer*,int) ;

__attribute__((used)) static void FUNC_7(struct bc_writer *VAR_8, const struct shader_reg *VAR_9,
                          struct bytecode_buffer *VAR_10) {
    DWORD VAR_11 = (1u << 31);
    DWORD VAR_12;
    DWORD VAR_13;

    switch(VAR_9->type) {
        case 134:



            switch(VAR_9->u.swizzle) {
                case 130:
                    VAR_13 = VAR_0;
                    break;
                case 129:
                    VAR_13 = VAR_1;
                    break;
                case 128:
                    VAR_13 = VAR_2;
                    break;
                case 131:
                    VAR_13 = VAR_3;
                    break;
                default:
                    VAR_13 = 0;
            }
            VAR_11 |= FUNC_5(VAR_8, VAR_9->regnum, VAR_13, &VAR_12);
            break;

        case 133:
        case 137:



            FUNC_0("Unexpected register type %u\n", VAR_9->type);

        case 135:
        case 132:
        case 136:
        case 138:
            VAR_11 |= FUNC_4( VAR_9->type, VAR_9->regnum );
            if(VAR_9->rel_reg) {
                if(VAR_9->rel_reg->type != 138 ||
                   VAR_9->rel_reg->regnum != 0 ||
                   VAR_9->rel_reg->u.swizzle != 130) {
                    FUNC_1("Relative addressing in vs_1_x is only allowed with a0.x\n");
                    VAR_8->state = VAR_7;
                    return;
                }
                VAR_11 |= VAR_5 & VAR_4;
            }
            break;

        default:
            FUNC_1("Invalid register type for 1.x vshader\n");
            VAR_8->state = VAR_7;
            return;
    }

    VAR_11 |= FUNC_3(VAR_9->u.swizzle) & VAR_6;

    VAR_11 |= FUNC_2(VAR_9->srcmod);
    FUNC_6(VAR_10, VAR_11);
}
