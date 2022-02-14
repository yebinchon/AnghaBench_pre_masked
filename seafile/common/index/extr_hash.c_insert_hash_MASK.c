
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {unsigned int nr; int size; } ;


 int FUNC_0 (struct hash_table*) ;
 void** FUNC_1 (unsigned int,void*,struct hash_table*) ;

void **FUNC_2(unsigned int VAR_0, void *VAR_1, struct hash_table *VAR_2)
{
    unsigned int VAR_3 = VAR_2->nr;
    if (VAR_3 >= VAR_2->size/2)
        FUNC_0(VAR_2);
    return FUNC_1(VAR_0, VAR_1, VAR_2);
}
