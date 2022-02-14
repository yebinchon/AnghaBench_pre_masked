
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __wait_queue {int event; int task_list; void* private; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct __wait_queue* FUNC_3 (int,int ) ;
 int FUNC_4 (struct __wait_queue*,int ,int) ;

struct __wait_queue *
FUNC_5()
{
    struct __wait_queue * VAR_4 = ((void*)0);
    VAR_4 = FUNC_3(sizeof(struct __wait_queue), VAR_1);
    if (!VAR_4) {
        return ((void*)0);
    }

    FUNC_4(VAR_4, 0, sizeof(struct __wait_queue));
    VAR_4->flags = VAR_3;
    VAR_4->private = (void *)FUNC_1();
    FUNC_0(&VAR_4->task_list);
    FUNC_2(&(VAR_4->event),
                      VAR_2,
                      VAR_0);

    return VAR_4;
}
