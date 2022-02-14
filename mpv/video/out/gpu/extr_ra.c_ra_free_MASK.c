
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra {TYPE_1__* fns; } ;
struct TYPE_2__ {int (* destroy ) (struct ra*) ;} ;


 int FUNC_0 (struct ra*) ;
 int FUNC_1 (struct ra*) ;

void FUNC_2(struct ra **VAR_0)
{
    if (*VAR_0)
        (*VAR_0)->fns->destroy(*VAR_0);
    FUNC_1(*VAR_0);
    *VAR_0 = ((void*)0);
}
