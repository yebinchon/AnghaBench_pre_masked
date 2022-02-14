
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int size; int json; scalar_t__ visited; void* table; scalar_t__ entries; } ;
typedef TYPE_1__ json_array_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int) ;

json_t *FUNC_3(void)
{
    json_array_t *VAR_1 = FUNC_2(sizeof(json_array_t));
    if(!VAR_1)
        return ((void*)0);
    FUNC_0(&VAR_1->json, VAR_0);

    VAR_1->entries = 0;
    VAR_1->size = 8;

    VAR_1->table = FUNC_2(VAR_1->size * sizeof(json_t *));
    if(!VAR_1->table) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }

    VAR_1->visited = 0;

    return &VAR_1->json;
}
