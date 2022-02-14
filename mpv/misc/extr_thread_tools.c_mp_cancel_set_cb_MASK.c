
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cancel {void (* cb ) (void*) ;int lock; void* cb_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mp_cancel*) ;

void FUNC_3(struct mp_cancel *VAR_0, void (*VAR_1)(void *VAR_2), void *VAR_3)
{
    FUNC_0(&VAR_0->lock);
    VAR_0->cb = VAR_1;
    VAR_0->cb_ctx = VAR_3;
    FUNC_2(VAR_0);
    FUNC_1(&VAR_0->lock);
}
