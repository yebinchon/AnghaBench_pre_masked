
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; } ;
struct mp_cancel {scalar_t__* wakeup_pipe; int wakeup; int lock; scalar_t__ win32_event; TYPE_1__ slaves; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mp_cancel*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
    struct mp_cancel *VAR_1 = VAR_0;

    FUNC_1(!VAR_1->slaves.head);

    FUNC_3(VAR_1, ((void*)0));

    if (VAR_1->wakeup_pipe[0] >= 0) {
        FUNC_2(VAR_1->wakeup_pipe[0]);
        FUNC_2(VAR_1->wakeup_pipe[1]);
    }






    FUNC_5(&VAR_1->lock);
    FUNC_4(&VAR_1->wakeup);
}
