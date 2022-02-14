
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* mp_obj_t ;
typedef int mp_obj_iter_buf_t ;
struct TYPE_4__ {int * type; } ;
struct TYPE_5__ {void** args; TYPE_1__ base; } ;
typedef TYPE_2__ mp_obj_getitem_iter_t ;


 void* FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

mp_obj_t FUNC_3(mp_obj_t *VAR_1, mp_obj_iter_buf_t *VAR_2) {
    FUNC_2(sizeof(mp_obj_getitem_iter_t) <= sizeof(mp_obj_iter_buf_t));
    mp_obj_getitem_iter_t *VAR_3 = (mp_obj_getitem_iter_t*)VAR_2;
    VAR_3->base.type = &VAR_0;
    VAR_3->args[0] = VAR_1[0];
    VAR_3->args[1] = VAR_1[1];
    VAR_3->args[2] = FUNC_1(0);
    return FUNC_0(VAR_3);
}
