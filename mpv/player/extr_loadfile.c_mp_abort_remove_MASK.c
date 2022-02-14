
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_abort_entry {int cancel; } ;
struct MPContext {int num_abort_list; int abort_lock; struct mp_abort_entry** abort_list; } ;


 int FUNC_0 (struct mp_abort_entry**,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct MPContext *VAR_0, struct mp_abort_entry *VAR_1)
{
    FUNC_3(&VAR_0->abort_lock);
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_abort_list; VAR_2++) {
        if (VAR_0->abort_list[VAR_2] == VAR_1) {
            FUNC_0(VAR_0->abort_list, VAR_0->num_abort_list, VAR_2);
            FUNC_1(&VAR_1->cancel);
            VAR_1 = ((void*)0);
            break;
        }
    }
    FUNC_2(!VAR_1);
    FUNC_4(&VAR_0->abort_lock);
}
