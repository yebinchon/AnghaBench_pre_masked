
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dim_m; } ;
struct ra_layout {scalar_t__ stride; } ;
struct sc_uniform {size_t offset; TYPE_2__ input; struct ra_layout layout; int v; } ;
struct ra_buf {int dummy; } ;
struct ra {TYPE_1__* fns; } ;
struct TYPE_3__ {int (* buf_update ) (struct ra*,struct ra_buf*,size_t,void*,scalar_t__) ;} ;


 struct ra_layout FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct ra*,struct ra_buf*,size_t,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ra *VAR_0, struct ra_buf *VAR_1, struct sc_uniform *VAR_2)
{
    uintptr_t VAR_3 = (uintptr_t) &VAR_2->v;
    size_t VAR_4 = VAR_2->offset;
    struct ra_layout VAR_5 = FUNC_0(&VAR_2->input);
    struct ra_layout VAR_6 = VAR_2->layout;

    for (int VAR_7 = 0; VAR_7 < VAR_2->input.dim_m; VAR_7++) {
        VAR_0->fns->buf_update(VAR_0, VAR_1, VAR_4, (void *)VAR_3, VAR_5.stride);
        VAR_3 += VAR_5.stride;
        VAR_4 += VAR_6.stride;
    }
}
