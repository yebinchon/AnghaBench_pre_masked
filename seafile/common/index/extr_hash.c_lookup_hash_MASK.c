
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_table {int array; } ;
struct TYPE_2__ {void* ptr; } ;


 TYPE_1__* FUNC_0 (unsigned int,struct hash_table const*) ;

void *FUNC_1(unsigned int VAR_0, const struct hash_table *VAR_1)
{
    if (!VAR_1->array)
        return ((void*)0);
    return FUNC_0(VAR_0, VAR_1)->ptr;
}
