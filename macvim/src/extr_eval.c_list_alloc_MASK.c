
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* lv_used_next; struct TYPE_4__* lv_used_prev; } ;
typedef TYPE_1__ list_T ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

list_T *
FUNC_1()
{
    list_T *VAR_1;

    VAR_1 = (list_T *)FUNC_0(sizeof(list_T));
    if (VAR_1 != ((void*)0))
    {

 if (VAR_0 != ((void*)0))
     VAR_0->lv_used_prev = VAR_1;
 VAR_1->lv_used_prev = ((void*)0);
 VAR_1->lv_used_next = VAR_0;
 VAR_0 = VAR_1;
    }
    return VAR_1;
}
