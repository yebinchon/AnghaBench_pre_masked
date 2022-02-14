
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; void* user_data; TYPE_1__* meth; } ;
typedef TYPE_2__ UI ;
struct TYPE_5__ {int (* ui_destroy_data ) (TYPE_2__*,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,void*) ;

void *FUNC_1(UI *VAR_1, void *VAR_2)
{
    void *VAR_3 = VAR_1->user_data;

    if ((VAR_1->flags & VAR_0) != 0) {
        VAR_1->meth->ui_destroy_data(VAR_1, VAR_3);
        VAR_3 = ((void*)0);
    }
    VAR_1->user_data = VAR_2;
    VAR_1->flags &= ~VAR_0;
    return VAR_3;
}
