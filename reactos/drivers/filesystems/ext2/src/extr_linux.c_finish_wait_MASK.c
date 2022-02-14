
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef struct __wait_queue* wait_queue_t ;
struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct __wait_queue {int task_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct __wait_queue*) ;

void FUNC_6(wait_queue_head_t *VAR_1, wait_queue_t *VAR_2)
{
    unsigned long VAR_3;
    struct __wait_queue *VAR_4 = *VAR_2;

    FUNC_0(VAR_0);
    if (!FUNC_2(&VAR_4->task_list)) {
        FUNC_3(&VAR_1->lock, VAR_3);
        FUNC_1(&VAR_4->task_list);
        FUNC_4(&VAR_1->lock, VAR_3);
    }


    FUNC_5(VAR_4);
}
