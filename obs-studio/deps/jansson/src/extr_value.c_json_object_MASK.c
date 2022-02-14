
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_4__ {int json; scalar_t__ visited; int hashtable; } ;
typedef TYPE_1__ json_object_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;

json_t *FUNC_5(void)
{
    json_object_t *VAR_2 = FUNC_4(sizeof(json_object_t));
    if(!VAR_2)
        return ((void*)0);

    if (!VAR_1) {

        FUNC_2(0);
    }

    FUNC_1(&VAR_2->json, VAR_0);

    if(FUNC_0(&VAR_2->hashtable))
    {
        FUNC_3(VAR_2);
        return ((void*)0);
    }

    VAR_2->visited = 0;

    return &VAR_2->json;
}
