
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_abort_entry {scalar_t__ cancel; } ;
struct MPContext {int abort_lock; int num_abort_list; int abort_list; } ;


 int FUNC_0 (int *,int ,int ,struct mp_abort_entry*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct MPContext*,struct mp_abort_entry*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct MPContext *VAR_0, struct mp_abort_entry *VAR_1)
{
    FUNC_4(&VAR_0->abort_lock);
    FUNC_1(!VAR_1->cancel);
    VAR_1->cancel = FUNC_3(((void*)0));
    FUNC_0(((void*)0), VAR_0->abort_list, VAR_0->num_abort_list, VAR_1);
    FUNC_2(VAR_0, VAR_1);
    FUNC_5(&VAR_0->abort_lock);
}
