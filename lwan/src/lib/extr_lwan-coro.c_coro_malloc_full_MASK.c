
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coro {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (struct coro*,void (*) (void*),void*) ;
 void* FUNC_2 (size_t) ;

void *FUNC_3(struct coro *VAR_0,
                       size_t VAR_1,
                       void (*VAR_2)(void *VAR_3))
{
    void *VAR_4 = FUNC_2(VAR_1);

    if (FUNC_0(VAR_4))
        FUNC_1(VAR_0, VAR_2, VAR_4);

    return VAR_4;
}
