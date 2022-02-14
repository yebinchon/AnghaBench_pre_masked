
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_buf {int dummy; } ;
struct ra {TYPE_1__* fns; } ;
struct TYPE_2__ {int (* buf_destroy ) (struct ra*,struct ra_buf*) ;} ;


 int FUNC_0 (struct ra*,struct ra_buf*) ;

void FUNC_1(struct ra *VAR_0, struct ra_buf **VAR_1)
{
    if (*VAR_1)
        VAR_0->fns->buf_destroy(VAR_0, *VAR_1);
    *VAR_1 = ((void*)0);
}
