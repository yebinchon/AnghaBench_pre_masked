
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_5__ {size_t entries; int ** table; } ;
typedef TYPE_1__ json_array_t ;


 int FUNC_0 (int **,size_t,int **,size_t,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t,size_t,size_t) ;
 int ** FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int **) ;

int FUNC_7(json_t *VAR_0, size_t VAR_1, json_t *VAR_2)
{
    json_array_t *VAR_3;
    json_t **VAR_4;

    if(!VAR_2)
        return -1;

    if(!FUNC_4(VAR_0) || VAR_0 == VAR_2) {
        FUNC_3(VAR_2);
        return -1;
    }
    VAR_3 = FUNC_5(VAR_0);

    if(VAR_1 > VAR_3->entries) {
        FUNC_3(VAR_2);
        return -1;
    }

    VAR_4 = FUNC_2(VAR_3, 1, 0);
    if(!VAR_4) {
        FUNC_3(VAR_2);
        return -1;
    }

    if(VAR_4 != VAR_3->table) {
        FUNC_0(VAR_3->table, 0, VAR_4, 0, VAR_1);
        FUNC_0(VAR_3->table, VAR_1 + 1, VAR_4, VAR_1,
                   VAR_3->entries - VAR_1);
        FUNC_6(VAR_4);
    }
    else
        FUNC_1(VAR_3, VAR_1 + 1, VAR_1, VAR_3->entries - VAR_1);

    VAR_3->table[VAR_1] = VAR_2;
    VAR_3->entries++;

    return 0;
}
