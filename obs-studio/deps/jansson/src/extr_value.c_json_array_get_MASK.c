
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {size_t entries; int ** table; } ;
typedef TYPE_1__ json_array_t ;


 int FUNC_0 (int const*) ;
 TYPE_1__* FUNC_1 (int const*) ;

json_t *FUNC_2(const json_t *VAR_0, size_t VAR_1)
{
    json_array_t *VAR_2;
    if(!FUNC_0(VAR_0))
        return ((void*)0);
    VAR_2 = FUNC_1(VAR_0);

    if(VAR_1 >= VAR_2->entries)
        return ((void*)0);

    return VAR_2->table[VAR_1];
}
