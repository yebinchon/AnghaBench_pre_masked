
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {scalar_t__ tei_entity; scalar_t__ tei_instance; int * context; } ;
struct TYPE_4__ {scalar_t__ tei_entity; scalar_t__ tei_instance; } ;
typedef TYPE_1__ TDIEntityID ;
typedef int * PVOID ;
typedef int KIRQL ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

PVOID FUNC_3(TDIEntityID VAR_3)
{
    UINT VAR_4;
    KIRQL VAR_5;
    PVOID VAR_6;

    FUNC_1(&VAR_2, &VAR_5);

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
        if (VAR_1[VAR_4].tei_entity == VAR_3.tei_entity &&
            VAR_1[VAR_4].tei_instance == VAR_3.tei_instance)
            break;
    }

    if (VAR_4 == VAR_0)
    {
        FUNC_2(&VAR_2, VAR_5);
        FUNC_0("WARNING: Unable to get context for %d %d\n", VAR_3.tei_entity, VAR_3.tei_instance);
        return ((void*)0);
    }

    VAR_6 = VAR_1[VAR_4].context;

    FUNC_2(&VAR_2, VAR_5);

    return VAR_6;
}
