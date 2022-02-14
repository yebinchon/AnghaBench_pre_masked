
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int dummy; } ;
struct hash_table {unsigned int num_buckets; int * buckets; struct pool* pool; scalar_t__ num_elts; } ;



void FUNC_0(struct pool* VAR_0, struct hash_table* VAR_1, unsigned VAR_2)
{
    VAR_1->num_elts = 0;
    VAR_1->num_buckets = VAR_2;
    VAR_1->pool = VAR_0;
    VAR_1->buckets = ((void*)0);
}
