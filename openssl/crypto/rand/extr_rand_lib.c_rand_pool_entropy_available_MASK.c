
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ entropy; scalar_t__ entropy_requested; scalar_t__ len; scalar_t__ min_len; } ;
typedef TYPE_1__ RAND_POOL ;



size_t FUNC_0(RAND_POOL *VAR_0)
{
    if (VAR_0->entropy < VAR_0->entropy_requested)
        return 0;

    if (VAR_0->len < VAR_0->min_len)
        return 0;

    return VAR_0->entropy;
}
