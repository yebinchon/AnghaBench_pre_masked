
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int task_list; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct __wait_queue {int task_list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(wait_queue_head_t *VAR_0,
        struct __wait_queue *VAR_1)
{
    FUNC_0(&VAR_1->task_list, &VAR_0->task_list);
}
