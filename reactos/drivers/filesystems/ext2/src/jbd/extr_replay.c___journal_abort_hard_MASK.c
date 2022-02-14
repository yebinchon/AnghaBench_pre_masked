
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_tid; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_6__ {int j_flags; int j_state_lock; TYPE_1__* j_running_transaction; } ;
typedef TYPE_2__ journal_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(journal_t *VAR_1)
{
    transaction_t *VAR_2;

    if (VAR_1->j_flags & VAR_0)
        return;

    FUNC_1(&VAR_1->j_state_lock);
    VAR_1->j_flags |= VAR_0;
    VAR_2 = VAR_1->j_running_transaction;
    if (VAR_2)
        FUNC_0(VAR_1, VAR_2->t_tid);
    FUNC_2(&VAR_1->j_state_lock);
}
