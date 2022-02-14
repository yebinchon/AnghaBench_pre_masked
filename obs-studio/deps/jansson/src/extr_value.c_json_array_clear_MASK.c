
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {size_t entries; int * table; } ;
typedef TYPE_1__ json_array_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

int FUNC_3(json_t *VAR_0)
{
    json_array_t *VAR_1;
    size_t VAR_2;

    if(!FUNC_1(VAR_0))
        return -1;
    VAR_1 = FUNC_2(VAR_0);

    for(VAR_2 = 0; VAR_2 < VAR_1->entries; VAR_2++)
        FUNC_0(VAR_1->table[VAR_2]);

    VAR_1->entries = 0;
    return 0;
}
