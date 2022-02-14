
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct jsonsl_state_st {int level; scalar_t__ type; scalar_t__ nelem; } ;
typedef TYPE_1__* jsonsl_t ;
typedef int * jsonsl_jpr_t ;
typedef scalar_t__ jsonsl_jpr_match_t ;
struct TYPE_3__ {size_t* jpr_root; int jpr_count; int ** jprs; struct jsonsl_state_st* stack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int,char const*,size_t) ;
 int FUNC_1 (size_t*,int ,int) ;

jsonsl_jpr_t FUNC_2(jsonsl_t VAR_4,
                                    struct jsonsl_state_st *VAR_5,
                                    const char *VAR_6,
                                    size_t VAR_7,
                                    jsonsl_jpr_match_t *VAR_8)
{
    struct jsonsl_state_st *VAR_9;
    jsonsl_jpr_t VAR_10 = ((void*)0);


    size_t *VAR_11, *VAR_12;
    size_t VAR_13, VAR_14, VAR_15;

    if (!VAR_4->jpr_root) {
        *VAR_8 = VAR_1;
        return ((void*)0);
    }

    VAR_12 = VAR_4->jpr_root + (VAR_4->jpr_count * (VAR_5->level-1));
    VAR_11 = VAR_12 + VAR_4->jpr_count;


    if (*VAR_12 == 0) {
        *VAR_11 = 0;
        *VAR_8 = VAR_1;
        return ((void*)0);
    }

    VAR_9 = VAR_4->stack + VAR_5->level - 1;

    if (VAR_9->type == VAR_3) {
        VAR_7 = (size_t) VAR_9->nelem;
    }

    *VAR_11 = 0;
    VAR_15 = 0;
    FUNC_1(VAR_11, 0, sizeof(int) * VAR_4->jpr_count);

    for (VAR_14 = 0; VAR_14 < VAR_4->jpr_count; VAR_14++) {
        VAR_13 = VAR_12[VAR_14];
        if (VAR_13) {
            jsonsl_jpr_t VAR_16 = VAR_4->jprs[VAR_13-1];
            *VAR_8 = FUNC_0(VAR_16,
                                    VAR_9->type,
                                    VAR_9->level,
                                    VAR_6, VAR_7);
            if (*VAR_8 == VAR_0) {
                VAR_10 = VAR_16;
                *VAR_11 = 0;
                return VAR_10;
            } else if (*VAR_8 == VAR_2) {
                VAR_11[VAR_15] = VAR_14+1;
                VAR_15++;
            }
        } else {
            break;
        }
    }
    if (!*VAR_11) {
        *VAR_8 = VAR_1;
    }
    return ((void*)0);
}
