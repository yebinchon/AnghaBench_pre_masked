
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {size_t entries; int ** table; } ;
typedef TYPE_1__ json_array_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

int FUNC_3(json_t *VAR_0, size_t VAR_1, json_t *VAR_2)
{
    json_array_t *VAR_3;

    if(!VAR_2)
        return -1;

    if(!FUNC_1(VAR_0) || VAR_0 == VAR_2)
    {
        FUNC_0(VAR_2);
        return -1;
    }
    VAR_3 = FUNC_2(VAR_0);

    if(VAR_1 >= VAR_3->entries)
    {
        FUNC_0(VAR_2);
        return -1;
    }

    FUNC_0(VAR_3->table[VAR_1]);
    VAR_3->table[VAR_1] = VAR_2;

    return 0;
}
