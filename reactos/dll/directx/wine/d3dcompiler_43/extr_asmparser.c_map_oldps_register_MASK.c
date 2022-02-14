
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct shader_reg {int type; int regnum; } const shader_reg ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (char*,int ) ;
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

__attribute__((used)) static struct shader_reg FUNC_1(const struct shader_reg *VAR_14, BOOL VAR_15) {
    struct shader_reg VAR_16;
    switch(VAR_14->type) {
        case 128:
            if(VAR_15) {
                VAR_16 = *VAR_14;
                VAR_16.type = VAR_0;
                switch(VAR_14->regnum) {
                    case 0: VAR_16.regnum = VAR_3; break;
                    case 1: VAR_16.regnum = VAR_5; break;
                    case 2: VAR_16.regnum = VAR_7; break;
                    case 3: VAR_16.regnum = VAR_9; break;
                    case 4: VAR_16.regnum = VAR_10; break;
                    case 5: VAR_16.regnum = VAR_11; break;
                    case 6: VAR_16.regnum = VAR_12; break;
                    case 7: VAR_16.regnum = VAR_13; break;
                    default:
                        FUNC_0("Unexpected TEXTURE register t%u\n", VAR_14->regnum);
                        return *VAR_14;
                }
                return VAR_16;
            } else {
                VAR_16 = *VAR_14;
                VAR_16.type = VAR_1;
                switch(VAR_14->regnum) {
                    case 0: VAR_16.regnum = VAR_2; break;
                    case 1: VAR_16.regnum = VAR_4; break;
                    case 2: VAR_16.regnum = VAR_6; break;
                    case 3: VAR_16.regnum = VAR_8; break;
                    default:
                        FUNC_0("Unexpected TEXTURE register t%u\n", VAR_14->regnum);
                        return *VAR_14;
                }
                return VAR_16;
            }




        default: return *VAR_14;
    }
}
