
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct jsonsl_jpr_component_st {scalar_t__ ptype; } ;
typedef TYPE_1__* jsonsl_jpr_t ;
typedef int jsonsl_jpr_match_t ;
struct TYPE_3__ {int ncomponents; scalar_t__ match_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static jsonsl_jpr_match_t
FUNC_0(jsonsl_jpr_t VAR_6,
                       const struct jsonsl_jpr_component_st *VAR_7,
                       unsigned VAR_8, unsigned VAR_9)
{
    const struct jsonsl_jpr_component_st *VAR_10 = VAR_7 + 1;
    if (VAR_8 == VAR_6->ncomponents - 1) {


        if (VAR_6->match_type == 0 || VAR_6->match_type == VAR_9) {
            return VAR_0;
        } else {
            return VAR_2;
        }
    }
    if (VAR_9 == VAR_4) {
        if (VAR_10->ptype == VAR_3) {
            return VAR_1;
        } else {
            return VAR_2;
        }
    } else if (VAR_9 == VAR_5) {
        if (VAR_10->ptype == VAR_3) {
            return VAR_2;
        } else {
            return VAR_1;
        }
    } else {
        return VAR_2;
    }
}
