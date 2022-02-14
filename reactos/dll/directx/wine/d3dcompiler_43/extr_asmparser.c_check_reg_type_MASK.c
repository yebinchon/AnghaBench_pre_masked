
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {unsigned int type; scalar_t__ regnum; scalar_t__ rel_reg; } ;
struct allowed_reg_type {unsigned int type; scalar_t__ count; scalar_t__ reladdr; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const struct shader_reg *VAR_2,
                           const struct allowed_reg_type *VAR_3) {
    unsigned int VAR_4 = 0;

    while(VAR_3[VAR_4].type != ~0U) {
        if(VAR_2->type == VAR_3[VAR_4].type) {
            if(VAR_2->rel_reg) {
                if(VAR_3[VAR_4].reladdr)
                    return VAR_1;


                return VAR_0;
            }
            if(VAR_2->regnum < VAR_3[VAR_4].count) return VAR_1;
            return VAR_0;
        }
        VAR_4++;
    }
    return VAR_0;
}
