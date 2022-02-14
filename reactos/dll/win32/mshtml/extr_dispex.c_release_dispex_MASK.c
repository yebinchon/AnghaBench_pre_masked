
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int prop_cnt; struct TYPE_14__* func_disps; int val; TYPE_4__* func_obj; struct TYPE_14__* props; struct TYPE_14__* name; int var; } ;
typedef TYPE_5__ func_obj_entry_t ;
typedef TYPE_5__ dynamic_prop_t ;
struct TYPE_15__ {TYPE_5__* dynamic_data; TYPE_2__* data; } ;
struct TYPE_12__ {int IDispatchEx_iface; } ;
struct TYPE_13__ {TYPE_3__ dispex; int * obj; } ;
struct TYPE_11__ {TYPE_1__* data; } ;
struct TYPE_10__ {int func_disp_cnt; } ;
typedef TYPE_7__ DispatchEx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*) ;

void FUNC_3(DispatchEx *VAR_0)
{
    dynamic_prop_t *VAR_1;

    if(!VAR_0->dynamic_data)
        return;

    for(VAR_1 = VAR_0->dynamic_data->props; VAR_1 < VAR_0->dynamic_data->props + VAR_0->dynamic_data->prop_cnt; VAR_1++) {
        FUNC_1(&VAR_1->var);
        FUNC_2(VAR_1->name);
    }

    FUNC_2(VAR_0->dynamic_data->props);

    if(VAR_0->dynamic_data->func_disps) {
        func_obj_entry_t *VAR_2;

        for(VAR_2 = VAR_0->dynamic_data->func_disps; VAR_2 < VAR_0->dynamic_data->func_disps+VAR_0->data->data->func_disp_cnt; VAR_2++) {
            if(VAR_2->func_obj) {
                VAR_2->func_obj->obj = ((void*)0);
                FUNC_0(&VAR_2->func_obj->dispex.IDispatchEx_iface);
            }
            FUNC_1(&VAR_2->val);
        }

        FUNC_2(VAR_0->dynamic_data->func_disps);
    }

    FUNC_2(VAR_0->dynamic_data);
}
