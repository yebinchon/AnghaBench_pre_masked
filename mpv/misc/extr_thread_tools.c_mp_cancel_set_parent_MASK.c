
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cancel {int lock; struct mp_cancel* parent; int slaves; } ;


 int FUNC_0 (int ,int *,struct mp_cancel*) ;
 int FUNC_1 (int ,int *,struct mp_cancel*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mp_cancel*) ;
 int VAR_0 ;

void FUNC_5(struct mp_cancel *VAR_1, struct mp_cancel *VAR_2)
{



    if (VAR_1->parent == VAR_2)
        return;
    if (VAR_1->parent) {
        FUNC_2(&VAR_1->parent->lock);
        FUNC_1(VAR_0, &VAR_1->parent->slaves, VAR_1);
        FUNC_3(&VAR_1->parent->lock);
    }
    VAR_1->parent = VAR_2;
    if (VAR_1->parent) {
        FUNC_2(&VAR_1->parent->lock);
        FUNC_0(VAR_0, &VAR_1->parent->slaves, VAR_1);
        FUNC_4(VAR_1->parent);
        FUNC_3(&VAR_1->parent->lock);
    }
}
