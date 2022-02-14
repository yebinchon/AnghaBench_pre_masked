
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {int * array; scalar_t__ nr; scalar_t__ size; } ;



__attribute__((used)) static inline void FUNC_0(struct hash_table *VAR_0)
{
    VAR_0->size = 0;
    VAR_0->nr = 0;
    VAR_0->array = ((void*)0);
}
