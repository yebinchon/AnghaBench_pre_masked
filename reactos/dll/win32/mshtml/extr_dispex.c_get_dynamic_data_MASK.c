
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dispex_dynamic_data_t ;
struct TYPE_8__ {int * dynamic_data; TYPE_1__* data; } ;
struct TYPE_7__ {int (* populate_props ) (TYPE_3__*) ;} ;
struct TYPE_6__ {TYPE_2__* vtbl; } ;
typedef TYPE_3__ DispatchEx ;


 int * FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static inline dispex_dynamic_data_t *FUNC_2(DispatchEx *VAR_0)
{
    if(VAR_0->dynamic_data)
        return VAR_0->dynamic_data;

    VAR_0->dynamic_data = FUNC_0(sizeof(dispex_dynamic_data_t));
    if(!VAR_0->dynamic_data)
        return ((void*)0);

    if(VAR_0->data->vtbl && VAR_0->data->vtbl->populate_props)
        VAR_0->data->vtbl->populate_props(VAR_0);

    return VAR_0->dynamic_data;
}
