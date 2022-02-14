
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef struct __wait_queue* wait_queue_t ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct __wait_queue {int task_list; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct __wait_queue*) ;
 scalar_t__ FUNC_1 (struct __wait_queue*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(wait_queue_head_t *VAR_1, wait_queue_t *VAR_2, int VAR_3)
{
    unsigned long VAR_4;
    struct __wait_queue *VAR_5 = *VAR_2;

    VAR_5->flags |= VAR_0;
    FUNC_4(&VAR_1->lock, VAR_4);
    if (FUNC_2(&VAR_5->task_list))
        FUNC_0(VAR_1, VAR_5);




    if (FUNC_1(VAR_5))
        FUNC_3(VAR_3);
    FUNC_5(&VAR_1->lock, VAR_4);
}
