
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int writemask; } ;
typedef struct shader_reg {int type; int regnum; TYPE_1__ u; } const shader_reg ;



 void* VAR_0 ;





 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static struct shader_reg FUNC_1(const struct shader_reg *VAR_16) {
    struct shader_reg VAR_17;
    switch(VAR_16->type) {
        case 132:
            VAR_17 = *VAR_16;
            VAR_17.type = VAR_0;
            switch(VAR_16->regnum) {
                case 128:
                    VAR_17.regnum = VAR_5;
                    break;
                case 130:
                    VAR_17.regnum = VAR_3;
                    VAR_17.u.writemask = VAR_4;
                    break;
                case 129:
                    VAR_17.regnum = VAR_6;
                    VAR_17.u.writemask = VAR_7;
                    break;
                default:
                    FUNC_0("Unhandled RASTOUT register %u\n", VAR_16->regnum);
                    return *VAR_16;
            }
            return VAR_17;

        case 131:
            VAR_17 = *VAR_16;
            VAR_17.type = VAR_0;
            switch(VAR_16->regnum) {
                case 0: VAR_17.regnum = VAR_8; break;
                case 1: VAR_17.regnum = VAR_9; break;
                case 2: VAR_17.regnum = VAR_10; break;
                case 3: VAR_17.regnum = VAR_11; break;
                case 4: VAR_17.regnum = VAR_12; break;
                case 5: VAR_17.regnum = VAR_13; break;
                case 6: VAR_17.regnum = VAR_14; break;
                case 7: VAR_17.regnum = VAR_15; break;
                default:
                    FUNC_0("Unhandled TEXCRDOUT regnum %u\n", VAR_16->regnum);
                    return *VAR_16;
            }
            return VAR_17;

        case 133:
            VAR_17 = *VAR_16;
            VAR_17.type = VAR_0;
            switch(VAR_16->regnum) {
                case 0: VAR_17.regnum = VAR_1; break;
                case 1: VAR_17.regnum = VAR_2; break;
                default:
                    FUNC_0("Unhandled ATTROUT regnum %u\n", VAR_16->regnum);
                    return *VAR_16;
            }
            return VAR_17;

        default: return *VAR_16;
    }
}
