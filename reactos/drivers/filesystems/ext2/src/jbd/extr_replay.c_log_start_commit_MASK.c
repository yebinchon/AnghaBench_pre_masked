
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_4__ {int j_state_lock; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(journal_t *VAR_0, tid_t VAR_1)
{
    int VAR_2;

    FUNC_1(&VAR_0->j_state_lock);
    VAR_2 = FUNC_0(VAR_0, VAR_1);
    FUNC_2(&VAR_0->j_state_lock);
    return VAR_2;
}
