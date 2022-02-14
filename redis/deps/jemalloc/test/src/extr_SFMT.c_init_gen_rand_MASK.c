
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int w128_t ;
typedef int uint32_t ;
struct TYPE_6__ {int idx; int initialized; TYPE_1__* sfmt; } ;
typedef TYPE_2__ sfmt_t ;
struct TYPE_5__ {int* u; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (void**,int,int) ;

sfmt_t *FUNC_3(uint32_t VAR_1) {
    void *VAR_2;
    sfmt_t *VAR_3;
    int VAR_4;
    uint32_t *VAR_5;

    if (FUNC_2(&VAR_2, sizeof(w128_t), sizeof(sfmt_t)) != 0) {
 return ((void*)0);
    }
    VAR_3 = (sfmt_t *)VAR_2;
    VAR_5 = &VAR_3->sfmt[0].u[0];

    VAR_5[FUNC_0(0)] = VAR_1;
    for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
 VAR_5[FUNC_0(VAR_4)] = 1812433253UL * (VAR_5[FUNC_0(VAR_4 - 1)]
         ^ (VAR_5[FUNC_0(VAR_4 - 1)] >> 30))
     + VAR_4;
    }
    VAR_3->idx = VAR_0;
    FUNC_1(VAR_3);
    VAR_3->initialized = 1;

    return VAR_3;
}
