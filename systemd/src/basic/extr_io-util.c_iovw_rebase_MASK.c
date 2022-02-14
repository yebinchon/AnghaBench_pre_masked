
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iovec_wrapper {size_t count; TYPE_1__* iovec; } ;
struct TYPE_2__ {char* iov_base; } ;



void FUNC_0(struct iovec_wrapper *VAR_0, char *VAR_1, char *VAR_2) {
        size_t VAR_3;

        for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++)
                VAR_0->iovec[VAR_3].iov_base = (char *)VAR_0->iovec[VAR_3].iov_base - VAR_1 + VAR_2;
}
