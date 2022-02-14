
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef struct __wait_queue* wait_queue_t ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct __wait_queue {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct __wait_queue*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(wait_queue_head_t *VAR_1, wait_queue_t *VAR_2)
{
    unsigned long VAR_3;
    struct __wait_queue *VAR_4 = *VAR_2;

    VAR_4->flags |= VAR_0;
    FUNC_1(&VAR_1->lock, VAR_3);
    FUNC_0(VAR_1, VAR_4);
    FUNC_2(&VAR_1->lock, VAR_3);
}
