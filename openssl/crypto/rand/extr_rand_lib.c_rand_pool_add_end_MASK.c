
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t alloc_len; size_t len; size_t entropy; } ;
typedef TYPE_1__ RAND_POOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(RAND_POOL *VAR_2, size_t VAR_3, size_t VAR_4)
{
    if (VAR_3 > VAR_2->alloc_len - VAR_2->len) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_3 > 0) {
        VAR_2->len += VAR_3;
        VAR_2->entropy += VAR_4;
    }

    return 1;
}
