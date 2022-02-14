
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra {int * fns; } ;
struct pl_gpu {int dummy; } ;


 struct pl_gpu const* FUNC_0 (struct ra const*) ;
 int VAR_0 ;

const struct pl_gpu *FUNC_1(const struct ra *VAR_1)
{
    return VAR_1->fns == &VAR_0 ? FUNC_0(VAR_1) : ((void*)0);
}
