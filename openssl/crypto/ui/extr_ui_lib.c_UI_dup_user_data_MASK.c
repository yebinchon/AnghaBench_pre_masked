
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; TYPE_1__* meth; } ;
typedef TYPE_2__ UI ;
struct TYPE_6__ {void* (* ui_duplicate_data ) (TYPE_2__*,void*) ;int * ui_destroy_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,void*) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (TYPE_2__*,void*) ;

int FUNC_3(UI *VAR_4, void *VAR_5)
{
    void *VAR_6 = ((void*)0);

    if (VAR_4->meth->ui_duplicate_data == ((void*)0)
        || VAR_4->meth->ui_destroy_data == ((void*)0)) {
        FUNC_1(VAR_2, VAR_3);
        return -1;
    }

    VAR_6 = VAR_4->meth->ui_duplicate_data(VAR_4, VAR_5);
    if (VAR_6 == ((void*)0)) {
        FUNC_1(VAR_2, VAR_0);
        return -1;
    }

    (void)FUNC_0(VAR_4, VAR_6);
    VAR_4->flags |= VAR_1;

    return 0;
}
