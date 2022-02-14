
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dv_copyID; scalar_t__ dv_refcount; scalar_t__ dv_scope; scalar_t__ dv_lock; int dv_hashtab; struct TYPE_4__* dv_used_prev; struct TYPE_4__* dv_used_next; } ;
typedef TYPE_1__ dict_T ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;

dict_T *
FUNC_2()
{
    dict_T *VAR_1;

    VAR_1 = (dict_T *)FUNC_0(sizeof(dict_T));
    if (VAR_1 != ((void*)0))
    {

 if (VAR_0 != ((void*)0))
     VAR_0->dv_used_prev = VAR_1;
 VAR_1->dv_used_next = VAR_0;
 VAR_1->dv_used_prev = ((void*)0);
 VAR_0 = VAR_1;

 FUNC_1(&VAR_1->dv_hashtab);
 VAR_1->dv_lock = 0;
 VAR_1->dv_scope = 0;
 VAR_1->dv_refcount = 0;
 VAR_1->dv_copyID = 0;
    }
    return VAR_1;
}
