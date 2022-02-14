
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {size_t entries; size_t size; int ** table; } ;
typedef TYPE_1__ json_array_t ;


 int FUNC_0 (int **,int ,int **,int ,size_t) ;
 int FUNC_1 (int **) ;
 int ** FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t,int) ;

__attribute__((used)) static json_t **FUNC_4(json_array_t *VAR_0,
                                size_t VAR_1,
                                int VAR_2)
{
    size_t VAR_3;
    json_t **VAR_4, **VAR_5;

    if(VAR_0->entries + VAR_1 <= VAR_0->size)
        return VAR_0->table;

    VAR_4 = VAR_0->table;

    VAR_3 = FUNC_3(VAR_0->size + VAR_1, VAR_0->size * 2);
    VAR_5 = FUNC_2(VAR_3 * sizeof(json_t *));
    if(!VAR_5)
        return ((void*)0);

    VAR_0->size = VAR_3;
    VAR_0->table = VAR_5;

    if(VAR_2) {
        FUNC_0(VAR_0->table, 0, VAR_4, 0, VAR_0->entries);
        FUNC_1(VAR_4);
        return VAR_0->table;
    }

    return VAR_4;
}
