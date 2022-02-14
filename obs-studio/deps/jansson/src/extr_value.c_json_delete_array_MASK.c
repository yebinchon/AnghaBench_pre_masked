
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t entries; struct TYPE_5__* table; } ;
typedef TYPE_1__ json_array_t ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(json_array_t *VAR_0)
{
    size_t VAR_1;

    for(VAR_1 = 0; VAR_1 < VAR_0->entries; VAR_1++)
        FUNC_0(VAR_0->table[VAR_1]);

    FUNC_1(VAR_0->table);
    FUNC_1(VAR_0);
}
