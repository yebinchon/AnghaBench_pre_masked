
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dim_m; } ;
struct ra_layout {scalar_t__ stride; } ;
struct sc_uniform {TYPE_1__ input; struct ra_layout layout; scalar_t__ offset; int v; } ;
struct ra {int dummy; } ;
typedef uintptr_t ptrdiff_t ;


 int FUNC_0 (void*,void*,scalar_t__) ;
 struct ra_layout FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct ra *VAR_0, void *VAR_1, struct sc_uniform *VAR_2)
{
    uintptr_t VAR_3 = (uintptr_t) &VAR_2->v;
    uintptr_t VAR_4 = (uintptr_t) VAR_1 + (ptrdiff_t) VAR_2->offset;
    struct ra_layout VAR_5 = FUNC_1(&VAR_2->input);
    struct ra_layout VAR_6 = VAR_2->layout;

    for (int VAR_7 = 0; VAR_7 < VAR_2->input.dim_m; VAR_7++) {
        FUNC_0((void *)VAR_4, (void *)VAR_3, VAR_5.stride);
        VAR_3 += VAR_5.stride;
        VAR_4 += VAR_6.stride;
    }
}
