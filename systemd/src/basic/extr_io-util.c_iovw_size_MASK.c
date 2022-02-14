
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iovec_wrapper {size_t count; TYPE_1__* iovec; } ;
struct TYPE_2__ {scalar_t__ iov_len; } ;



size_t FUNC_0(struct iovec_wrapper *VAR_0) {
        size_t VAR_1 = 0, VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++)
                VAR_1 += VAR_0->iovec[VAR_2].iov_len;

        return VAR_1;
}
