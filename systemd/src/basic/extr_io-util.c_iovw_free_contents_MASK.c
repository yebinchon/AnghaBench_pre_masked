
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iovec_wrapper {size_t count; scalar_t__ size_bytes; TYPE_1__* iovec; } ;
struct TYPE_3__ {int iov_base; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct iovec_wrapper *VAR_0, bool VAR_1) {
        if (VAR_1)
                for (size_t VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++)
                        FUNC_0(VAR_0->iovec[VAR_2].iov_base);

        VAR_0->iovec = FUNC_1(VAR_0->iovec);
        VAR_0->count = 0;
        VAR_0->size_bytes = 0;
}
