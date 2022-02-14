
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int q_lock; scalar_t__ event_q; } ;
typedef TYPE_1__ WTStatus ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (WTStatus *VAR_1)
{
    if (VAR_1->event_q) {
        FUNC_1 (VAR_1->event_q, VAR_0, ((void*)0));
        FUNC_2 (VAR_1->event_q);
    }
    FUNC_3 (&VAR_1->q_lock);
    FUNC_0 (VAR_1);
}
