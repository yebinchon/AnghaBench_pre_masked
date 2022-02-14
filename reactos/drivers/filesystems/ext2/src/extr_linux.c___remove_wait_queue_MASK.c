
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct __wait_queue {int task_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(wait_queue_head_t *VAR_0,
                                       struct __wait_queue *VAR_1)
{
    FUNC_0(&VAR_1->task_list);
}
