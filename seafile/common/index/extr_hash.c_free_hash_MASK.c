
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {scalar_t__ nr; scalar_t__ size; int * array; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct hash_table *VAR_0)
{
    FUNC_0(VAR_0->array);
    VAR_0->array = ((void*)0);
    VAR_0->size = 0;
    VAR_0->nr = 0;
}
