
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef struct __wait_queue* wait_queue_t ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct __wait_queue {int dummy; } ;


 int FUNC_0 (TYPE_1__*,struct __wait_queue*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(wait_queue_head_t *VAR_0, wait_queue_t *VAR_1)
{
    unsigned long VAR_2;
    struct __wait_queue *VAR_3 = *VAR_1;

    FUNC_1(&VAR_0->lock, VAR_2);
    FUNC_0(VAR_0, VAR_3);
    FUNC_2(&VAR_0->lock, VAR_2);
}
