
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hash_table_elt {struct hash_table_elt* next; int name; } ;
struct hash_table_bucket {int dummy; } ;
struct hash_table {int num_buckets; int num_elts; TYPE_1__* buckets; int pool; } ;
struct TYPE_4__ {struct hash_table_elt* last; struct hash_table_elt* first; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_3 (int ,int) ;

void FUNC_4(struct hash_table* VAR_0, struct hash_table_elt* VAR_1)
{
    unsigned VAR_2 = FUNC_1(VAR_1->name, VAR_0->num_buckets);

    if (!VAR_0->buckets)
    {
        VAR_0->buckets = FUNC_3(VAR_0->pool, VAR_0->num_buckets * sizeof(struct hash_table_bucket));
        FUNC_0(VAR_0->buckets);
        FUNC_2(VAR_0->buckets, 0, VAR_0->num_buckets * sizeof(struct hash_table_bucket));
    }




    if (!VAR_0->buckets[VAR_2].first)
    {
        VAR_0->buckets[VAR_2].first = VAR_1;
    }
    else
    {
        VAR_0->buckets[VAR_2].last->next = VAR_1;
    }
    VAR_0->buckets[VAR_2].last = VAR_1;
    VAR_1->next = ((void*)0);
    VAR_0->num_elts++;
}
