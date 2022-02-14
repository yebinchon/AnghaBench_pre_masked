
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_buf_params {int initial_data; } ;
struct ra_buf_pool {size_t index; size_t num_buffers; struct ra_buf** buffers; struct ra_buf_params current_params; } ;
struct ra_buf {int dummy; } ;
struct ra {TYPE_1__* fns; } ;
struct TYPE_2__ {int (* buf_poll ) (struct ra*,struct ra_buf*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ra_buf_params const*,struct ra_buf_params*) ;
 int FUNC_2 (struct ra*,struct ra_buf_pool*) ;
 int FUNC_3 (struct ra*,struct ra_buf_pool*) ;
 int FUNC_4 (struct ra*,struct ra_buf*) ;

struct ra_buf *FUNC_5(struct ra *VAR_0, struct ra_buf_pool *VAR_1,
                               const struct ra_buf_params *VAR_2)
{
    FUNC_0(!VAR_2->initial_data);

    if (!FUNC_1(VAR_2, &VAR_1->current_params)) {
        FUNC_3(VAR_0, VAR_1);
        VAR_1->current_params = *VAR_2;
    }


    if (!VAR_1->buffers && !FUNC_2(VAR_0, VAR_1))
        return ((void*)0);


    if (!VAR_0->fns->buf_poll(VAR_0, VAR_1->buffers[VAR_1->index]) &&
        !FUNC_2(VAR_0, VAR_1))
    {
        return ((void*)0);
    }

    struct ra_buf *VAR_3 = VAR_1->buffers[VAR_1->index++];
    VAR_1->index %= VAR_1->num_buffers;

    return VAR_3;
}
