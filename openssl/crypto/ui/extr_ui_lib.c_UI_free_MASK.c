
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; int lock; int ex_data; int strings; int user_data; TYPE_1__* meth; } ;
typedef TYPE_2__ UI ;
struct TYPE_7__ {int (* ui_destroy_data ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(UI *VAR_3)
{
    if (VAR_3 == ((void*)0))
        return;
    if ((VAR_3->flags & VAR_1) != 0) {
        VAR_3->meth->ui_destroy_data(VAR_3, VAR_3->user_data);
    }
    FUNC_3(VAR_3->strings, VAR_2);
    FUNC_1(VAR_0, VAR_3, &VAR_3->ex_data);
    FUNC_0(VAR_3->lock);
    FUNC_2(VAR_3);
}
