
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hook_handler {scalar_t__ priority; int seq; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    struct hook_handler **VAR_2 = (void *)VAR_0;
    struct hook_handler **VAR_3 = (void *)VAR_1;
    if ((*VAR_2)->priority != (*VAR_3)->priority)
        return (*VAR_2)->priority - (*VAR_3)->priority;
    return (*VAR_2)->seq - (*VAR_3)->seq;
}
