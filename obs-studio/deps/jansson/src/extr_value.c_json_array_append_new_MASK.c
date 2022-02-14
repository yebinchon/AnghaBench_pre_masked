
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_4__ {size_t entries; int ** table; } ;
typedef TYPE_1__ json_array_t ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;

int FUNC_4(json_t *VAR_0, json_t *VAR_1)
{
    json_array_t *VAR_2;

    if(!VAR_1)
        return -1;

    if(!FUNC_2(VAR_0) || VAR_0 == VAR_1)
    {
        FUNC_1(VAR_1);
        return -1;
    }
    VAR_2 = FUNC_3(VAR_0);

    if(!FUNC_0(VAR_2, 1, 1)) {
        FUNC_1(VAR_1);
        return -1;
    }

    VAR_2->table[VAR_2->entries] = VAR_1;
    VAR_2->entries++;

    return 0;
}
