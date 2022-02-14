
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_4__ {size_t entries; int * table; } ;
typedef TYPE_1__ json_array_t ;


 int FUNC_0 (int *,size_t,int *,int ,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;

int FUNC_5(json_t *VAR_0, json_t *VAR_1)
{
    json_array_t *VAR_2, *VAR_3;
    size_t VAR_4;

    if(!FUNC_3(VAR_0) || !FUNC_3(VAR_1))
        return -1;
    VAR_2 = FUNC_4(VAR_0);
    VAR_3 = FUNC_4(VAR_1);

    if(!FUNC_1(VAR_2, VAR_3->entries, 1))
        return -1;

    for(VAR_4 = 0; VAR_4 < VAR_3->entries; VAR_4++)
        FUNC_2(VAR_3->table[VAR_4]);

    FUNC_0(VAR_2->table, VAR_2->entries, VAR_3->table, 0, VAR_3->entries);

    VAR_2->entries += VAR_3->entries;
    return 0;
}
