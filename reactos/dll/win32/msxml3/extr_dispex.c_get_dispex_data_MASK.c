
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dispex_data_t ;
struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int * data; } ;
typedef TYPE_2__ DispatchEx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static dispex_data_t *FUNC_3(DispatchEx *VAR_1)
{
    if(VAR_1->data->data)
        return VAR_1->data->data;

    FUNC_0(&VAR_0);

    if(!VAR_1->data->data)
        VAR_1->data->data = FUNC_2(VAR_1);

    FUNC_1(&VAR_0);

    return VAR_1->data->data;
}
